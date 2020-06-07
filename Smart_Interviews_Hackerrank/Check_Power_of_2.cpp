#include<stdio.h>
int main() {
    long long int n,m,i,flag=0 ;
    scanf("%lld", &n) ;
    for(i=0;i<n;i++)
    {
        scanf("%lld", &m) ;
        flag=0 ;
        while(m>0)
        {
            if(m%2==1 && m!=1)
            {
                flag=1 ;
                printf("False") ;
                break ;
            }
            m=m/2 ;
        }
        if(flag==0)
        {
            printf("True") ;
        }
        printf("\n") ;
    }  
    return 0;
}

