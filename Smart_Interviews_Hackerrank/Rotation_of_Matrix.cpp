#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,m,num,l,p,q;
    scanf("%d",&n) ;
    for(l=1;l<=n;l++)
    {
        printf("Test Case #%d:\n",l) ;
        scanf("%d",&m) ;
        vector<int> C ;
        vector<vector<int>> A ;
        A.clear() ;
        for(p=0;p<m;p++)
        {
            for(q=0;q<m;q++)
            {
                scanf("%d",&num) ;
                C.push_back(num) ;
            }
            A.push_back(C) ;
            C.clear() ;
        }
        int len,i,j,temp ;
        len=A.size() ;
        for(i=0;i<len;i++)
        {
            for(j=i+1;j<len;j++)
            {
                temp=A[i][j] ;
                A[i][j]=A[j][i] ;
                A[j][i]=temp ; 
            }
        }
        for(i=0;i<len;i++)
        {
            for(j=0;j<len/2;j++)
            {
                temp=A[i][j] ;
                A[i][j]=A[i][len-j-1] ;
                A[i][len-j-1]=temp ;
            }
        }
        for(i=0;i<len;i++)
        {
            for(j=0;j<len;j++)
            {
                printf("%d ",A[i][j]) ;
            }
            printf("\n") ;
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

