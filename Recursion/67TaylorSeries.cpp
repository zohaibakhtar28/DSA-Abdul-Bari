#include<iostream>
using namespace std;
double e (int x, int n)
{
    double res;
    static int pow = 1, fact = 1;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        res = e(x, n-1);
        pow = pow*x;
        fact = fact*n;
        return res + (double)pow/fact;
    }
    
}
int main()
{
cout<<"Result :"<<" "<<e(3,10)<<endl;
return 0;
}