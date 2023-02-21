#include<stdio.h>
int main() {
    int num, n, r, sum = 0;
    printf("Enter a integer: ");
    scanf("%d", &num);
    n = num;
    while (n!= 0)
     {      
        r = n % 10;        
       sum=sum*10+r;            
       n/= 10;
    }

    if (sum== num)
        printf("%d is a palindromenumber.", num);
    else
        printf("%d is not a palindrome number.", num);

    return 0;
}