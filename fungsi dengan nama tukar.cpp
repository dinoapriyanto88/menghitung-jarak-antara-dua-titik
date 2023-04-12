//	Buat fungsi dengan nama tukar, dengan 3 parameter bilangan bulat a, b, dan c. Fungsi ini akan mengubah nilai tiap parameter dengan cara menukar antara satu dengan lainnya sehingg a < b < c. 
//	
//	For example:
//	Test	Input	Result
//	int a=114,b=22,c=13;
//	    tukar(a,b,c);
//	cout<<a<<" "<<b<<" "<<c<<endl;
//	int a=114,b=22,c=13;
//	    tukar(a,b,c);
//	cout<<a<<" "<<b<<" "<<c<<endl;
//	13 22 114


#include <iostream>
using namespace std;

void tukar(int &a, int &b, int &c){
    if(a > b){
        swap(a, b);
    }
    if(b > c){
        swap(b, c);
    }
    if(a > b){
        swap(a, b);
    }
}

// kemarin cm smp sini
int main(){
    int a = 114, b = 22, c = 13;
    tukar(a, b, c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}

