#include <iostream>
using namespace std;
class add
{
public:
    add(int x,int y)
    {
        int c= x+y;
        cout<<"Sum = "<<c;
    }
};
int main()
{
    add ad(20,30);
    return 0;
}