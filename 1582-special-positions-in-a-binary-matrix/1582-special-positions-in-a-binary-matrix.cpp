class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int count=0;
        int m=mat.size();
        int n=mat[0].size();
        
        vector<pair<int, int>> vec;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 1){
                    vec.push_back({i,j});
                }
            }
        }

        while(!vec.empty()){
            auto it = vec.back();
            vec.pop_back();

            int i = it.first;
            int j = it.second;
            bool ok= true;
            for(int k=0; k<m; k++){
                if(k!=i && mat[k][j]!=0){
                    ok=false;
                    break;
                }
            }
            for(int k=0; k<n; k++){
                if(k!=j && mat[i][k]!=0){
                    ok=false;
                    break;
                }
            }
            if(ok){
                count++;
            }
        }
        return count; 
    }
};