#pragma warning (disable: 4996)
#include <stdio.h>

void checkDivide(int arr[], int size, int num1, int num2, int* CountForNum1, int* CountForNum2)
{
    int i;
    *CountForNum1 = 0;
    *CountForNum2 = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % num1 == 0)
        {
            (*CountForNum1)++;
        }
        if (arr[i] % num2 == 0) {
            (*CountForNum2)++;
        }
    }
}
void main()
{
    int nums[10];
    int i, num1, num2;
    int CountForNum1;
    int CountForNum2;


    for (i = 0; i < 10; i++)
    {
        printf("enter num %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

    printf("enter 2 nums to check how many elements divide in each: ");
    scanf("%d %d", &num1, &num2);

    checkDivide(nums, sizeof(nums) / sizeof(nums[0]), num1, num2, &CountForNum1, &CountForNum2);
    printf("num1 divides in %d elements, num2 divides in %d elements", CountForNum1, CountForNum2);


}
