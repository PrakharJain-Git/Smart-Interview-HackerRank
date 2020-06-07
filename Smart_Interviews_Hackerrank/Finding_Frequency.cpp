#include<bits/stdc++.h>
using namespace std;
int main() {
    int ans,n,m,num,i,j,k ;
    scanf("%d",&n) ;
    unordered_map<int,int> B ;
    for(i=0;i<n;i++)
    {
       scanf("%d",&num) ;
        if(B.find(num)!=B.end())
        {
            B[num]++ ;
        }
        else
        {
            B[num]=1 ;
        }
    }
    scanf("%d",&m) ;
    for(i=0;i<m;i++)
    {
        scanf("%d",&num) ;
        ans=B[num] ;
        printf("%d\n",ans) ;
    }
    return 0;
}

