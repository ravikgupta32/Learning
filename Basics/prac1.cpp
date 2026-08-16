#include <iostream>
using namespace std;

bool primeCheck(int n)
{
    if(n < 2)
    {
        return false;;
    }
    for(int i=2;i*i<=n;i++ )
    {
        if(n%i==0)
        {
             return false;
        }
    }
    return true;
}

// void printPrimeNum(int range)
// {
//     for(int i=2;i*i<=range;i++ )
//     {
//         bool isPrime=true;
//         for(int j=2;j*j<=i;j++)
//         {
//             if(i%j==0)
//             {
//                 isPrime=false;
//                 break;
//             }
//         }
//         if(isPrime)
//         {
//             cout<<i<<" ";
//         }

//     }
//     cout<<endl;
// }
void printPrimeNum(int range)
{
    for(int i=2;i<=range;i++)
    {
        bool isPrime = primeCheck(i);
        if(isPrime)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int fibonacciTerm(int position)
{
    if(position == 1)
    {
        return 0;
    }
    if(position == 2)
    {
        return 1;
    }
    int f1=0;
    int f2=1;
    for(int i=3;i<=position;i++)
    {
        int next = f1+f2;
        f1=f2;
        f2=next;
    }
    return f2;
}

void fibonacciSeries(int posRange)
{
    int f1=0;
    int f2=1;
    for(int i=1;i<=posRange;i++)
    {
        cout<<f1<<" ";
        int next=f1+f2;
        f1=f2;
        f2=next;
    }
    cout<<endl;
}

int main() {
    // primeCheck(17);
    // printPrimeNum(20);

    // cout<<fibonacciTerm(3)<<endl;

    fibonacciSeries(8);
    return 0;
}