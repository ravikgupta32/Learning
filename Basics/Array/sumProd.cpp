#include <iostream>
using namespace std;
int sumofArray(int arr[],int size)
{
    int sum =0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int prodofArray(int arr[],int size)
{
    int prod =1;
    for(int i=0;i<size;i++)
    {
        prod*=arr[i];
    }
    return prod;
}
int main() {
    int arr[]={4,2,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<sumofArray(arr,size)<<endl;
    cout<<prodofArray(arr,size)<<endl;
    return 0;
}