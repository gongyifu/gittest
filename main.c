#include <stdio.h>
#include <stdlib.h>

// 快速排序算法
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = arr[low]; // 选择第一个元素作为基准值
        int i = low, j = high;

        while (i < j)
        {
            while (i < j && arr[j] >= pivot)
            {
                j--;
            }
            if (i < j)
            {
                arr[i++] = arr[j];
            }

            while (i < j && arr[i] <= pivot)
            {
                i++;
            }
            if (i < j)
            {
                arr[j--] = arr[i];
            }
        }

        arr[i] = pivot;

    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 2, 8, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("排序前的数组：");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, n - 1);

    printf("排序后的数组：");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("短视频\n");
    printf("约饭\n");
    printf("商城100%\n");

    return 0;
}
