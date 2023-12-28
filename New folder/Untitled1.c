
#include <iostream>
using namespace std;
int sumOfNum(int num){
    int sum =0;
    while(num){
        int lastDigit= num % 10;
    sum += lastDigit * lastDigit;
    num /=10;
    }
}
int main(){


}
