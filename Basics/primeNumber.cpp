#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter Number to find if it is prime :";
    cin>>n;
    bool isPrime=true;
    if(n==1)
    {
        cout<<"Nor prime nor composite";
    }

    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Non Prime"<<endl;
    }

    return 0;
}