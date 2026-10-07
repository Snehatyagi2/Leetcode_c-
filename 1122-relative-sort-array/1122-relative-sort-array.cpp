class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        vector<int> ans;

        // Put elements according to arr2 order
        for (int i = 0; i < arr2.size(); i++) {
            for (int j = 0; j < arr1.size(); j++) {

                if (arr1[j] == arr2[i]) {
                    ans.push_back(arr1[j]);
                }
            }
        }

        vector<int> remaining;

        // Find elements not present in arr2
        for (int i = 0; i < arr1.size(); i++) {

            bool found = false;

            for (int j = 0; j < arr2.size(); j++) {

                if (arr1[i] == arr2[j]) {
                    found = true;
                    break;
                }
            }

            if (found == false) {
                remaining.push_back(arr1[i]);
            }
        }

        // Sort remaining elements
        sort(remaining.begin(), remaining.end());

        // Add remaining elements to answer
        for (int i = 0; i < remaining.size(); i++) {
            ans.push_back(remaining[i]);
        }

        return ans;
    }
};