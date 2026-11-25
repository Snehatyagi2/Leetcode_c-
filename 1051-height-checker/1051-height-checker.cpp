
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int freq[101] = {};

        for (int h : heights)
            freq[h]++;

        int count = 0, index = 0;

        for (int h = 1; h <= 100; h++) {
            while (freq[h] > 0) {
                if (heights[index] != h)
                    count++;

                index++;
                freq[h]--;
            }
        }

        return count;
    }
};
