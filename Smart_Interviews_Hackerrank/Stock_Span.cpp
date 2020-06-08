#include <bits/stdc++.h>
using namespace std; 
  
// A stack based efficient method to calculate 
// stock span values 
void calculateSpan(vector<int> price, int n, int S[]) 
{ 
    // Create a stack and push index of first 
    // element to it 
    stack<int> st; 
    st.push(0); 
  
    // Span value of first element is always 1 
    S[0] = 1; 
  
    // Calculate span values for rest of the elements 
    for (int i = 1; i < n; i++) { 
        // Pop elements from stack while stack is not 
        // empty and top of stack is smaller than 
        // price[i] 
        while (!st.empty() && price[st.top()] <= price[i]) 
            st.pop(); 
  
        // If stack becomes empty, then price[i] is 
        // greater than all elements on left of it, 
        // i.e., price[0], price[1], ..price[i-1].  Else 
        // price[i] is greater than elements after 
        // top of stack 
        S[i] = (st.empty()) ? (i + 1) : (i - st.top()); 
  
        // Push this element to stack 
        st.push(i); 
    } 
} 
  
// A utility function to print elements of array 
void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
int main() {
    int n,m,num,i,j ;
    scanf("%d",&n) ;
    vector<int> B ;
    for(i=0;i<n;i++)
    {
        B.clear() ;
        scanf("%d",&m) ;
        for(j=0;j<m;j++)
        {
            scanf("%d",&num) ;
            B.push_back(num) ;
        }
        int S[m] ;
        calculateSpan(B,m,S);  
  
    // print the calculated span values  
        printArray(S,m);  
        printf("\n") ;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

