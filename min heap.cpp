#include <bits/stdc++.h>
using namespace std;
void heapify(int a[], int n, int x){
	int min=x;
	int l=2*x+1;
	int r=2*x+2;
	if (l>n || r>n) return;
	if (a[l]<a[min]) min=l;
	if (a[r]<a[min]) min=r;
	if (min!=x){
		swap(a[x] , a[min]);
		heapify(a, n, min);
	}
}
void heapSort(int a[], int n){
	for (int i=n/2-1; i>=0; i--){
		heapify(a, n, i);
	}
	for (int j=n-1; j>=0; j--){
		swap(a[0], a[j+1]);
		heapify(a, j, 0);
	}
}
int main(){
	int a[1000];
	int n=1000;
	srand(time(NULL));
	for (int i=0; i<n; i++){
		a[i]=rand()%100;
	}
	heapSort(a, n-1);
	for (int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
