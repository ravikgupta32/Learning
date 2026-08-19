#include <iostream>
using namespace std;
//Smallest value in array
int main() {
    int smallest = INT_MAX;
    int nums[]={5,15,22,1,-15,24};
    int size = sizeof(nums)/sizeof(int);

    for(int i=0;i<size;i++)
    {
        if(nums[i]<smallest)
        {
            smallest=nums[i];
        }
    }
    cout<<"smallest = "<< smallest <<endl;
    //Can be replaced by below
    for(int i=0;i<size;i++)
    {
        smallest=min(nums[i],smallest);
    }
    cout<<"smallest = "<< smallest <<endl;
    return 0;
}