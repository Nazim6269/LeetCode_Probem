#include <iostream>
using namespace std;

//find the candidate for majority
int findMajority(int nums[]){
    int votes=0;
    int candidate = 0;
    int len =sizeof(nums) / sizeof(nums[0]);

    for(int i=0; i<len; i++){
        if(votes == 0){
            candidate = nums[i];
            votes =1;
        }else{
            if(candidate == nums[i]){
                votes +=1;
            }else{
                votes -=1;
            }
        }
    }
  // Checking if majority candidate occurs more than n/2
    // times
    int count=0;
    for (int i=0; i<len; i++){
        if(nums[i] == candidate){
            count++;
        }
    }


    if(count > len/2){
        return candidate;
    }else{
        return -1;
    }


}

int main(){
    int nums []={1,1,1,1,2,3,4};

    int majority = findMajority(nums);

    cout << "The majority element is :" << majority;

    return 0;
}
