#include <iostream>
using namespace std;
void uniqueElements(int arr[],int size)
{
    for(int i =0;i<size;i++)
    {
        bool alreadySeen=false;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                alreadySeen=true;
                break;
            }
        }
        if(!alreadySeen){
            cout<<arr[i]<<" ";
        }
    }
}
int main() {
    int arr[]={1,1,2,2,5,5,7,7};
    //print unqiue elements
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<endl;

    return 0;
}