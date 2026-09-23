class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
          vector<int> freq(nums.size() + 1, 0);
        freq[0] = 1;
        int sum = 0;
        int count = 0;
        for (int x : nums) {
            sum += x;
            if (sum >= goal) {
                count += freq[sum - goal];
            }
            freq[sum]++;
        }

        return count;
    }
};