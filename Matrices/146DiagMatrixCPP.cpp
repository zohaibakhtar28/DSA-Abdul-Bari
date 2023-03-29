#include <iostream>
using namespace std;

class Diagonal
{
private:
    int n;
    int *A;

public:
    Diagonal(int n)
    {
        this->n = n;
        A = new int[n];
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void display();
    ~Diagonal()
    {
        delete[] A;
    }
};

void Diagonal::Set(int i, int j, int x)
{
    if (i == j)
    {
        A[i - 1] = x;
    }
}

int Diagonal::Get(int i, int j)
{
    if (i == j)
    {
        return A[i - 1];
    }
    else
        return 0;
}

void Diagonal::display()
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                cout << A[i] << " ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main()
{
    Diagonal m(5);
    m.Set(1, 1, 1);
    m.Set(2, 2, 2);
    m.Set(3, 3, 3);
    m.Set(4, 4, 4);
    m.Set(5, 5, 5);

    m.display();
    return 0;
}