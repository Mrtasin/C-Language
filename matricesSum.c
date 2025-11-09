#include <stdio.h>

int main()
{
    int n;
    printf("Enter size array :- ");
    scanf("%d", &n);

    int arr1[n][n];
    int arr2[n][n];
    int ans[n][n];

    printf("Enter %d numbers :- ", n * n);
    for (int x = 0; x < n; x++)
    {
        for (int z = 0; z < n; z++)
        {
            scanf("%d", &arr1[x][z]);
        }
    }

    printf("Enter %d numbers :- ", n * n);
    for (int x = 0; x < n; x++)
    {
        for (int z = 0; z < n; z++)
        {
            scanf("%d", &arr2[x][z]);
        }
    }

    for (int x = 0; x < n; x++)
    {
        for (int z = 0; z < n; z++)
        {
            ans[x][z] = arr1[x][z] + arr2[x][z];
        }
    }

    for (int x = 0; x < n; x++)
    {
        for (int z = 0; z < n; z++)
        {
            printf("%d ",ans[x][z]);
        }
        printf("\n");
    }


    printf("\n");
    return 0;
}