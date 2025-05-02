class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(int i:nums){
            string str = to_string(i);
            if (str.length() % 2 == 0){
                res ++;
            }
        
        }
        return res;
    }
};
