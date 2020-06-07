#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,m,i,k,num,num1,num2,sum ;
    scanf("%lld",&n) ;
    vector<long long int> A ;
    sum=0 ;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num) ;
        sum+=num ;
        A.push_back(sum)  ;
    }
    scanf("%lld",&m) ;
    for(i=0;i<m;i++)
    {
        k=0 ;
        scanf("%lld  %lld",&num1,&num2) ;
        if(num1!=0)
        {
            k=A[num2]-A[num1-1]  ;
        }
        else
        {
            k=A[num2] ;
        }
        printf("%lld\n",k) ;
    }
    return 0;
}

