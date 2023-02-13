#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //malloc, free() 포함된 헤더

//void* malloc(size_t size)
//size_t : 동적으로 할당할 메모리의 크기

/*
int main()
{
    int* arr;
    arr = (int*)malloc(sizeof(int) * 4);
    //사이즈4 * 4 동적할당

    arr[0] = 100;
    arr[1] = 200;
    arr[2] = 300;
    arr[3] = 400;
    
    for (int i = 0; i < 4; i++)
    {
        printf("arr[%d] : %d\n", i, arr[i]);
    }

    free(arr); //동적할당 해제
    return 0;
}
*/