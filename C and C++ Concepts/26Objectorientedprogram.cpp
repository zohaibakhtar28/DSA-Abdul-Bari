#include <iostream>

using namespace std;

class Rectangle
{
public :    
    int len;
    int br;


 void initialise(int l, int b)
 {
    len = l;
    br = b;
 }

 int area()
 {
    return len*br;
 }

 int perimeter()
 {
    return 2*(len + br);
 }

    
};

int main()
{
    struct Rectangle r;
    int l,b,ar,peri;
    cout<<"Enter Length and Breadth"<<endl;
    cin>>l>>b;
    
    r.initialise(l,b);
    ar = r.area();
    peri = r.perimeter();
    cout<<"Area and Perimerter are :"<<" "<<ar<<" "<<peri<<endl;

    return 0;
}