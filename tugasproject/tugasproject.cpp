#include <iostream>
using namespace std;

int a[20];                                                                                      //Deklarasi array a dengan ukuran 20
int n;                                                                                          //Deklarasi variabel n untuk menyimpan banyaknya elemen array

void input() {                                                                                  //Prosedure untuk input
    while (true) {                                                                              //Looping
        cout << "Masukan banyaknya elemen pada array : ";                                       //Output ke layar
        cin >> n;                                                                               //Input dari pengguna
        if (n <= 20)                                                                            //Jika n kurang dari atau sama dengan 20
            break;                                                                              //Keluar dari loop
        else {                                                                                  //Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";                            //Output ke layar

        }
    }
    cout << endl;                                                                               //Output baris kosong'
    cout << "====================" << endl;                                                     //Output ke layar
    cout << "Masukan Elemen Array" << endl;                                                     //Output ke layar
    cout << "====================" << endl;                                                     //Output ke layar

    for (int i = 0; i < n; i++) {                                                               //Looping dengan 1 dimulai dari 0 hingga n-1
        cout << "Data Ke-" << (i + 1) << ": ";                                                  //Output ke layar
        cin >> a[i];                                                                            //Input dari pengguna
    }
}
void dispay() {                                                                                 //Prosedure untuk menampilkan hasil
    cout << endl;                                                                               //Output baris kosong
    cout << "===============================" << endl;                                          //Output ke layar
    cout << "Elemen Array yang telah disusun" << endl;                                          //Output ke layar        
    cout << "===============================" << endl;                                          //Output ke layar

    for (int j = 0; j < n; j++) {                                                               //Looping dengan j dimulai dari 0 hingga n-1
        cout << "Data Ke-" << j + 1 << ": ";
        cout << a[j] << endl;                                                                   //Output ke layar
    }
    cout << endl;                                                                               //Output baris kosong
}
int main()
{
    std::cout << "Hello World!\n";
}

