// write a c program to display all unique elements in an array
#include <stdio.h>
int main()
{
    int arr[5];
    int i, j, n, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }
        if (arr[i] != -1 && count == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}