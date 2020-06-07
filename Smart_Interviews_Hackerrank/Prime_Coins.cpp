#include <bits/stdc++.h>
using namespace std ;
int main()
{   
    int n,m ;
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d",&n);
        if(n%6==0)
        {
            printf("Banta\n");
        }
        else
        {
            printf("Santa\n");
        }
    }
    return 0;
}

