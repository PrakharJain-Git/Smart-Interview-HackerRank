#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,i,j,k,num,ans,temp ;
    scanf("%d",&n) ;
    vector<int> A ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m) ;
        A.clear() ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            A.push_back(num) ;
        }
        ans=0 ;
        for(j=0;j<m-1;j++)
        {
            for(k=0;k<m-j-1;k++)
            {
                if(A[k]>A[k+1])
                {
                    temp=A[k] ;
                    A[k]=A[k+1] ;
                    A[k+1]=temp ;
                    ans++ ;
                }
            }
        }
        printf("%d\n",ans) ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

