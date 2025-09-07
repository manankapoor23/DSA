class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& te) {
        int s = te.size();
        vector<int> res(s,0);
        stack<int> st;
        for(int i =0;i<s;i++){
            while(!st.empty()&&te[i]>te[st.top()]){
                int idx = st.top();
                st.pop();
                res[idx] = i-idx;

            }
            st.push(i);
        }
        return res;
        
    }
};