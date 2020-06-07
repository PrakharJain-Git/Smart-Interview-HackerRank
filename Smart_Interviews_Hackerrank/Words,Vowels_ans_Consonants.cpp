#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,k,x,y,z,flag=0 ;
    char c ;
    scanf("%d",&n) ;
    string A ;
    scanf("%c",&c) ;
    for(i=0;i<n;i++)
    {
        x=1 ;
        flag=1 ;
        while(1)
        {
           scanf("%c",&c) ;
            if((c>='a' && c<='z') || (c>='A' && c<='Z'))
            {
                A+=c ;
                flag=0 ;
            }
            else if(c==' ')
            {
                if(flag==0)
                {
                    x++ ;
                    flag=1 ;
                }
                continue ;
            }
            else
            {
                break ;
            }
        }
        if(flag==1)
        {
            x=x-1 ;
        }
        y=0 ;
        z=0 ;
        k=A.size() ;
        for(j=0;j<k;j++)
        {
            if((A[j]>='a' && A[j]<='z') || (A[j]>='A' && A[j]<='Z'))
            {
                z++ ;
            }
if(A[j]=='a'||A[j]=='e'||A[j]=='i'||A[j]=='o'||A[j]=='u'||A[j]=='A'||A[j]=='E'||A[j]=='I'||A[j]=='O'||A[j]=='U')
            {
                y++ ;
            }
        }
        z=z-y ;
        printf("%d %d %d\n",x,y,z) ;
        A.clear() ;
    }
    return 0;
}

