#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num; //Because Same number XOR =0 4^1^2^1^2=4
    }
    return result;
}
int main() {
    vector<int> vec = {4,1,2,1,2};
    cout<<singleNumber(vec)<<endl;
    return 0;
}