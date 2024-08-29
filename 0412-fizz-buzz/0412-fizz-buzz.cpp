class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> out(n);
        int p=1;
        for(int i=0; i<n; i++){
            if(p%3 ==0 && p%5 ==0){
                out[i]="FizzBuzz";
            }else if(p%3 ==0){
                out[i]="Fizz";
            }
            else if(p%5 ==0){
                out[i]="Buzz";
            }else{
                out[i]= to_string(p);
            }p++;
        }return out;
    }
};