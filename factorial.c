#include<stdio.h>

int fact(int n) {
    if(n == 0)
        return 1;
    return fact(n - 1) * n;
}


int main()  {
   int n;
   printf("Enter a number :- ");
   scanf("%d",&n);
   printf("Factorial :- %d",fact(n));
    
    printf("\n");
    return 0;
}