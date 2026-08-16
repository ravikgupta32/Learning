#include <iostream>
using namespace std;

int sumofDigits(int num)
{
    int digitsSum=0;
    while(num>0)
    {
        int lastDig=num%10;
        num=num/10;
        digitsSum+=lastDig;

    }
    return digitsSum;
}
int main() {
    cout<<sumofDigits(2356)<<endl;
    return 0;
}