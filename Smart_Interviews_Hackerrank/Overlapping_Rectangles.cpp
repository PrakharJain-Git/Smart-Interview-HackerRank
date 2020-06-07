#include<stdio.h>
int main(){
    long long int n,a,b,c,d,e,f,g,h,i,top,bottom,left,right,ans=0 ;
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
        ans=0 ;
        scanf("%lld %lld %lld %lld",&a, &b, &c, &d) ;
        ans=(c-a)*(d-b) ;
        scanf("%lld %lld %lld %lld",&e, &f, &g, &h) ;
        ans=ans+((g-e)*(h-f)) ;
        if(d<h)
        {
            top=d ;    
        }
        else
        {
            top=h ;
        }
        if(b>f)
        {
            bottom=b ;
        }
        else
        {
            bottom=f ;
        }
        if(a>e)
        {
            left=a ;
        }
        else
        {
            left=e ;
        }
        if(c>g)
        {
            right=g ;
        }
        else
        {
            right=c ;
        }
        if(bottom<top && left<right)
        {
            ans=ans-((top-bottom)*(right-left)) ;
        }
        printf("%lld\n", ans) ;
    }
}

