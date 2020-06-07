#include<bits/stdc++.h>
using namespace std;


int main() {
    int m,n,i,j,k,l,T,B,L,R,num ;
    scanf("%d",&m) ;
    vector<int> E,C ;
    vector<vector<int>> A ;
    for(l=0;l<m;l++)
    {
        A.clear() ;
        scanf("%d",&n) ;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&num) ;
                E.push_back(num) ;
            }
            A.push_back(E) ;
            E.clear() ;
        }
        i=0 ;
        T=0 ;
        B=n-1 ;
        L=0 ;
        R=n-1 ;
        while (L<=R && T<=B)
        {
            for (k=L;k<=R;k++)
            {
                C.push_back(A[T][k]) ;
                i++ ;
                if (i==(n*n))
                {
                    break ;
                }
            }
            if (i==(n*n))
                {
                    break ;
                }
            T++ ;
            for (k=T;k<=B;k++)
            {
                C.push_back(A[k][R]) ;
                i++ ;
                if (i==(n*n))
                {
                    break ;
                }
            }
            if (i==(n*n))
                {
                    break ;
                }
            R-- ;
            for (k=R;k>=L;k--)
            {
                C.push_back(A[B][k]) ;
                i++ ;
                if (i==(n*n))
                {
                    break ;
                }
            }
            if (i==(n*n))
                {
                    break ;
                }
            B-- ;
            for (k=B;k>=T;k--)
            {
                C.push_back(A[k][L]) ;
                i++ ;
                if (i==(n*n))
                {
                    break ;
                }
            }
            if (i==(n*n))
                {
                    break ;
                }
            L++ ;
        }
        for(i=0;i<(n*n);i++)
        {
            printf("%d ",C[i]) ;
        }
        printf("\n") ;
        C.clear() ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

