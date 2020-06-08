#include<bits/stdc++.h>

#define psb push_back
#define ppb pop_back
#define all(x) x.begin(),x.end()
//#define N 1000100
//#define sf scanf
//#define pf printf

using namespace std;

//typedef long long LL;
typedef vector<long long int>vll;

long long int ar[1000100] , num[1000100];

int main()
{
    int t , tc=0;
    //cin >> t;
    scanf("%d",&t);

    while(t--)
    {
        long long int n, x, arlen=-1, nmlen=-1 , i , maxi=-1 , zar;
        char c;

        //cin >> n;
        scanf("%lld",&n);
        //cout << "Case " << ++tc << ":\n";
        printf("Case %d:\n",++tc);
        getchar();

        while(n--)
        {
            //cin >> c;
            scanf("%c",&c);

            if(c == 'A')
            {
                //cin >> x;
                scanf("%lld",&x);

                nmlen++; //cout << nmlen << " ";

                num[nmlen] = x;

                if(x >= maxi)
                {
                    maxi = x;

                    arlen++;

                    ar[arlen] = maxi;
                }
            }

            else if(c == 'R')
            {
                zar = num[nmlen];

                if(zar == maxi)
                {
                    if(nmlen >= 0)
                    {
                        nmlen--;
                        arlen--;
                        maxi = ar[arlen];
                    }
                }

                else
                {
                    if(nmlen >= 0)
                    {
                        nmlen--;
                    }
                }
            }

            else if(c == 'Q')
            {
                if(nmlen < 0)
                {
                    //cout << "Empty\n";
                    printf("Empty\n");
                }

                else
                {
                    //cout << maxi << "\n";
                    printf("%lld\n",maxi);
                }
            }

            getchar();
        }
    }

    return 0;
}
