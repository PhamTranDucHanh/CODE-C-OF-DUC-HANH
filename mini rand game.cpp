#include <bits/stdc++.h>
using namespace std;
int main(){
	int mode, ans;
	cin>>mode;
	srand(time(NULL));
	int res=rand()%mode;
	cout<<"Nhap vao ans:";
	cin>>ans;
	int diem=10;
	while (ans!=res){
		if (ans<res){
			cout<<"Thu so lon hon di"<<", nhap lai ans: ";
			cin>>ans;
		}
		else if (ans>res){
			cout<<"Thu so nho hon di"<<", nhap lai ans: ";
			cin>>ans;	
		}
		diem--;
	}
	cout<<"Chinh xac. ket thuc."<<" DIEM:"<<diem;
	return 0;
	
}
