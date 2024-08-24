class Solution {
public:
    string removeDuplicates(string s) {
        vector<char> st;
        for(auto ch: s){
            if(!st.empty() && abs(st.back() -ch)==0){
                st.pop_back();
            }else{
                st.push_back(ch);
            }
        } string answer(st.begin(), st.end());
        return answer;
    }
};