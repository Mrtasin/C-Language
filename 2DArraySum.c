#include <stdio.h>

int main()
{
    int n;
    printf("Enter size array :- ");
    scanf("%d", &n);
    int arr1[n];
    int arr2[n];
    int ans[n];

    printf("Enter %d numbers :- ", n);
    for (int x = 0; x < n; x++)
        scanf("%d", &arr1[x]);

    printf("\nEnter %d numbers :- ", n);
    for (int x = 0; x < n; x++)
        scanf("%d", &arr2[x]);

    for (int x = 0; x < n; x++){
        ans[x] = arr1[x] + arr2[x];
    }

    for (int x = 0; x < n; x++){
        printf("%d ",ans[x]);
    }


    printf("\n");
    return 0;
}