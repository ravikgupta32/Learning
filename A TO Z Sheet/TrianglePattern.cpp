#include <iostream>

using namespace std;

void triStarPattern(int n);
int main()
{
    triStarPattern(5);
    return 0;
}

void triStarPattern(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}