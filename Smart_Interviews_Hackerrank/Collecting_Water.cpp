#include<bits/stdc++.h>
using namespace std;
int main() {
    int m,n,num,i,j=0,k,l,max,ans=0 ;
    vector<int> A ;
    scanf("%d",&m) ;
    for(k=0;k<m;k++)
    {
        A.clear() ;
        scanf("%d",&n) ;
        for(i=0;i<n;i++)
        {
            scanf("%d",&num) ;
            A.push_back(num) ;
        }
        l=A[0] ;
        max=0 ;
        for(i=0;i<n;i++)
        {
            if(A[i]>max)
            {
                max=A[i] ;
                j=i ;
            }
        }
        ans=0 ;
        for(i=1;i<=j;i++)
        {
            if(A[i]<l)
            {
                ans=ans+l-A[i] ;
            }
            else
            {
                l=A[i] ;
            }
        }    
        l=A[n-1] ; 
        for(i=n-2;i>=j;i--)
        {
            if(A[i]<l)
            {
                ans=ans+l-A[i] ;
            }
            else
            {
                l=A[i] ;
            }
        }
        printf("%d\n",ans) ;
    }
    return 0;
}

