class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> reversed(s.size());
        int n=s.size()-1;
        for(int i=0; i<s.size(); i++){
            reversed[i] = s[n];
            n--;
        }for(int i=0; i<s.size(); i++){
            s[i] = reversed[i];
        }
    }
};