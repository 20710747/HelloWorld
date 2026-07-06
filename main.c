#include <stdio.h>

int main()
{
    int arr[] = {12,4,89,43,221,78};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("数组长度：%d\n", size);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
