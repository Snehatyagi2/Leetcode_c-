class Solution {
public:
    bool detectCapitalUse(string word) {
        bool con = false;
        int total = 0;
        for(int i = 0; i < word.size(); ++i)
        {
            if(word[i] >= 'A' && word[i] <= 'Z') total++;
        }
        if(total == 0 || total == word.size()) return true;
        else if(total == 1 && word[0] >= 'A' && word[0] <= 'Z') return true;
        else return false;
    }
};