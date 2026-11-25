class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd, even, ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                even.push_back(nums[i]);
            }
            else {
                odd.push_back(nums[i]);
            }
        }

        for (int j = 0; j < odd.size(); j++) {
            ans.push_back(even[j]);
            ans.push_back(odd[j]);
        }

        return ans;
    }
};