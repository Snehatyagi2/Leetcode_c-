class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        vector<int> missing;

        sort(nums.begin(), nums.end());

        // Check gaps
        for(int i = 0; i < nums.size() - 1; i++) {

            int difference = nums[i+1] - nums[i];

            if(difference > 1) {

                int x = nums[i] + 1;

                while(x < nums[i+1]) {
                    missing.push_back(x);
                    x++;
                }
            }
        }

        // Check numbers after last element
        for(int x = nums.back() + 1; x <= nums.size(); x++) {
            missing.push_back(x);
        }

        // Check numbers before first element
        for(int x = 1; x < nums[0]; x++) {
            missing.push_back(x);
        }

        return missing;
    }
};