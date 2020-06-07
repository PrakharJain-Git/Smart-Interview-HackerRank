#include<bits/stdc++.h>
using namespace std;
int substring(string A,int l,int r) 
{
    int len,a=0 ;
    len=A.size() ;
    if(l==r)
    {
        l-- ;
        r++ ;
        a++ ;
    }
    while(l>=0 && r<len && A[l]==A[r])
    {
        l-- ;
        r++ ;
        a=a+2 ;
    }
    return a ;
}
int main() {
    int n,m,i,j,k,ans,a1,a2 ;
    char c ;
    string A;
    scanf("%d",&n) ;
    for(k=0;k<n;k++)
    {
        scanf("%d",&m) ;
        /*for(j=0;j<m;j++)
        {
            scanf("%c",&c) ;
            A+=c ;
        }*/
        cin>>A;
        ans=1 ;
        for(i=0;i<m-1;i++)
        {
            a1=substring(A,i,i) ;
            if(a1>ans)
            {
                ans=a1 ;
            }
            a2=substring(A,i,i+1) ;
            if(a2>ans)
            {
                ans=a2 ;
            }
        }
        printf("%d\n",ans) ;
        A.clear() ;
    }
    return 0;
}

