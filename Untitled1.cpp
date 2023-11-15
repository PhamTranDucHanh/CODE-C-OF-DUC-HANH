#include <iostream>
using namespace std;
int main(){
	int n, tong=0;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin>>a[i];
	}
	for (int k = 0; k < n; k++) {
		for (n; n > 0; n--) {
			tong = a[n] + a[n - 1];
			if (tong == 9 ) cout << a[n] << " " << a[n - 1];
			else continue;
		}
	}
	return 0;
}
