#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,m,l,p,num,i,j,k,len,flag=0,left,right ;
    scanf("%lld",&n) ;
    vector<long long int> A ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        scanf("%lld %lld",&m,&l) ;
        for(j=0;j<m;j++)
        {
            scanf("%lld",&num) ;
            A.push_back(num) ;
        }
        sort(A.begin(),A.end()) ;
        p=0 ;
        while(p<m-2)
        {
            flag=0 ;
            len=l-A[p] ;
            p++ ;
            left=p ; 
            right=m-1 ;
            while(left<right)
            {
                if(left!=right && A[left]+A[right]==len)
                {
                    flag=1 ;
                    printf("true\n") ;
                    break ;
                }
                else if(A[left]+A[right]<len)
                {
                    left=left+1 ;
                }
                else
                {
                    right=right-1 ;
                }
            }
            if(flag==1)
            {
                break ;
            }
        }
        if(flag==0)
        {
            printf("false\n") ;
        }
    }
    return 0;
}

