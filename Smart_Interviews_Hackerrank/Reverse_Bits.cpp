#include<bits/stdc++.h>
int main()
{
    long long int n,m,i,j,k,a=1,ans ;
    scanf("%lld", &n) ;
    long long int A[32] ;
    for(i=0;i<n;i++)
    {
        a=1 ;
        for(k=0;k<32;k++)
        {
             A[k]=0 ;
        }
        for(k=0;k<31;k++)
        {
            a=a*2 ;
        }
        scanf("%lld", &m) ;
        k=0 ;
        ans=0 ;
        while(m>0)
        {
            j=(m%2) ;
            A[k]=j ;
            m=m/2 ;
            k++ ;
        }
        for(j=0;j<32;j++)
        {
            ans=ans+(a*A[j]) ;
            a=a/2 ;
        }
        printf("%lld\n",ans) ;
    }
}
