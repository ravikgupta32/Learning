#include <iostream>
using namespace std;
int main()
{
    //int 4 bytes
    //1 bytes = 4bits so 32 bytes
    //−2,147,483,648 to 2,147,483,647
    int a = 25;
    //char 1 byte
    char grade ='A';
    //4 bytes
    float b= 25.6f;
    //Bool 1byte
    bool isSafe=true;
    cout<<isSafe<<endl;
    cout<<grade<<endl;
    //double 8 bytes
    double price = 100.99;
    cout<<price<<endl;
    return 0;
}