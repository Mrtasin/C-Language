#include<stdio.h>

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for(int x = 0; x < size; x++)   {
        sum += arr[x]; // sum = sum + arr[x];
    }
    return sum;
}

int main()  {
   int n;
   printf("Enter size array :- ");
   scanf("%d",&n);
   int arr[n];

   printf("Enter %d numbers :- ",n);
   for(int x = 0; x < n; x++)
        scanf("%d",&arr[x]);
    
    printf("Sum of Array is :- %d",sumOfArray(arr, n));
    
    printf("\n");
    return 0;
}