#include <iostream>
using namespace std;

int main()
{
    float A;
    float B;
    float X;
    printf("Hello, my name is Luke and Im going to solve the equation:\nAx + B = 0\nFor x\n\n");
    cout << "Please enter a value for A: ";
    cin >> A;

    cout << "Please enter a value for B: ";
    cin >> B;
    X = -B/A;

    cout << "Solving " << A << "x+" << B << "=0 for x..." << endl;
    cout<<"x="<<X;

}