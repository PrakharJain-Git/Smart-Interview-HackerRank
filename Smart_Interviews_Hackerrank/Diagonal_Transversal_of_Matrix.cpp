#include <bits/stdc++.h>
using namespace std;


int main() {
    int m,n,i,j,k,l,p,num,sum ;
    vector<int> A ;
    vector<vector<int>> B ;
    scanf("%d",&m) ;
    for(k=0;k<m;k++)
    {
        B.clear() ;
        scanf("%d",&n) ;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&num) ;
                A.push_back(num) ;
            }
            B.push_back(A) ;
            A.clear() ;
        }
        for(i=0;i<n;i++)
        {
            l=0 ;
            p=n-i-1 ;
            sum=0 ;
            while(p<n)
            {
                sum+=B[l][p] ;
                p++  ;
                l++ ;
            }
            printf("%d ",sum) ;
            sum=0 ;
        }
        for(i=1;i<n;i++)
        {
            l=n-1 ;
            p=n-i-1 ;
            sum=0 ;
            while(p>=0)
            {
                sum+=B[l][p] ;
                p-- ;
                l-- ;
            }
            printf("%d ",sum) ;
            sum=0 ;
        }
        printf("\n") ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

