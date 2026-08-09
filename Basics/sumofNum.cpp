#include <iostream>
using namespace std;

int main() {
    int sum=1;
    int n;
    cout<<"Enter Number :";
    cin>>n;
    for(int i=3;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    cout<<"sum == "<<sum<<endl;
    return 0;
}