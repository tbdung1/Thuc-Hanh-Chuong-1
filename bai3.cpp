#include <iostream>
using namespace std;
int USCLN(int a, int b)
{
    if(b==0) return (a+b);
    return USCLN(b,a%b);
}
int BSCNN(int a,int b)
{
    return (a*b)/USCLN(a,b);
}
int main()
{
    int n,t=0;
    cout << "nhap so n="; cin >>n;
    while(n<2)
    {
        cout <<"vui long nhap lai n: "; cin >>n;
    }
    for(int i=2;i<=n;i++)
    {
      t+=BSCNN(2*i-2,2*i);  
    }
    cout << "tong= " << t;
    return 0;
}