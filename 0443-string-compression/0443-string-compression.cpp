class Solution {
public:
    int compress(vector<char>& chars) {
        int ans = 0 ;
        int n = chars.size();

        for (int i = 0; i < chars.size();){
            char letter = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == letter){
                ++count;
                ++i;
            }

            chars[ans++] = letter;

            if (count > 1) {
                string countStr = to_string(count);
                for (const char c : countStr) {
                    chars[ans++] = c;
                }
            }
        }
        
        return ans;
    }
};