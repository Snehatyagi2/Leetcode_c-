class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> ops;
        for(int i = 0 ; i < operations.size() ; i++){
           
            if(operations[i]=="C"){
                ops.pop();
            }
            else if(operations[i]=="D"){
                ops.push(ops.top()*2);
            }
            else if(operations[i]=="+"){
                int s = 0;
                int temp = ops.top();
                ops.pop();
                s = temp+ops.top();
                ops.push(temp);
                ops.push(s);
            }
            else{
                ops.push(stoi(operations[i]));
            }
            
        }
        stack<int> temp = ops;
            int sum = 0;

            while (!temp.empty()) {
                sum += temp.top();
                temp.pop();
            }
        return sum;
    }
};