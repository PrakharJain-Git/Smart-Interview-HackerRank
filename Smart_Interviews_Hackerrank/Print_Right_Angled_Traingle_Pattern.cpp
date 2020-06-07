      #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m,i,j,k ;
    scanf("%d",&n) ;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m) ;
        printf("Case #%d:\n",i) ;
        for(j=0;j<m;j++)
        {
            for(k=j;k<m-1;k++)
            {
                printf(" ") ;
            }
            for(k=0;k<=j;k++)
            {
                printf("*") ;
            }
            printf("\n")  ;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

