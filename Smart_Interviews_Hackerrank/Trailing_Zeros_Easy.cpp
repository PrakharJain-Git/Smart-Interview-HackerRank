#include<bits/stdc++.h>
using namespace std;


int main() {
    long long int n,m,i,j,k,ans ;
    scanf("%lld",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&m) ;
        j=5 ;
        ans=0 ;
        while(m>=j)
        {
            k=m ;
            ans=ans+(k/j) ;
            j=j*5 ;
        }
        printf("%lld\n",ans) ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

