//Himanshu Kumar
//Date: 05/01/22

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> LargestTenNumbers(int arr[], int n) {
	    // code 
	     vector<int>res;
	    
	    priority_queue<int> queue; //max heap
	    
	    for(int i = 0; i < n; i++){
	        queue.push(arr[i]);
	    }
	    int k=10;
	    while(k > 0){
	        
	        res.push_back(queue.top());
	        queue.pop();
	        k--;
	        
	    }
	    
	    return res;
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n ;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.LargestTenNumbers(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends