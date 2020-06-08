#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int k,cases;
    cin>>cases;
    for(k=0;k<cases;k++)
    {
        long long int i=1,num,flag=0,check=0,low,high,mid;
        cin>>num;
        low=1;
        if(num<0)
        {
            check=1;
            num*=(-1);
        }
        high=num;
        if(num==0)
            cout<<0;
        else
        {
            while(low<=high)
            {
                mid=(low+high)/2;
                if(mid==sqrt(num/mid))
                {
                    if(check==1)
                        mid=mid*(-1);
                    cout<<mid;
                    break;
                }
                else if(mid>sqrt(num/mid))
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        printf("\n");
    }
    return 0;
}


