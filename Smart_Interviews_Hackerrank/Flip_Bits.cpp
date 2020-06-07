#include<stdio.h>
int main()
{
    int n,a,b,i,ans ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a) ;
        scanf("%d",&b) ;
        ans=0 ;
        while(a>0 && b>0)
        {
            if((a%2)!=(b%2))
            {
                ans++ ;
            }
            a=a/2 ;
            b=b/2 ;
        }
        while(a>0)
        {
            if((a%2)==1)
            {
                ans++ ;
            }
            a=a/2 ;
        }
        while(b>0)
        {
            if((b%2)==1)
            {
                ans++ ;
            }
            b=b/2 ;
        }
        printf("%d\n", ans) ;
    }
}
