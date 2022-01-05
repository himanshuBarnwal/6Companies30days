//Himanshu Kumar
//Date: 05/01/22

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        //frequency vector where index is (nums %k) i.e remainder and value is frequency of that remainder 
        vector<int> freq(k,0);
        
        for(auto i: nums){
            freq[(i%k+k)%k]++;
        }
        
        if(freq[0]%2 != 0 )
            return 0;
        
        for(int i=1;i<k;i++){
            if(freq[i]!=freq[k-i])
                return 0;
        }
        return 1;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends