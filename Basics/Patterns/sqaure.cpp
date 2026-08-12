#include <iostream>
using namespace std;

int main() {
    /* 1.outer loop - n times
       2. 1 signle row - inner loop
    */
    int n =4;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}