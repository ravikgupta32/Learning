#include <iostream>
using namespace std;
//Calculate nCr binomial cofficient for n&r
//nCr = (n!)/(r!(n-r)!)

int FactofN(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int fact_n= FactofN(n);
    int fact_r = FactofN(r);
    int fact_nr= FactofN(n-r);

    int result = ((fact_n)/(fact_r * fact_nr));
    return result;
}
int main() {
    int n= 6 , r= 3;

    cout<<nCr(n,r)<<endl;
    return 0;
}