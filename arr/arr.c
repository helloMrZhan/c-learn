#include <stdio.h>
#define LEN 5

int main(int argc, char** argv)
{
    int i;
    int arr[LEN] = {1, 2, 3, 4, 5};
    for (i = 0; i < LEN; ++i)
        printf("%-4d", arr[i]);
    printf("\n");
    
    return 0;
}