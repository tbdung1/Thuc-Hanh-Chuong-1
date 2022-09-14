#include <iostream>
using namespace std;
int s;
int sum(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1) s+=a[i];
    }
    return s;
}
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cout << "nhap gia tri phan tu thu " << i << " ";
        cin >> a[i]; 
    }
    cout << "tong cac so le co trong mang tren: " << sum(a,10);
    return 0;
}