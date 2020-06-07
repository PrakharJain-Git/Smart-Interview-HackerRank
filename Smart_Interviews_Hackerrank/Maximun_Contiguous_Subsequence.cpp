#include<bits/stdc++.h>
using namespace std ;
int main() {
    long long int n,m,num,i,j,ans,max=0 ;
    scanf("%lld",&n) ;
    vector<long long int> A ;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&m) ;
        A.clear() ;
        for(j=0;j<m;j++)
        {
            scanf("%lld",&num) ;
            A.push_back(num) ;
        }
        sort(A.begin(),A.end()) ;
        ans=0 ;
        max=0 ;
        for(j=0;j<m-1;j++)
        {
            if(A[j]+1==A[j+1])
            {
                ans++ ;
                if(max<ans)
                {
                    max=ans ;
                }
            }
            else if(A[j]==A[j+1])
            {
                continue ;
            }
            else
            {
                ans=0 ;
            }
        }
        max=max+1 ;
        printf("%lld\n",max) ;
    }  
    return 0;
}
