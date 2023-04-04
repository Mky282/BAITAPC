#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
typedef struct{
    int *ptr;
    int size;
}Array;

int test;
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

void sodautien(Array *value,int x,int y)
{
 for(int i=0; i< value->size;i++)
    {
         if (  value->ptr[i]>=x && value->ptr[i]<=y )
         {
              test++;
                printf("so dau tien la %d\t", value->ptr[i]);
                break;
         }
    }
    if (test == 0)
         printf("-1");  
}
int main(int argc, char const *argv[])
{
    Array value;
    CreateArray(&value);
    for (int i = 0; i < value.size; i++)
    {
        printf("arr[%d] = %d\n",i, value.ptr[i]);
    }
sodautien(&value,4,50);
    
}