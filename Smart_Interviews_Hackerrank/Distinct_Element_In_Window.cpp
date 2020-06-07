#include<bits/stdc++.h>
using namespace std ;
int main() {
    long long int n,m,i,j,k,l,ans=0,num ;
    unordered_map<long long int,long long int> B ;
    scanf("%lld",&n) ;
    vector<long long int> A ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        scanf("%lld %lld",&m,&l) ;
        for(j=0;j<m;j++)
        {
            scanf("%lld",&num) ;
            A.push_back(num) ;
        }
        ans=0 ;
        j=0 ;
        for(k=0;k<m;k++)
        {
            if(B.find(A[k])==B.end())
            {
                B[A[k]]=1 ;
                ans++ ;
            }
            else
            {
                B[A[k]]++ ;
                if(B[A[k]]==1)
                {
                    ans++ ;
                }
            }
            j++ ;
            if(j==l)
            {
                j-- ;
                if(k!=l-1)
                {
                    if(B[A[k-l]]==1)
                    {
                        ans-- ;
                    }
                }
                if(k!=l-1)
                {
                    B[A[k-l]]-- ;
                }
                printf("%lld ",ans) ;
            }
        }
        B.clear() ;
        printf("\n") ;
    }
    return 0;
}

