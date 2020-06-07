#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,r1,c1,r2,c2,i,j,k,l,num ;
    vector<int> A ;
    vector<vector<int>> B,C,D ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        B.clear() ;
        C.clear() ;
        D.clear() ;
        scanf("%d %d",&r1,&c1) ;
        for(j=0;j<r1;j++)
        {
            for(k=0;k<c1;k++)
            {
                scanf("%d",&num) ;
                A.push_back(num) ;
            }
            B.push_back(A) ;
            A.clear() ;
        }
        scanf("%d %d",&r2,&c2) ;
        for(j=0;j<r2;j++)
        {
            for(k=0;k<c2;k++)
            {
                scanf("%d",&num) ;
                A.push_back(num) ;
            }
            C.push_back(A) ;
            A.clear() ;
        }
        j=0 ;
        while(j<r1)
        {
            num=0 ;
            k=0 ;
            while(k<c2)
            {
                l=0 ;
                num=0 ;
                while(l<c1)
                {
                    num+=(B[j][l]*C[l][k]) ;
                    l++ ;
                }
                A.push_back(num)  ;
                k++ ;
            }
            j++ ;
            D.push_back(A) ;
            A.clear() ;
        }
        for(j=0;j<r1;j++)
        {
            for(k=0;k<c2;k++)
            {
                printf("%d ",D[j][k]) ;
            }
            printf("\n") ;
        }
    }
    return 0;
}

