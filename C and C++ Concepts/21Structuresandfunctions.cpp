#include <iostream>
#include <stdio.h>
using namespace std;

struct rectangle
{
    int len;
    int br;
};

void initialize(struct rectangle *r, int l, int b)
{
    (*r).len = l;
    (*r).br = b;
}

int area(struct rectangle r)
{
    return (r.len * r.br);
}

void changelen(struct rectangle *r, int l)
{
    r->len = 20;
}

int main()
{
    int ar;
    struct rectangle r1;
    initialize(&r1, 10, 5);
    cout << "Initialized Rectangle, Length" << r1.len << " "
         << "Breadth :"
         << " " << r1.br << endl;
    ar = area(r1);
    cout << "Area of original Rectangle : "
         << " " << ar << endl;
    changelen(&r1, 20);
    cout << "Modified Rectangle, Length :"
         << " " << r1.len << "Breadth"
         << " " << r1.br << endl;

    return 0;
}