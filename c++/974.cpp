class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<int> freq(k,0);
        freq[0]=1;
        int rsum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            rsum+=nums[i];
            int r=((rsum%k)+k)%k;
            count+=freq[r];
            freq[r]++;
        }
        return count;
    }
};