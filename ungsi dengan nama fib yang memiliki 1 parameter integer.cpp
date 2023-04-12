//	Buat fungsi dengan nama fib yang memiliki 1 parameter integer, fungsi ini untuk menghitung bilangan fibonanci  f(n) = f(n-2) + f(n-1)
//	dimmana f(0) = 0, dan f(1) =1
//	
//	Contoh 
//	fib(5) = f(3) + f(4)
//	f(4) = f(2) + f(1)
//	f(3) = f(1) + f(2)
//	f(2) = f(0) + f(1)
//	f(5) =  5
//	
//	For example:
//	Test	Input	Result
//	cout<<fib(5);
//	cout<<fib(5);
//	5

#include <iostream>
using namespace std;

int fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fib(n-2) + fib(n-1);
    }
}

int main(){
    cout << fib(5) << endl;
    return 0;
}

