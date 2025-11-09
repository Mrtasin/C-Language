#include<stdio.h>

void swap(int *a, int *b)   {
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a = 10, b = 20;
    swap(&a, &b);
    printf("A :- %d, B :- %d",a,b);

    printf("\n");
    return 0;
}