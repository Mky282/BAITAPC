#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
typedef struct{
    int *ptr;
    int size;
}Array;

int kq=0,test;
void CreateArray(Array *value){

    srand(time(NULL));
    value->size = 10 + rand() % (30 +1 - 10);
    int temp;
    printf("Kich thuoc cua array: %d\n", value->size);

    value->ptr = (int *)malloc(value->size * sizeof(int));

    for(int i = 0; i < value->size; i++){
        temp = rand() % 200;
        value->ptr[i] = temp;
    }
}
   
bool Timsonguyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
 
        if (n % i == 0)
        {
            return false;
        }
    } 

    return true;
}
int main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    for (int i = 0; i < value.size; i++)
    {
        printf("arr[%d] = %d\n",i, value.ptr[i]);
    }
   for (int i = 0; i <value.size; i++)
    {
        if (Timsonguyento( value.ptr[i]))
        {
            printf("%d\t", value.ptr[i]);
            kq=value.ptr[i];
        }
    }
    printf(" so nguyen to cuoi cung la: %d\n",kq);
}