//	Buat fungsi dengan nama jarak untuk menghitung jarak antara dua titik (x1,y1) dan (x2,y2).
//	dimana rumus menghitung jarak adalah 
//	D = [( x2 – x1 )2 + (y2 – y1)2] 1/2
//	Constraint:
//	x1, x2, y1, y2 € Riil
//	Prototype Fungsi:
//	double jarak(double, double, double, double);
//	For example:
//	
//	Test	Input	Result
//	cout<<jarak(0,0,3,4);
//	cout<<jarak(0,0,3,4);
//	5






#include <iostream>
#include <cmath> //untuk fungsi sqrt dan pow
using namespace std;

double jarak(double x1, double y1, double x2, double y2){
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return d;
}

//kalau yang kemarin cuma sampai sini

int main(){
    cout << jarak(0,0,3,4); //mencetak hasil jarak antara (0,0) dan (3,4)
    return 0;
}

