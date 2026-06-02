#include <stdio.h>
int main() {
    int n,n1,d,rev=0;
    printf("enter a number");
    scanf("%d",&n);
    n1=n;
    while(n!=0) {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(n1==rev)
        printf("the number is palindrome");
    else
        printf("the number is not palindrome");
    return 0;
}