#include <iostream>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cout << "nhap gia tri phan tu thu " << i << " ";
        cin >> a[i]; 
    }
    cout << "mang truoc khi sap xep : ";
    for(int i=0;i<10;i++)
    {
        if(i==9) {cout << a[i]; break;}
        cout << a[i] <<",";
    }
    int min,pos;
    for(int i=0;i<9;i++)
    {
        min=a[i];
        for(int j=i+1;j<10;j++)
        {
            if(a[j]<min) 
            {
                min=a[j]; pos=j;
            }
        }
        a[pos]=a[i];
        a[i]=min;
    }
    cout << endl << "mang sau khi sap xep: ";
    for(int i=0;i<10;i++)
    {
        if(i==9) {cout << a[i];break;}
        cout << a[i]<< ",";
    }
    return 0;
}