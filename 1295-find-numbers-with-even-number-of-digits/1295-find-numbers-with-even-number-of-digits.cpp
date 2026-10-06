class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int count = 0;
        int n = nums.size();
        for (int i = 0 ; i < n; i++){
            int digits = 0;
             while (nums[i] > 0){
                nums[i]= nums[i]/10;
                digits++;
             }

             if (digits % 2 == 0){
                count++;
             }

        }
    return count ; 
    }
};