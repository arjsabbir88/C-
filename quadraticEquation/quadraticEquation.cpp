// ax² + bx + c
//  x = ((-b ± √(b² - 4ac)) / 2)a

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 1;
    int b = 5;
    int c = 1;

    int multi = 4 * a * c; // 4*4*5 = 80;

    double divesior = (b * b) - multi;
    // cout << divesior;

    if (divesior <= 0)
    {
        cout << "don't find any value" << endl;
    }
    else
    {
        double root = sqrt(divesior);

        cout << sqrt(4) << endl;

        cout << root << endl;

        double PositiveValue = (-b + root) / (2 * a);
        double NegativeValue = (-b - root) / (2 * a);

        cout<<"value of x "<<PositiveValue <<" " <<NegativeValue <<endl;
    }
}