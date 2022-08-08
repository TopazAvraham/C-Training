#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>
int binarySearch(int arr[], int size, int high, int low, int value)
{
    if (size == 0)
    {
        return -1;
    }
    int middle = (low + high) / 2;
    if (arr[middle] == value)
    {
        return middle;
    }
    if (value > arr[middle])
    {
        return binarySearch(arr, size / 2, high, middle + 1, value);
    }
    else
    {
        return binarySearch(arr, size / 2, middle - 1, low, value);
    }
}
void main() {
    int arr[] = { 2,4,5,7,13,48,52,53,101 };
    int value;
    printf("to which value you want to see what is his index?: ");
    scanf("%d", &value);
    int size = sizeof(arr) / sizeof(arr[0]);
    int high = size - 1, low = 0, middle;
    int res = binarySearch(arr, size, high, low, value);

    if (res == -1)
    {
        printf("the value is not in the arr");
    }
    else
    {
        printf("the value's index in arr is %d", res);
    }
}
