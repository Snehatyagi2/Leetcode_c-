class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        
        // Step 1: Push elements present in arr2 into ans in the relative order
        for (int j = 0; j < arr2.size(); j++) {
            for (int i = 0; i < arr1.size(); i++) { // Removed the stray semicolon here
                if (arr1[i] == arr2[j]) {
                    ans.push_back(arr1[i]);
                }
            }
        }
        
        // Step 2: Find remaining elements not present in arr2
        vector<int> remaining;
        for (int i = 0; i < arr1.size(); i++) {
            bool found = false;
            for (int j = 0; j < arr2.size(); j++) {
                if (arr1[i] == arr2[j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                remaining.push_back(arr1[i]);
            }
        }
        
        // Step 3: Sort the remaining elements in ascending order
        sort(remaining.begin(), remaining.end());
        
        // Append remaining elements to ans
        for (int val : remaining) {
            ans.push_back(val);
        }
        
        return ans;
    }
};