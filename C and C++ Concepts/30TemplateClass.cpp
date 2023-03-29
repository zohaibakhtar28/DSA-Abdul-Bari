#include <iostream>

using namespace std;

template <class T>
class Arithametic
{
private:
    T a;
    T b;

public:
    Arithametic(T a, T b);
    T add();
    T subtract();
};

template <class T>
Arithametic<T>::Arithametic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithametic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithametic<T>::subtract()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithametic<float> ar{10.99, 5.55};
    cout << "Add :"
         << " " << ar.add() << endl;
    cout << "Subtract :"
         << " " << ar.subtract() << endl;

    return 0;
}
