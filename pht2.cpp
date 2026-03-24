#include <iostream>
using namespace std;

// inline function to calculate square
inline int sq(int a)
{
    return a * a;
}

// inline function to calculate cube
inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Square of number = " << sq(n) << endl;
    cout << "Cube of number = " << cube(n) << endl;

    return 0;
}