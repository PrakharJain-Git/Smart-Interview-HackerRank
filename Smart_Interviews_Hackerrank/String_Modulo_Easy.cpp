#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,i,j,x,y,num1,num2 ;
    string A="",B="" ;
    scanf("%lld",&n) ;
    for(i=0;i<n;i++)
    {
        num1=0 ;
        num2=0 ;
        A.clear() ;
        B.clear() ;
        cin>>A ;
        cin>>B ;
        y=B.size() ;
        x=A.size() ;
        for(j=0;j<y;j++)
        {
            num2=((num2*10)+B[j]-48) ;
        }
        for(j=0;j<x;j++)
        {
            num1=((num1*10)+A[j]-48)%num2 ;
        }
        printf("%lld\n",num1) ;
    }
    return 0;
}

