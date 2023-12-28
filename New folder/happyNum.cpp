#include <iostream>
using namespace std;

//function for finding sum
int sumOfNum(int num){
    int sum= 0;
    while(num){
        int lastDigit = num % 10;
        sum += lastDigit * lastDigit;
        num /= 10;
    }
    return sum;
}
// this is main function
int main(){
    int n;
    cin>> n;
     unordered_set <int> usedNum ;

       while( n !=1 && !usedNum.count(n)){
           usedNum.insert(n);
           n = sumOfNum(n);
       }
       return n==1;
}
