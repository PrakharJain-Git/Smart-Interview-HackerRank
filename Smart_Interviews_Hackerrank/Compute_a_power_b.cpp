#include<bits/stdc++.h>
long long int power(long long int a,long long  b) 
{
    long long int ans,mod=1000000007 ;
    if(b==1)
    {
        return a%mod ;
    }
    if(b%2==1)
    {
       ans=(((power(a,b/2))%mod)*((power(a,b/2))%mod))%mod ;
        ans=(ans*(a%mod))%mod ;
    }
    else
    {
        ans=(((power(a,b/2))%mod)*((power(a,b/2))%mod))%mod ;
    }
    return ans ;
}
int main()
{
    long long int n,a,b,i,s,mod=1000000007 ;
    scanf("%lld", &n) ;
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a, &b) ;
        if(b==0)
        {
            s=1 ;
            printf("%lld\n",s) ;
            continue ;
        }
        if(b==1)
        {
            printf("%lld\n",a) ;
            continue ;
        }
        s=(power(a,b))%mod ;
        printf("%lld\n",s) ;
    }
}
