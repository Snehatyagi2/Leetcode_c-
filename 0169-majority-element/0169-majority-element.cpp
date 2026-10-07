class Solution {
public:
    int majorityElement(vector<int>& nums) {

        vector <int> sorted = nums;
        sort(sorted.begin(), sorted.end());
         
       return sorted[sorted.size()/2];
        
    }
};