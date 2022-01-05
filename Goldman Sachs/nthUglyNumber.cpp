//Himanshu Kumar
//Date: 03/01/22

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull dp[n];
	    dp[0]=1;
	    int p2=0,p3=0,p5=0;
	    for(int i=1;i<n;i++){
	        ull f2 = 2*dp[p2];
	        ull f3 = 3*dp[p3];
	        ull f5 = 5*dp[p5];
	        dp[i]= min(f2,min(f3,f5));
	        
	        if(dp[i] == f2) p2++;
	        if(dp[i] == f3) p3++;
	        if(dp[i] == f5) p5++;
	    }
	    
	    return dp[n-1];
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends