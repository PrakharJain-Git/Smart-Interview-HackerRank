#include <bits/stdc++.h>
using namespace std;
int main() {
    string B,C ;
    stack<string> A,D ;
    int n,i,j,k,l=0 ;
    scanf("%d",&n) ;
    cin.ignore() ;
    for(i=0;i<n;i++)
    {
        B.clear() ;
        getline(cin,B) ;
        k=B.size() ;
        l=0 ;
        for(j=0;j<k;j++)
        {
            if((B[j]<='z' && B[j]>='a') ||(B[j]<='Z' && B[j]>='A'))
            {
                C+=B[j] ;
            }
            else
            {
                l++ ;
                A.push(C) ;
                C.clear() ;
            }
        }
        A.push(C) ;
        C.clear() ;
        while(!A.empty())
        {
            cout<<A.top() ;
            A.pop() ;
            printf(" ") ;
        }
        printf("\n") ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

