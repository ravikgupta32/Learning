#include <iostream>
using namespace std;
void swapMinMax(int arr[],int size){
    int minIndex=0;
    int maxIndex=0;
    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[minIndex])
        {
            minIndex=i;
        }
        if(arr[i]>arr[maxIndex])
        {
            maxIndex=i;
        }
    }
    swap(arr[minIndex],arr[maxIndex]);
}
int main() {
    int arr[]={4,2,7,8,5,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    swapMinMax(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}