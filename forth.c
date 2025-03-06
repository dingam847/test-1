//二分法
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    int flag = 0;
    int left = 0;
    int right = sz-1;
    while (left <= right)
    {
        int mid = left + (right - left)/2;
        if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            flag = 1;
            printf("找到了，下标是%d\n", mid);
            break;
        }       
    }
    if (flag == 0)
    printf("找不到了\n");
    return 0;
}
