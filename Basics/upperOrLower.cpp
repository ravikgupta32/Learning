#include <iostream>
using namespace std;

int main() {
    char ch;
    cout <<"Enter character : ";
    cin>> ch;
    //Can be done with character without ASCII values
    if(ch>=65 && ch<=90)
    {
        cout<<"Upper Case\n";
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"Lower Case \n";
    }
    else
    {
        cout<<"Invalid input\n";
    }
    return 0;
}