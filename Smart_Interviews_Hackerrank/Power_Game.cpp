#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m,num1,num2,i,j,k,ans ;
    scanf("%d",&n) ;
    vector<int> A,B ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        B.clear() ;
        scanf("%d",&m) ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num1) ;
            A.push_back(num1) ;
        }
        for(j=0;j<m;j++)
        {
            scanf("%d",&num2) ;
            B.push_back(num2) ;
        }
        sort(A.begin(),A.end()) ;
        sort(B.begin(),B.end()) ;
        ans=0; 
        k=0;
        for(j=0;j<m;j++)
        {
            if(A[j]>B[k])
            {
                ans++ ;
                k++ ;
            }
        }
        printf("%d\n",ans) ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

