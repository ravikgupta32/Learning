#include <iostream>
using namespace std;
int maxSubArraySum(int arr[],int size){
    int maxSum=INT_MIN;
    int currSum=0;
    //Kadance algorithm
    for(int i=0;i<size;i++)
    {
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0)
        {
            currSum=0;
        }
    }
    return maxSum;
}
int main() {
    int arr[]={3,-4,5,4,-1,7,-8};
    int size= sizeof(arr)/sizeof(arr[0]);
    int maxSum=INT_MIN;

    for(int st=0;st<size;st++)
    {
        int currSum=0;
        for(int end=st;end<size;end++)
        {
            currSum+=arr[end];
            maxSum=max(currSum,maxSum);
        }
    }
    cout<<"Max sum = "<<maxSum<<endl;

    cout<<"Sum from Alogrithm = "<<maxSubArraySum(arr,size)<<endl;
    return 0;
}