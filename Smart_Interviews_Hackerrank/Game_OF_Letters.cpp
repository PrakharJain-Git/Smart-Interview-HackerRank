#include <bits/stdc++.h>
using namespace std;
int main() {
    int  n,i,j,k,ans ;
    string B ;
    vector<int> A ;
    for(j=0;j<26;j++)
    {
        A.push_back(0) ;
    }
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        for(j=0;j<26;j++)
        {
            A[j]=0 ;
        }
        B.clear() ;
        cin>>B ;
        k=B.size() ;
        for(j=0;j<k;j++)
        {
            A[(B[j]-97)]++ ;
        }
        ans=0 ;
        k=A.size();
        for(j=0;j<26;j++)
        {
            ans=ans^A[j] ;
        }
        if(ans==0)
        {
            printf("Banta\n") ;
        }
        else
        {
            printf("Santa\n") ;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

