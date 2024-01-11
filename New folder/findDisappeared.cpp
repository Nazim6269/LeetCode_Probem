#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int> findDisappeared(vector<int> &nums){
        vector <int> result;
        int len = nums.size();
        for(int i = 0; i < len; i++){
        int index =abs(nums[i]) - 1;

        if(nums[index] > 0){
         nums[index] *= -1;
        }
        else{
            continue;
            }
        }

        for(int i = 0; i < len; i++){
            if(nums[i] > 0){
                 result.push_back(i + 1);
            }
        }
        return result;
    }
};

int main(){
    Solution s;
    vector<int> arr = {4,3,2,2,1};
    vector<int> result = s.findDisappeared(arr);

    cout << "Disappeared numbers are: ";
    for (int num : result) {
    cout << num << " ";
    }

    return 0;
}
