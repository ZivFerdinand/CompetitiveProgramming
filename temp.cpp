#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int arrLeft[1000];
    int arrRight[1000];

    for (int i = 0; i < leftSize;i++)
    {
        arrLeft[i] = arr[i + left];
    }
    for (int i = 0; i < rightSize;i++)
    {
        arrRight[i] = arr[i + mid + 1];
    }

    int l = 0, r = 0, mergeIndex = left;
    while(l<leftSize && r<rightSize)
    {
        if(arrLeft[l] < arrRight[r])
        {
            arr[mergeIndex++] = arrLeft[l++];
        }
        else
            arr[mergeIndex++] = arrRight[r++];
    }

    while(l<leftSize)
    {
        arr[mergeIndex++] = arrLeft[l++];
    }
    while(r<rightSize)
    {
        arr[mergeIndex++] = arrRight[r++];
    }
}

void mergeSort(int arr[], int left, int right)
{
    if(left>=right)
        return;

    int mid = (left + right) / 2;
    mergeSort(arr, 0, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main()
{
    int arr[] = {5, 4, 3, 3, 5, 3, 5, 6, 8, 9};
    int size = 10;

    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size;i++)
    {
        printf("%d ", arr[i]);
    }
}