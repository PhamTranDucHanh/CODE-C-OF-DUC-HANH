#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    int xa, xb, ya, yb;
    cin>>xa>>ya; cout<<endl;
    cin>>xb>> yb;
    int md=abs(xa-xb)+abs(ya-yb);
    cout<<"Manhattan distance: "<<md<<endl;
    float ed=sqrt((float(xa)-float(xb))*(float(xa)-float(xb))+(float(ya)-float(yb))*(float(ya)-float(yb)));
    cout<<"Euclidean distance"<<fixed<<setprecision(2)<<ed;
}
