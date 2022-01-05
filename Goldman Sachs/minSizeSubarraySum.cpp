//Himanshu Kumar
//Date: 05/01/22

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int ans = INT_MAX;
        int left = 0;
        int sum =0;
        
        for(int i=0;i<nums.size();i++){
            sum+= nums[i];
            while(sum>=target){
                ans = min(i-left+1,ans);
                sum = sum - nums[left];
                left++;
            }
        }
        if(ans<=nums.size())
            return ans;
        return 0;
                
    }
};

int main() {

    vector<int> v{2,3,1,2,4,3} ;
    int target = 7;
    Solution ob;
    auto ans = ob.minSubArrayLen(target,v);
    cout<<ans<<endl;
    return 0;
}