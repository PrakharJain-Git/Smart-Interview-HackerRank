#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,num,i,j,k,l,x,y,max=0 ;
    vector<int> A,B;
    vector<vector<int>> C ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        C.clear() ;
        scanf("%d",&m) ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            A.push_back(num) ;
        }
        sort(A.begin(),A.end()) ;
        for(j=0;j<m;j++)
        {
            k=1 ;
            while(A[j]==A[j+1])
            {
                k++ ;
                j++ ;
            }
            if(k>max)
            {
                max=k ;
            }
            B.push_back(k) ;
            B.push_back(A[j]) ;
            C.push_back(B) ;
            B.clear() ;
        }
        k=C.size() ;
        l=1 ;
        while(l<=max)
        {
            for(j=0;j<k;j++)
            {
                if(C[j][0]==l)
                {
                    for(y=0;y<C[j][0];y++)
                    {
                        printf("%d ",C[j][1]) ;
                    }
                }
            }
            l++ ;
        }
        printf("\n") ;
    }   
    return 0;
}
