class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> x{heights.begin(),heights.end()};
        sort(x.begin(),x.end());
        int cnt=0;
        for(int i=0;i<x.size();i++){
            if(heights[i]!=x[i]){
                cnt++;
            }
        }
        return cnt;
    }
};