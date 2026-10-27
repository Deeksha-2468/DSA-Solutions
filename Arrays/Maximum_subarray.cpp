// LeetCode 53: Maximum Subarray (Kadane's Algorithm)
// Time: O(n), Space: O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int csum=0,maxsum=INT_MIN;
     for(int val: nums) {
        csum+=val;
        maxsum=max(csum,maxsum);
        if (csum<0)
          csum=0;
     }  
    return maxsum;    
    }
    
};
