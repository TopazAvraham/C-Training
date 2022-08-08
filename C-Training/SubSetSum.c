#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

int isSubsetSum(int set[], int n, int sum)
{
    if (sum == 0)
        return 1;
    if (n == 0 && sum > 0)
        return 0;

    if (set[n - 1] > sum)
        return isSubsetSum(set, n - 1, sum);


    return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}
void main()
{
    int arr[] = { 3, 34, 4, 12, 5, 2 };
    printf("what is the sum: ");
    int sum;
    scanf("%d", &sum);
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = isSubsetSum(arr, size, sum);
    if (res == 1)
        printf("true");
    else
        printf("false");
}
