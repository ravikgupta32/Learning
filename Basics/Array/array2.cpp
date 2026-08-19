#include <iostream>
using namespace std;

int main() {
    int nums[]={5,15,-22,1,-15,24};
    int largest =INT_MIN;
    int smallest = INT_MAX;
    int size = sizeof(nums)/sizeof(nums[0]);
    int index_large=0;
    int index_small=0;
    // for(int i=0;i<size;i++)
    // {
    //     largest = max(nums[i],largest);

    // }

    for(int i=0;i<size;i++)
    {
        if(nums[i]>largest)
        {
            largest=nums[i];
            index_large=i;
        }
        if(nums[i]<smallest)
        {
            smallest=nums[i];
            index_small=i;
        }

    }
    cout<<"largest = "<<largest<<" is at index "<<index_large<<endl;
    cout<<"smallest = "<<smallest<<" is at index "<<index_small<<endl;
    return 0;
}