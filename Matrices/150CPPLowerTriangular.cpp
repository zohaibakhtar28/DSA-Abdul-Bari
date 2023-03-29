#include <iostream>
#include <stdlib.h>
using namespace std;
// Lower Triangle using Row Major
class LowerTriangular
{
private:
    int n;
    int *A;

public:
    LowerTriangular()
    {
        n = 2;
        A = new int[2*(2+1)/2];
    }
    LowerTriangular(int n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void display();
    ~LowerTriangular()
    {
        delete[] A;
    }
};

void LowerTriangular::Set(int i, int j, int x)
{
    if (i >= j)
    {
        A[i*(i-1)/2+j-1] = x;
    }
}

int LowerTriangular::Get(int i, int j)
{
    if (i >= j)
    {
        return A[i*(i-1)/2+j-1];
    }
    else
        return 0;
}

void LowerTriangular::display()
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                cout << A[i*(i-1)/2+j-1] << " ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
    cout<<endl;

}

int main()
{
    int d;
    cout<<"Enter Dimension\n";
    cin>>d;
    LowerTriangular lm(d);
    int x;
    cout<<"Enter All Elements\n";
    for (int i = 1; i <=d ; i++)
    {
        for (int j = 1; j <=d ; j++)
        {
            cin>>x;
            lm.Set(i,j,x);
        }    
    }
    cout<<"Your Lower Triangular Matrix is\n";
    lm.display();

    return 0;
}



