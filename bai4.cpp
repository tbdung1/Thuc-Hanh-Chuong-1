#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s; int cnt=0;
    cout << "hay nhap vao 1 chuoi: ";
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='i' && s[i+1]=='t') cnt++;
    }
    cout << "so chuoi con it co trong chuoi tren la: " << cnt;
    return 0;
}