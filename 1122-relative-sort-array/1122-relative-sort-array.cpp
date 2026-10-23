class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;
        vector<int> count(1001, 0);

        // Count frequency of each number
        for(int i = 0; i < arr1.size(); i++) {
            count[arr1[i]]++;
        }

        // Add numbers in arr2 order
        for(int i = 0; i < arr2.size(); i++) {
            while(count[arr2[i]] > 0) {
                ans.push_back(arr2[i]);
                count[arr2[i]]--;
            }
        }

        // Add remaining numbers in ascending order
        for(int i = 0; i <= 1000; i++) {
            while(count[i] > 0) {
                ans.push_back(i);
                count[i]--;
            }
        }

        return ans;
    }
};