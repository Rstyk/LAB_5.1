#include <iostream>
#include <cmath>

using namespace std;

double p(const double x);

int main()
{
    double s;

    cout << "s = ";cin >> s;

    double c = (pow(p(1 + s * s), 2)) * (1 + s * s) + pow(p(1 - s * s * s) , 3) / (1 + p(10 * s));

    cout << "c = " << c << endl;
    return 0;
}

double p(const double x)
{
    return 1 + sin(x) * sin(x);
}



