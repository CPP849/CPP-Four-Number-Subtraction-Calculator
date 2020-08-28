#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a, b, c, d, e;
    cout << "Welcome to the Four Number Subtraction Calculator!" << endl;
    cout << "What is the First Number?:" << endl;
    cin >> a;
    cout << "What is the Second Number?:" << endl;
    cin >> b;
    cout << "What is the Third Number?:" << endl;
    cin >> c;
    cout << "What is the Fourth Number?:" << endl;
    cin >> d;
    e = a - b - c - d;
    cout << "The answer is " << e << "." << endl;
    cout << "Thank you for trying out this program!" << endl;
}