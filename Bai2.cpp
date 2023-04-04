#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
        temp = rand() % 4;
        value->ptr[i] = temp;
    }
}
   

int main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    for (int i = 0; i < value.size; i++)
    {
        printf("arr[%d] = %d\n",i, value.ptr[i]);
    }
     for (int i = 0; i < value.size; i++)
    {
        if(value.ptr[i] % 2 == 0)
        {
            test++;
            kq=value.ptr[i];
        }
    }
    if(test!=0)
    {
         printf(" so chan cuoi cung la: %d\n",kq);
    }else
    {
        printf("-1");
    }
 return 0;
}