#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
 
int i, k, lunghezza, lung;
string inser, newinser, app, w, words[101];
cin >> i;
if (i < 1 || i > 100) {cout << "Error, insert up to 100 and no less than 1" << endl; cin >> i;}
 
 
for (k=0; k<=i; k++){
    getline(cin, inser);
    lunghezza = inser.size();
    if (lunghezza <= 10){words[k] = inser;}
    else {
        lung = lunghezza -2;
        app = to_string(lung);
        w = app;
        newinser = inser[0] + w + inser[lunghezza-1] ;
        words[k] = newinser;
        }
}
 
for (k=0; k<=i; k++){
    cout << words[k] << endl << endl;
}
 
return 0;
}