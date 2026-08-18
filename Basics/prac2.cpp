#include <iostream>
using namespace std;
int decToBinary(int num)
 {
    int ans=0;
    int pow =1;
    while(num>0)
    {
        int rem = num%2;
        num/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;

}
int biToDecimal(int num)
{
    int ans=0;
    int pow=1;
    while(num>0)
    {
        int rem=num%10;
        num/=10;
        ans+=(rem*pow);
        pow*=2;
    }
    return ans;
}
int main() {
    cout<<decToBinary(50)<<endl;
    cout<<biToDecimal(110010)<<endl;
    cout<<biToDecimal(1100101)<<endl;
    cout<<biToDecimal(110)<<endl;
    cout<<biToDecimal(1010)<<endl;
    return 0;
}