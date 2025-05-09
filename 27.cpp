#include <iostream>
using namespace std;
#include <vector>


int main(){
    std::vector<int>nums{0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    int k = 0;
    for (int i = 0; i < nums.size(); i++){
        if (nums[i] != val){
            nums[k] = nums[i];
            k ++;
        }   
    }
    cout<<k;
    return 0;
}
