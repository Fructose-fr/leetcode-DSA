class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

       for (int i = 0; i < s.length(); ++i) {
    char cur = s[i];
            if (!st.empty()) {
                char last = st.top();
                if (isPair(last, cur)) {
                    st.pop();
                    continue;
                }
            }
            st.push(cur);
        }

        return st.empty();        
    }

private:
    bool isPair(char last, char cur) {
        return (last == '(' && cur == ')') ||
               (last == '{' && cur == '}') ||
               (last == '[' && cur == ']');
    }
};    