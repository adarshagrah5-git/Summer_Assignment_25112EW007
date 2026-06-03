#include<stdio.h>
int main()
{
    int a,b,i,j,f;
    printf("Enter starting number:");
    scanf("%d",&a);
    printf("Enter ending number:");
    scanf("%d",&b);
    for(i=a;i<=b;i++) {
        f=0;
        if(i<2)
            continue;
        for(j=2;j<i;j++){
            if(i%j==0){
                f=1;
                break;
            }
    }
        if(f==0)
            printf("%d ",i);
    }
    return 0;
}