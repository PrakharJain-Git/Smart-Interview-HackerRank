#include<bits/stdc++.h>
using namespace std;
int check(vector<long long int> A, int left,int right,int l)
{
    while(left<right)
    {
        if(A[left]+A[right]==l)
        {
            return 1 ;
        }
        else if(A[left]+A[right]<l)
        {
            left=left+1 ;
        }
        else
        {
            right=right-1 ;    
        }
    }
    return 0 ;
}
int main() {
    long long int n,m,l,i,j,num ;
    vector<long long int> A ;
    scanf("%lld",&n) ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        scanf("%lld %lld",&m,&l)  ;
        for(j=0;j<m;j++)
        {
            scanf("%lld",&num) ;
            A.push_back(num) ;
        }
        sort(A.begin(),A.end()) ;
        if(check(A,0,m-1,l)==1)
        {
            printf("True\n") ;
        }
        else
        {
            printf("False\n") ;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

