#include <stdio.h>

int main()
{
    int n;
    printf("Enter size array :- ");
    scanf("%d", &n);
    int arr1[n];
   
    printf("Enter %d numbers :- ", n);
    for (int x = 0; x < n; x++)
        scanf("%d", &arr1[x]);

    int min = arr1[0], max = arr1[0];
    for(int x = 1; x < n; x++)  {
        if(min > arr1[x])
            min = arr1[x];

        if(max < arr1[x])
            max = arr1[x];
    }

    printf("Min value :- %d\nMax value :- %d",min, max);
    
    printf("\n");
    return 0;
}