// write a c program to delete an element from an array at a given position
#include <stdio.h>
int main()
{
    int arr[10];
    int i, n, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position from where you want to delete the element: ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("The array after deleting the element is: ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}