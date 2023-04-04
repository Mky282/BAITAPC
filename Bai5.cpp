#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
typedef struct{
    int *ptr;
    int size;
}Array;
int arr[2]={7,5};
int kq;
void CreateArray(Array *value){

    srand(time(NULL));
    value->size = 10 + rand() % (30 +1 - 10);
    int temp;
    printf("Kich thuoc cua array: %d\n", value->size);

    value->ptr = (int *)malloc(value->size * sizeof(int));

    for(int i = 0; i < value->size; i++){
        temp = rand() % 100;
        value->ptr[i] = temp;
    }
}
int UCLN(int x, int y)
{
	while (x != y)
	{
		if (x < y)
		{
			y = y - x;
		}
		else if (x > y)
		{
			x = x - y;
		}
	}
	return y;
}
int Tim_UCLN_Mang(int arr[], int n)
{
	int x = arr[0]; // cho giá trị UCLN là thằng đầu tiên 
	for (int i = 1; i < n; i++)
	{
		x = UCLN(x,arr[i]); // tìm UCLN của từng phần tử trong mảng bắt đầu từ thằng thứ 1 ---> n - 1 với x, mỗi lần tìm xong thì cập nhật UCLN vừa tìm được đó cho biến x
	}
	return x;
}
int main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    for (int i = 0; i < value.size; i++)
    {
        printf("arr[%d] = %d\n",i, value.ptr[i]);
    }

   printf("UCLN LA:%d",Tim_UCLN_Mang(arr,2)); 
}