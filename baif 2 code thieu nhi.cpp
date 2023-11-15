#include <iostream>
#include <string>
using namespace std;
//()-40 41
//[]91-93
//{}123-125
int main(){
	int tong=0;
	string s;
	int rong[100];
	getline(cin,s);
	int size=s.size();	
    for (int i=0; i<size;i+=2){
    	if (static_cast<int>(s[i])==40&&static_cast<int>(s[i+1])==41){
    		rong[i]=0;
    		rong[i+1]=0;	
		} 
    	else if (static_cast<int>(s[i])==91&&static_cast<int>(s[i+1])==93){
    		rong[i]=0;
    		rong[i+1]=0;    		
		}
    	else if (static_cast<int>(s[i])==123&&static_cast<int>(s[i+1])==125){
    		rong[i]=0;
    		rong[i+1]=0;    		
		}
    }
    for (int j=0; j<size; j++){
    	tong+=rong[j];
	}
	if (tong==0) cout<<"TRUE";
	else cout<<"FALSE";
	return 0;
	
}

