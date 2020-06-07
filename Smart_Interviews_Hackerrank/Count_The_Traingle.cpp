#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,m,i,j,k,l,num,ans ;
    scanf("%lld",&n) ;
    vector<long long int> A ;
    for(l=0;l<n;l++)
    {
        A.clear() ;
        scanf("%lld",&m) ;
        for(j=0;j<m;j++)
        {
            scanf("%lld",&num) ;
            A.push_back(num) ;
        }
        sort(A.begin(),A.end()) ;
        ans=0 ;
        for(i=0;i<m;i++)
        {
            j=i+1 ;
            k=i+2 ;
            while(j<m && k<m)
            {
                if(j==k)
                {
                    k++ ;
                }
                else if(A[i]+A[j]>A[k])
                {
                    ans++ ;
                    ans=ans+k-j-1 ;
                    k++ ;
                }
                
                else
                {
                    j++ ;
                }
            }
        }
        printf("%lld\n",ans) ;
    }
    return 0;
}

