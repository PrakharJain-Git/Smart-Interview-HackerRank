#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,num,i,j,k,p,ans,low,high ;
    vector<int> A,B,C,D,E,F ;
    scanf("%d",&n) ;
    for(p=0;p<n;p++)
    {
        A.clear() ;
        B.clear() ;
        C.clear() ;
        D.clear() ;
        E.clear() ;
        F.clear() ;
        scanf("%d",&m) ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            A.push_back(num) ;
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            B.push_back(num) ;
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            C.push_back(num) ;
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            D.push_back(num) ;
        }
        ans=0 ;
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                E.push_back(A[i]^B[j]) ;
                F.push_back(C[i]^D[j]) ;
            }
        }
        k=E.size() ;
        sort(E.begin(),E.end()) ;
        sort(F.begin(),F.end()) ;
        i=0 ;
        while(i<k)
        {
           low=lower_bound(E.begin(),E.end(),F[i])-(E.begin()) ;
           high=upper_bound(E.begin(),E.end(),F[i])-(E.begin()) ;
           ans=ans+high-low ;
           i++ ;
        }
        printf("%d\n",ans) ;
    }
    return 0;
}

