#include <iostream>
using namespace std;
#include <vector>
#include <string>



int main(){
    vector<int> nums_arr = {12, 345, 2, 6, 7896};
    int res = 0;
    for(int i = 0; i < nums_arr.size(); i++){
        string str = to_string(nums_arr[i]);
        if (str.length() % 2 == 0){
            res ++;
        }
    
    }
    cout <<res;
    return 0;
}