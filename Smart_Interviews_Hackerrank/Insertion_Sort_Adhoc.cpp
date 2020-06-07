#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m,num,i,j,k,key ;
    scanf("%d",&n) ;
    vector<int> A,B ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m) ;
        A.clear() ;
        B.clear() ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            A.push_back(num) ;
        }
        for(j=1;j<m;j++)
        {
            key=A[j] ;
            k=j-1 ;
            while(k>=0 && A[k]>key)
            {
                A[k+1]=A[k] ;
                k=k-1 ;
            }
            printf("%d ",k+1) ;
            A[k+1]=key ;
        }
        printf("\n") ;
    }
    return 0;
}

