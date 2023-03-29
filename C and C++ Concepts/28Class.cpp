#include <iostream>

using namespace std;

class Rectangle
{
private:
    int len;
    int br;

public:
    Rectangle() // Default Constructor
    {
        len = 0;
        br = 0;
    }

    Rectangle(int l, int b) // Parameterised Constructor
    {
        len = l;
        br = b;
    }

    int area()
    {
        return len * br;
    }

    int perimeter()
    {
        return 2 * (len + br);
    }

    void setlen(int l)
    {
        len = l;
    }

    int getlength()
    {
        return len;
    }

    int getbreadth()
    {
        return br;
    }

    Rectangle :: ~ Rectangle()  // Destructor
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    Rectangle r(10, 5);
    cout << "Area :"
         << " " << r.area() << endl;
    cout << "perimeter :"
         << " " << r.perimeter() << endl;

    return 0;
}