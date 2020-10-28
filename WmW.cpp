#include <iostream>
using namespace std;
int main(){

	int w, d;
	
	
	cin >> w;
	
	d = w%2;
	
	if (d == 0 && w != 2) {cout << "YES" << endl;}
	else {cout << "NO" << endl;}
	
	
	return 0;	
	
}