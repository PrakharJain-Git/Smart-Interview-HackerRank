#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m,num,i,j,sum,count ;
    unordered_map<int,int> mp; 
    vector<int> arr ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        arr.clear() ;
        mp.clear() ;
        scanf("%d",&m) ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            if(num==0)
            {
                num=-1 ;
            }
            arr.push_back(num) ;
      }
      sum=0; 
      count=0; 
      for (j=0;j<m;j++) 
      { 
            sum+=arr[j]; 
            if (sum==0) 
            {
                count++ ;
            }
            if (mp[sum]>0)
            {
                count+=mp[sum] ;
            } 
            if(mp[sum]==0)
            {
                mp[sum]=1 ;
            }
            else
            {
                mp[sum]++ ;
            }
        } 
        printf("%d\n",count) ;
    }
    return 0;
}

