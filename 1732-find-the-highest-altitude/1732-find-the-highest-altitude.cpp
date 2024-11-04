class Solution {
public:
    int largestAltitude(vector<int>& gain) {
            int g=0, t=0;
            for(int i=0; i<gain.size(); i++)
            {
                g += gain[i];
               t= max(t, g);
                
            }
    return t;
    }
};