class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        if (nums.empty()) return 0.0;
        
        sort(nums.begin(), nums.end());
        double min_avg = numeric_limits<double>::max();
        size_t left = 0, right = nums.size() - 1;
        
        while (left < right) {
            double current_avg = (nums[left] + nums[right]) / 2.0;
            if (current_avg < min_avg) {
                min_avg = current_avg;
            }
            left++;
            right--;
        }
        
    return min_avg != numeric_limits<double>::max() ? min_avg : 0.0;
        
    }
};
