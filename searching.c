#include <stdio.h>

int searching(int arr[], int size, int tg)
{
    for (int x = 0; x < size; x++)
    {
        if (tg == arr[x])
            return x;
    }

    return -1;
}

int main()
{
    int n;
    printf("Enter size array :- ");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter %d numbers :- ", n);
    for (int x = 0; x < n; x++)
        scanf("%d", &arr1[x]);
    
    printf("%d", searching(arr1, n, 20));

    printf("\n");
    return 0;
}