//write a c program to insert an element in an array
#include <stdio.h>
int main()
{
    int arr[5];
    int i, n, pos, ele;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element you want to insert: ");
    scanf("%d", &ele);
    for (i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    printf("The array after inserting the element is: ");
    
    for(int i=0;i<=4;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;

}