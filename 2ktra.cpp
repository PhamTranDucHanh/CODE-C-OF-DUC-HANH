#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
int main()
{
    char x1; cin>>x1;
    int x2; cin>>x2;
    string x3; getline(cin, x3);
    cin.ignore();
    float x4; cin>>x4;
    int x5; cin>>x5;
    cout<<"Name: "<<x1<<endl;
    cout<<"Age: "<<x2<<endl;
    cout<<"Sex: "<<x3<<endl;
    cout<<"Height: "<<fixed<<setprecision(2)<<x4<<endl;
    cout<<"Weight: "<<x5;
    return 0;
}

