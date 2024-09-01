class Solution {
public:
    double average(vector<int>& salary) {
        std::sort(salary.begin(), salary.end());
        int n = salary.size() - 1;
        int count = 0;
        double min = salary[0], max = salary[n], sum = 0, ave=0;
        for (int i = 0; i < salary.size(); i++) {
            if(salary[i] != min && salary[i] != max){
                sum += salary[i];
                count++;
            }
        }ave = sum/count;
        return ave;
    }
};