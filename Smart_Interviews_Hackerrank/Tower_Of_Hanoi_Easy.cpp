/*#include <bits/stdc++.h>
using namespace std ;
vector<int> disknum(int m)
{
    vector<vector<int>> A ;
    vector<int> B,E ;
    if(m==1)
    {
        E.push_back(1) ;
        return E ;
    }
    A.push_back(disknum(m-1)) ;
    B.push_back(m) ;
    A.push_back(B) ;
    A.push_back(disknum(m-1)) ;
    return A[0] ;
}
int main() {
    vector<vector<int>> C ;
    vector<int> B ;
    int n,m,i,j,ans ;
    char x='A',y='B',z='C' ;
    scanf("%d",&n) ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m) ;
        ans=1 ;
        for(j=0;j<m;j++)
        {
            ans=ans*2 ;
        }
        ans=ans-1 ;
        C.push_back(disknum(m)) ;
        for(j=0;j<=m;j++)
        {
            B.push_back(0) ;
        }
        printf("%d\n",ans) ;
        for(j=0;j<ans;j++)
        {
            if(C[0][j]%2==1)
            {
                B[C[0][j]]++ ;
                if(B[C[0][j]]%3==0)
                {
                    printf("Move %d from %c to %c\n",C[0][j],y,x) ;
                }
                else if(B[C[0][j]]%3==1)
                {
                    printf("Move %d from %c to %c\n",C[0][j],x,z) ;
                }
                else
                {
                    printf("Move %d from %c to %c\n",C[0][j],z,y) ;
                }
            }
            else
            {
                B[C[0][j]]++ ;
                if(B[C[0][j]]%3==0)
                {
                    printf("Move %d from %c to %c\n",C[0][j],z,x) ;
                }
                else if(B[C[0][j]]%3==1)
                {
                    printf("Move %d from %c to %c\n",C[0][j],x,y) ;
                }
                else
                {
                    printf("Move %d from %c to %c\n",C[0][j],y,z) ;
                }
            }
        }
        B.clear() ;
        C.clear() ;
    }
    return 0;
}*/

#include <bits/stdc++.h> 
using namespace std; 
  
void towerOfHanoi(int n, char from_rod, 
                    char to_rod, char aux_rod)  
{  
    if (n == 1)  
    {  
        cout << "Move 1 from " << from_rod <<  
                            " to " << to_rod<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  
    cout << "Move " << n << " from " << from_rod << 
                                " to " << to_rod << endl;  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
}  
  
// Driver code 
int main()  
{  
    int n,m,ans,j ; 
        scanf("%d",&n); // Number of disks
    while(n>0)
    {
        scanf("%d",&m) ;
        ans=1 ;
        for(j=0;j<m;j++)
        {
            ans=ans*2 ;
        }
        ans=ans-1 ;
        printf("%d\n",ans) ;
        towerOfHanoi(m, 'A', 'C', 'B'); // A, B and C are names of rods  
        n-- ;
    }
    return 0;  
}  

