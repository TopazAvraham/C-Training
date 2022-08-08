#include <stdio.h>

int main() {
    int arr[] = { 3,8,1,4 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, temp;
    for (i = size - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}
