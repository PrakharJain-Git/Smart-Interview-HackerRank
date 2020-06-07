#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,k,flag ;
    scanf("%d",&n) ;
    string A="",B="" ;
    for(i=0;i<n;i++)
    {
        flag=0 ;
        A.clear() ;
        B.clear() ;
        cin>>A ;
        cin>>B ;
        j=A.size() ;
        k=B.size() ;
        if(j!=k)
        {
            printf("False\n") ;
            continue ;
        }
        else
        {
           sort(A.begin(),A.end()) ;
           sort(B.begin(),B.end()) ;
            for(k=0;k<j;k++)
            {
                if(A[k]!=B[k])
                {
                    printf("False\n") ;
                    flag=1 ;
                    break ;
                }
            }
        }
        if(flag==0)
        {
            printf("True\n")  ;
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

