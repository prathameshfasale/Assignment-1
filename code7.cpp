// Write a C++ program to swap two numbers using using class
#include <iostream>
using namespace std;

class Swap
{
public:
    int a, b;

    void getData()
    {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    void swapNumbers()
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    void display()
    {
        cout << "After swapping:" << endl;
        cout << "First number = " << a << endl;
        cout << "Second number = " << b << endl;
    }
};

int main()
{
    Swap s;
    s.getData();
    s.swapNumbers();
    s.display();

    return 0;
}
