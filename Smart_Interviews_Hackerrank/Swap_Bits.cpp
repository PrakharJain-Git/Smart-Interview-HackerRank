#include<bits/stdc++.h>
int main()
{
    long long int n,m,i,j,k,l,ans,a=1 ;
    scanf("%lld", &n) ;
    long long int A[32] ;
    for(i=0;i<n;i++)
    {
        for(l=0;l<32;l++)
        {
            A[l]=0 ;
        }
        scanf("%lld",&m) ;
        l=0 ;
        while(m>0)
        {
            j=m%2 ;
            m=m/2 ;
            k=m%2 ;
            m=m/2 ;
            A[l]=k ;
            A[l+1]=j ;
            l=l+2 ;
        }
        a=1 ;
        for(l=31;l>0;l--)
        {
            a=a*2 ;
        }
        ans=0 ;
        for(l=31;l>=0;l--)
        {
            ans=ans+(a*A[l]) ;
            a=a/2 ;
        }
        printf("%lld\n",ans) ;
    }
}
