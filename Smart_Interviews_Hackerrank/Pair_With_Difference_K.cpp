#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,m,k,i,j,l,num,flag,len ;
    vector<int> A ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        scanf("%d %d",&m,&k) ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            A.push_back(num) ;
        }
        sort(A.begin(),A.end()) ;
        j=0 ;
        l=1 ;
        flag=0 ;
        len=A.size() ;
        while(j<len && l<len)
        {
            if(i!=j && A[l]-A[j]==k)
            {
                printf("true\n") ;
                flag=1 ;
                break ;
            }
            else if(A[l]-A[j]<k)
            {
                l++ ;
            }
            else
            {
                j++ ;
            }
        }
        if(flag==0)
        {
            printf("false\n") ;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

