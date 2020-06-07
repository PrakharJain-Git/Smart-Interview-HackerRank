#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,i,j,k,flag=0 ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        printf("Case #%d:\n",i+1) ;
        scanf("%d",&m) ;
        for(j=0;j<=m/2;j++)
        {
            flag=0 ;
            for(k=j;k<m/2;k++)
            {
                printf(" ") ;
            }
            printf("*") ;
            for(k=0;k<(2*j)-1;k++)
            {
                printf(" ") ;
                flag=1 ;
            }
            if(flag==1)
            {
                 printf("*") ;
            }
            printf("\n") ;
        }
        for(j=0;j<m/2;j++)
        {
            flag=0 ;
            for(k=0;k<=j;k++)
            {
                printf(" ") ;
            }
            printf("*") ;
            for(k=0;k<(2*((m/2)-j-1))-1;k++)
            {
                printf(" ") ;
                flag=1 ;
            }
            if(flag==1)
            {
                printf("*") ;
            }
            printf("\n") ;
        }
    }
    return 0;
}

