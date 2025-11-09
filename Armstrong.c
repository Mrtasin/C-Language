#include<stdio.h>

int am(int n)   {
    int len ;
    int temp = n;
    for(len = 0; temp; temp /= 10, len++);

    temp = n;
    int ans = 0;
    while (temp)    {
        int pow = 1;
        int lastDigit = temp % 10;
        for(int x = 1; x<=len; x++) {
            pow = pow * lastDigit;
        }
        ans += pow;
        temp /= 10;
    }
    return (ans == n);
}


int main()  {
    for(int x = 1; x<= 10000; x++)
        if(am(x))
            printf("%d ",x);
    
    printf("\n");
    return 0;
}