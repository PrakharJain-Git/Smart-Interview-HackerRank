#include<bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<int,int> A ;
    vector<int> B ;
    int n,m,i,j,num ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m) ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            if(A.find(num)==A.end())
            {
                A[num]++ ;
            }
            else
            {
                B.push_back(num) ;
            }
        }
        if(B[0]<B[1])
        {
            printf("%d %d\n",B[0],B[1]) ;
        }
        else
        {
            printf("%d %d\n",B[1],B[0]) ;
        }
        B.clear() ;
        A.clear() ;
    }
    return 0; 
}

