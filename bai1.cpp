#include <iostream>
using namespace std;
float average(int a, int b, int c)
{
    double arg=((float)a+b+c)/3;
    return arg;
}
int main()
{
    int a,b,c, max;
    cout << "nhap gia tri so thu nhat: "; cin >> a;
    cout << "nhap gia tri so thu hai: "; cin >> b;
    cout << "nhap gia tri so thu ba: "; cin >> c;
    max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    cout << "gia tri lon nhat trong 3 so vua nhap la: " << max << endl;
    cout << "gia tri trung binh cua 3 so la: " << average(a,b,c);
    return 0;
}