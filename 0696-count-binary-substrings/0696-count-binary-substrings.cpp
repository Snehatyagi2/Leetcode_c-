class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.length();
        vector<int> blocks(n);
        int idx = 0;

        int count = 1;
        for (int i = 1; i < n; i++){
            if (s[i] == s[i-1]){
                count++ ;
            }
            else{
                blocks[idx++] = count;
                count = 1;
            }
        }
        blocks[idx++] = count;

        int res = 0;
        for (int i = 0; i < idx - 1; i++){
            res += min(blocks[i], blocks[i+1]);
        }

        return res;
        
    }
};