#include<iostream>

using namespace std;
double e(int x, int n)
{
    double res = 1;
    double num = 1;
    double den = 1;
    int i;
    for ( i = 0; i <= n; i++)
    {
        num = num*x;
        den = den*i;
        res = res + num/den;
    }
    
    return res;
}
int main()
{
    double r = e(1,10);
cout<<"Result"<<" "<<r<<endl;
return 0;
}