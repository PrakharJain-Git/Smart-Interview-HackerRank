#include<bits/stdc++.h>
using namespace std;
int check(vector<int> A,int mid)
{
    int count=1,sum=0,i,k=INT_MAX,j ;
    j=A.size() ;
    for(i=0;i<j;i++)
    {
        if(sum+A[i]>mid)
        {
            sum=A[i] ;
            count++ ;
            if(A[i]>mid)
            {
                return k ;
            }
        }
        else
        {
            sum+=A[i] ;
        }
    }
    return count ;
}
int main() {
    int n,m,i,j,k,num,left,right,mid,ans,max=0 ;
    scanf("%d",&n) ;
    vector<int> A ;
    for(i=0;i<n;i++)
    {
        A.clear() ;
        scanf("%d %d",&m,&k) ;
        right=0 ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            right+=num ;
            A.push_back(num) ;
            if(max<num)
            {
                max=num ;
            }
        }
        left=num ;
        while(left<=right)
        {
            mid=(left+right)/2 ;
            if(check(A,mid)<=k)
            {
                ans=mid ;
                right=mid-1 ;
            }
            else
            {
                left=mid+1 ;
            }
        }
        printf("%d\n",ans) ;
    }
    return 0;
}

