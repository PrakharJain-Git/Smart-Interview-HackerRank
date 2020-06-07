#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,j,k ;
    string A ;
    stack<int> B ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        cin>>A ;
        if(A=="pop")
        {
            if(!B.empty())
            {
                j=B.top() ;
                printf("%d\n",j) ;
                B.pop() ;
            }
            else
            {
                printf("Empty\n") ;
            }
        }
        else
        {
            scanf("%d",&k) ;
            B.push(k) ;
        }
    }
    return 0;
}

