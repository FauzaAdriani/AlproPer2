#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#define diskon 0.15
#define diskon 0.35

int main ()
{
    int order, jumlah, subtotal, total = 0, j = 0;
    char list[100], ulang;
    int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0, harga[5] = { 17000, 25000, 21000, 19000, 20000};
    string menu[5] = {"Ayam Goreng Rp17000" , "Ayam Bakar  Rp25000", "Ayam geprek Rp21000", "Udang goreng Rp19000", "Cumi goreng Rp20000"};
    cout << "============================================" << endl;
    cout << "  HALO SELAMAT DATANG DI WARUNG MAKAN MALAM " << endl;
    cout << "============================================" << endl;
    cout << "      ~ Silahkan pilih orderan anda ~       " << endl;
    cout << endl;
    reuse:
    for (int i = 0; i <= 4; i++)
    {
        cout << "  [" << i+1 << "]   " << menu[i] << endl;
    }
    cout << endl;
    cout << "\t( Masukkan berdasarkan nomor )" << endl;
    cout << "  [-]\tPilih orderan anda\t\t: ";
    cin >> order;
    cout << "  [-]\tJumlah orderan\t\t\t: ";
    cin >> jumlah;

    switch(order)
    {
        case 1:
        strcpy (list,"Ayam Goreng");
        p1+=jumlah;
        break;

        case 2:
        strcpy (list,"Ayam Bakar");
        p2+=jumlah;
        break;
        
        case 3:
        strcpy (list,"Ayam geprek");
        p3+=jumlah;
        break;
        
        case 4:
        strcpy (list,"Udang goreng");
        p4+=jumlah;
        break;
        
        case 5:
        strcpy (list,"Cumi goreng");
        p5+=jumlah;
        j = 5;
        break;

        default:
        cerr << "\n[!][!]    MENU TIDAK TERDAFTAR      [!][!] " << endl;
        cout << " --- Silahkan order sesuai dengan menu ---\n" << endl;
        cout << endl;
        goto reuse;
        break;
    }
    cout << "  [#]\tAnda memilih " << list << endl;
    total = harga[j]*jumlah;
    cout << "  [-]\tHarga Total\t\t\t: Rp" << total << endl;
    if (total >= 25000)
    {
        cout << "Selamat Anda mendapatkan diskon sebesar : " << total*diskon << endl;
        subtotal = total*diskon;
        total = total - subtotal;
    }
    else if (total >= 50000){
    	cout<<"Selamat anda mendapatlan diskon sebesar :  "<<total*diskon<<endl;
    	subtotal = total*diskon;
    	total = total - subtotal;
	}
	else if (total >= 150000){
		cout<<"Selamat anda mendapatlan diskon sebesar :  "<<total*diskon<<endl;
    	subtotal = total*diskon;
    	total = total - subtotal;
	}
	
    cout << "  [-]\tHarga setelah diskon \t\t: Rp" << total << endl;
    return 0;
}
