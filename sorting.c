#include<stdio.h>

void sorting(int arr[], int size)   {
    for(int x = 0; x < size - 1; x++)   {
        for(int z = 0; z < size - x - 1; z++)   {
            if(arr[z] > arr[z + 1]) {
                int c = arr[z];
                arr[z] = arr[z + 1];
                arr[z + 1] = c;
            }
        }
    }
}

int main()  {
     int n;
    printf("Enter size array :- ");
    scanf("%d", &n);
    int arr1[n];

    printf("Enter %d numbers :- ", n);
    for (int x = 0; x < n; x++)
        scanf("%d", &arr1[x]);

    sorting(arr1, n);

    for (int x = 0; x < n; x++)
        printf("%d ",arr1[x]);

    printf("\n");
    return 0;
}