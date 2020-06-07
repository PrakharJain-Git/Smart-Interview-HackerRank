#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,a,b,temp,i,j,k ;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b) ;
        j=a ; 
        k=b ;
        if(a<b)
        {
            temp=a ;
            a=b ;
            b=temp ;
        }
        while(b>0)
        {
            temp=b ;
            b=a%b ;
            a=temp ;
        }
        temp=((j*k)/a) ;
        printf("%lld %lld\n",temp,a) ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

