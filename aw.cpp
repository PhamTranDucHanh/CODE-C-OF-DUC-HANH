#include <iostream>
using namespace std;
int main(){
    int nam; cin>>nam;
    if (nam%4==0 && nam%400==0){
        cout<<nam<<" is a leap year.";
    }
    else cout<<nam<<" is not a leap year.";
}
