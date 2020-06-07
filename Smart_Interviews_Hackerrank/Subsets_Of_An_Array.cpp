#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,p=0,num,x,y ;
    scanf("%d",&n) ;
    vector<int> A,B ;
    vector<vector<int>> C ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m) ;
        A.clear() ;
        B.clear() ;
        C.clear() ;
        for(j=0;j<m;j++)
        {
            scanf("%d", &num) ;
            A.push_back(num) ;
        }
        int D[m] ;
        sort(A.begin(),A.end()) ;
        for(k=0;k<m;k++)
        {
            D[k]=0 ;
        }
        int d=m,val=1 ;
        while(1)
        {
            p=0 ;
            int l=d-1;
            while(D[l]>=val && l>=0)
            {
                D[l]=0;
                l=l-1;
            }
            if(l<0)
            {
                break ;
            }
            D[l]=D[l]+1;
            k=0 ;
            while(k<d)
            {
                if (D[k]==1)
                {
                   B.push_back(A[p]) ;
                }
                k++ ;
                p++ ;
            }
            C.push_back(B) ;
            B.clear() ;
        }
         sort(C.begin(),C.end()) ;
        x=C.size() ;
        for(j=0;j<x;j++)
        {
            y=C[j].size() ;
            for(k=0;k<y;k++)
            {
                printf("%d ",C[j][k]) ;
            }
            printf("\n") ;
        }
        printf("\n") ;
    }
}
