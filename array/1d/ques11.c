//write a c program to check the frequency of each element in an array
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
        if (arr[i] != -1)
        {
            printf("The frequency of %d is %d\n", arr[i], count);
        }
    }
    return 0;
}