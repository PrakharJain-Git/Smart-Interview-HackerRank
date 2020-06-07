#include<stdio.h>
int main()
{
    int n,m,o,i,j,sum ;
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d", &m) ;
        sum=0 ;
        for(j=1;j<=m+1;j++)
        {
            sum=sum+j ;
        }
        for(j=0;j<m;j++)
        {
            scanf("%d", &o) ;
            sum=sum-o ;
        }
        printf("%d\n", sum) ;
    }
}
