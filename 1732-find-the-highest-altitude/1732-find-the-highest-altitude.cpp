class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int hg =0;
        int altitude = 0;
    for(int i=0; i<gain.size(); i++){
        altitude += gain[i];
        if(hg < altitude){
            hg = altitude;
        }
    }    
    return hg;
    }
};