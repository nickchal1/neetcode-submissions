class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter = 0;
        for(int i=0;i<31;i++){
            if((n & 1) == 1){
                counter++;
            }
            n = n >> 1;
        }
        return counter;
    }
};
