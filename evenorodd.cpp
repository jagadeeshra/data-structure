// print the even and odd
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Even numbers: ");
    for(i = 0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\nOdd numbers: ");
    for(i = 0; i<n; i++)
    {
        if(arr[i]%2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
