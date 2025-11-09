#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter size array :- ");
    scanf("%d", &n);

    int arr1[n][n];

    printf("Enter %d numbers :- ", n * n);
    for (int x = 0; x < n; x++)
    {
        for (int z = 0; z < n; z++)
        {
            scanf("%d", &arr1[x][z]);
        }
    }

    for (int x = 0; x < n; x++)
    {
        for (int z = 0; z < n; z++)
        {
            if(x == z)
                sum += arr1[x][z];
        }
       
    }
    printf("%d",sum);
    
    printf("\n");
    return 0;
}