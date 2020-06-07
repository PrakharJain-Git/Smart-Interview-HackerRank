#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n,i,j,k,l,flag ;
    string A="" ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        flag=0 ;
        cin>>A ;
        l=A.size() ;
        for(j=0;j<l-1;j++)
        {
            for(k=j+1;k<l;k++)
            {
                if(A[j]==A[k])
                {
                    printf("%c\n",A[j]) ;
                    flag=1 ;
                    break ;
                }
            }
            if(flag==1)
            {
                break ;
            }
        }
        if(flag==0)
        {   
            printf(".");
            printf("\n") ;
        }
        A.clear() ;
    }   
    return 0;
}

