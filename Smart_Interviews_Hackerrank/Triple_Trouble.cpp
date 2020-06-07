#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,m,i,j,num ;
    unordered_map<long long int,long long int> A ;
    vector<long long int> B ;
    scanf("%lld",&n) ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        B.clear() ;
        scanf("%lld",&m) ;
        for(j=0;j<m;j++)
        {
            scanf("%lld",&num) ;
            B.push_back(num) ;
            if(A.find(num)==A.end())
            {
                A[num]++ ;
            }
            else
            {
                if(A[num]==2)
                {
                    A[num]=0 ;
                }
                else
                {
                    A[num]++ ;
                }
            }
        }
        for(j=0;j<m;j++)
        {
            if(A.find(B[j])!=A.end())
            {
                if(A[B[j]]==1)
                {
                    printf("%lld\n", B[j]) ;
                    break ;
                }
            }
        }
    }
    return 0;
}

