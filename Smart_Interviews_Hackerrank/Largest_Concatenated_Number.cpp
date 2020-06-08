#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;
bool checker(int x, int y)
{
    string xx,yy,str,rev;
    int q;
    xx=to_string(x);
    yy=to_string(y);
    str=xx+yy;
    rev=yy+xx;
    if(str>rev)
    return true;
    else
    return false;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int cases,k;
    cin>>cases;
    for(k=0;k<cases;k++)
    {
        int i,n,num,ans;
        string sol="";
        cin>>n;
        vector<int> arr;
        for(i=0;i<n;i++)
        {
            cin>>num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end(), checker);
        for(i=0;i<n;i++)
        {
            sol=sol+to_string(arr[i]);
        }
        if(sol[0]=='0')
            cout<<0;
        else
        {
            //ans=stoi(sol);
            cout<<sol;
        }
        printf("\n");
    }
    return 0;
}
