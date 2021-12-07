#include <iostream>
#include <iomanip>
#include <cmath>
#include <math.h>
using namespace std;
double ten = 10;
double mf = (-4);
double powten = pow(ten, mf);
double sum,c;
double p=0;
double k, f, i;
int main()
{
    setlocale(LC_ALL,"Russian");
    double eps = (0.5*powten);
    cout << "точность:(e = 0,5 * 10^-4)="<<eps<<endl;

    f = 1;
    k = 1;
    for (i = 1;i <= (k + 1);i++)
        f = f * i;
    sum = k/f;
    do
    {
        p = sum;
        i++;
        f = 1;
        for (i = 1;i <= (k + 1);i++)
            f = f * i;
        c=k/f;
        sum += c;
        cout << "Current=" << (k / f) << endl;
    } 
    while (fabs(c)<=eps);
        cout << "Сумма=" << sum;



       
}