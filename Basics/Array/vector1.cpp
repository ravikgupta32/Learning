#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;//Size 0 now
    cout<<"size =" <<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    for(int val: vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<"Vector at first positon: " <<vec.at(1)<<endl;
    vec.pop_back();
    for(int val: vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"size =" <<vec.size()<<endl;
    vector<int> vecNew = {1,2,3};
    cout<<"size =" <<vecNew.size()<<endl;
    vector<int> vecThird(3,0);//Size,Value
    for(int i : vecThird)//for each loop
    {
        cout<<i<<endl;
    }
    //cout<<vecNew[0]<<endl;
    return 0;
}