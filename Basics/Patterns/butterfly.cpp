#include <iostream>
using namespace std;

int main() {
    int n=4;
    for(int i=0;i<n;i++)
    {
        //Triangle
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        //Spaces odd decreasing
        if(i!=n-1)
        {
            for(int j=0;j<2*(n-i)-3;j++)
            {
                cout<<" ";
            }
        }
        for(int j=0;j<i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    for(int i=n;i>0;i--)
    {
        //Triangle
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        //Spaces odd decreasing
        if(i!=n)
        {
            for(int j=0;j<2*(n-i);j++)
            {
                cout<<" ";
            }
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}