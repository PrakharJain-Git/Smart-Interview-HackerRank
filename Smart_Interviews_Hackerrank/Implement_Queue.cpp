#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,i,j ;
    string A ;
    queue<int> B ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        cin.ignore() ;
        cin>>A ;
        if (A=="Enqueue")
        {
            cin.ignore() ;
            scanf("%d",&m) ;
            B.push(m) ;
        }
        else
        {
            if(!B.empty())
            {
                j=B.front() ;
                printf("%d\n",j) ;
                B.pop() ;
            }
            else
            {
                printf("Empty\n") ;
            }
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

