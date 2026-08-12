#include <iostream>
using namespace std;

int main() {
    int n;
    int mul=1;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        mul=mul*i;
    }
    cout<<"Factorial  = "<<mul<<endl;
    return 0;
}