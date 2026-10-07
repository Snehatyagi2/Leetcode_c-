class Solution {
public:
    bool detectCapitalUse(string word) {

        int capital = 0;

        for(int i = 0; i < word.length(); i++) {
            if(isupper(word[i])) {
                capital++;
            }
        }

        if(capital == 0) {
            return true;
        }

        if(capital == word.length()) {
            return true;
        }

        if(capital == 1 && isupper(word[0])) {
            return true;
        }

        return false;
    }
};