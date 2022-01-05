//Himanshu Kumar
//Date: 04/01/22

// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    long long squaresInChessBoard(long long N) {
        // code here
        //total no of squares = 1^2 + 2^2 +3^2 +... + n^2 = n*(n+1)*(2n+1)/6
        
        return (N*(N+1)/2)*(2*N + 1)/3;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.squaresInChessBoard(N) << endl;
    }
    return 0;
}  // } Driver Code Ends