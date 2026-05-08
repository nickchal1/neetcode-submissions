class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output;
        for(int i=0;i<=n;i++){
            int counter = 0;
            int num = i;
            for(int j=0;j<31;j++){
                if((1 & num) == 1){
                    counter++;
                }
                num = num >> 1;
            }
            output.push_back(counter);
        }
        return output;
    }
};
