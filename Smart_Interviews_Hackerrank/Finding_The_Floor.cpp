#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,m,num,i,k=INT_MIN,left,right,mid ;
    vector< long long int> A ;
    scanf("%lld",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&num) ;
        A.push_back(num) ;
    }
    sort(A.begin(),A.end()) ;
    scanf("%lld",&m) ;
    for(i=0;i<m;i++)
    {
        scanf("%lld",&num) ;
        if(A[0]>num)
        {
            printf("%lld\n",k) ;
        }
        else if(A[n-1]<num)
        {
            printf("%lld\n",A[n-1]) ;
        }
        else
        {
            left=0;
            right=n-1 ;
            while(left<right)
            {
                mid=(left+right)/2 ;
                if(A[mid]==num)
                {
                    printf("%lld\n",A[mid]) ;
                    break ;
                }
                else if(A[mid]<num && A[mid+1]>num)
                {
                    printf("%lld\n",A[mid]) ;
                    break ;
                }
                else if(A[mid]<num && A[mid+1]<=num)
                {
                    left=mid+1 ;
                }
                else if(A[mid]>num && A[mid-1]<=num)
                {
                    printf("%lld\n",A[mid-1]) ;
                    break ;
                }
                else
                {
                    right=mid-1 ;    
                }
            }
        }
    }
    return 0;
}
