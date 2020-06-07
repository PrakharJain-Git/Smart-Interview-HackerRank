#include<stdio.h>
int main()
{
    int n,m,i,j,k ;
    scanf("%d", &n) ;
    int A[64] ;
    for(i=0;i<n;i++)
    {
        scanf("%d", &m) ;
        k=0 ;
        if(m==0)
        {
            printf("%d", 0) ;
        }
        while(m>0)
        {
            A[k]=m%2 ;
            m=m/2 ;
            k++ ;
        }
        for(j=k-1;j>=0;j--)
        {
            printf("%d", A[j]) ;
        }
        printf("\n") ;
    }
    return 0 ;
}
