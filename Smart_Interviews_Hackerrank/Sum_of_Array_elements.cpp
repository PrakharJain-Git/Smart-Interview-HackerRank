#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,m,num,sum,i,j,k ;
    scanf("%lld",&n) ;
    for(i=0;i<n;i++)
    { 
        scanf("%lld",&m) ;
        sum=0 ;
        for(j=0;j<m;j++)
        {
            scanf("%lld",&num) ;
            sum+=num ;
        }
        printf("%lld\n",sum) ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

