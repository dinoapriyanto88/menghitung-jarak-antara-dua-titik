//	Buat fungsi void dengan nama hitungRerata tanpa parameter, fungsi membaca input dari keyboard berupa integer N, dan N data.  Lalu fungsi akan mencetak nilai rata-rata dari data yang diinputkan.
//	
//	Format Input
//	Baris pertama berupa integer N
//	N Baris berikutnya merupakan data dengan tipe pecahan
//	Format Output
//	
//	Output berupa nilai rata-rata data yang diinputkan
//	For example:
//	Test	Input	Result
//	hitungRerata();
//	4
//	3 2 1 12
//	4.5



#include <iostream>
using namespace std;

void hitungRerata(){
    int N;
    cin >> N;

    double sum = 0;
    for(int i=0; i<N; i++){
        double data;
        cin >> data;
        sum += data;
    }

    double rerata = sum / N;
    cout << rerata << endl;
}

//kemarin cuma sampai sini

int main(){
    hitungRerata();
    return 0;
}


