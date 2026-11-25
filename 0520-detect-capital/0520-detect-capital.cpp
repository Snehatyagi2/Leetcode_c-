class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        bool allLower = true;
        bool allUpper = true;
        bool firstUpper = true;

        for (int i = 0; i < n; i++) {
            if (islower(word[i])) {
                allUpper = false;
                if (i == 0) firstUpper = false;
            }
            else {
                allLower = false;
                if (i > 0) firstUpper = false;
            }
        }

        return allLower || allUpper || firstUpper;
    }
};