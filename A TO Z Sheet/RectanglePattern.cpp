#include <iostream>

using namespace std;

void rectStarPatter(int n);
int main()
{
    rectStarPatter(5);
    return 0;
}

void rectStarPatter(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "*****" << endl;
    }
}