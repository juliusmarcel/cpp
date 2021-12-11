#include <iostream>
#include <conio.h>

using namespace std;

    int x, total, tunai, kembalian, jumlah, diskon, harga;
    char fc, drink, lain;
    int bayarfc, bayardrink, bayarlain;
    int m, d, n, a[32]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
    string b[13]= {"Nol", "Januari","Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
    string c[8]= {"Nol", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

void tgl(){

    cout<<"Program Fried Chicken"<<endl;
    cout<<endl;

    cout<<"Masukkan hari, tanggal, dan bulan"<<endl;
    cout<<endl;
    cout<<"Hari ke= ";
    cin>>d;
    cout<<"sekarang tanggal= ";
    cin>>n;
    cout<<"Bulan ke= ";
    cin>>m;

    cout<<endl;
    }
void cetaktgl(){
    cout<<c[d]<<", "<<a[n]<<" "<<b[m]<<" 2022"<<endl;
    }
void menu(){
    cout<<"Berikut Menu Program Fried Chicken"<<endl;
    cout<<endl;

    cout<<"Berikut List Harga fried chicken per piece: "<<endl;
    cout<<"0. Tidak ingin memesan menu ini "<<endl;
    cout<<"1. Dada= Rp. 13.000"<<endl;
    cout<<"2. Paha atas= Rp. 11.000"<<endl;
    cout<<"3. Paha bawah= Rp. 9.000"<<endl;
    cout<<"4. Sayap= Rp. 9.000"<<endl;
    cout<<endl;

    cout<<"Berikut List harga drink: "<<endl;
    cout<<"0. Tidak ingin memesan menu ini"<<endl;
    cout<<"1. Ice Coffee= Rp. 7.500"<<endl;
    cout<<"2. Aqua Botol= Rp. 4.000"<<endl;
    cout<<"3. Pepsi= Rp. 7.000"<<endl;
    cout<<"4. Mocha Float= Rp. 11.000"<<endl;
    cout<<"5. Fanta= Rp. 6.000"<<endl;
    cout<<"6. Ichi Ocha= Rp. 9.000"<<endl;
    cout<<endl;

    cout<<"Berikut list harga lainnya: "<<endl;
    cout<<"0. Tidak ingin memesan menu ini"<<endl;
    cout<<"1. Nasi= Rp. 4.000"<<endl;
    cout<<"2. Kentang= Rp. 6.000"<<endl;
    cout<<"3. Salad= Rp. 7500"<<endl;
    cout<<"4. Soup= Rp. 6.000"<<endl;
    cout<<endl;

    cout<<"Masukkan pilihan fried chicken: ";
    cin>>fc;
    cout<<endl;
    cout<<"Masukkan pilihan Minuman: ";
    cin>>drink;
    cout<<endl;
    cout<<"Masukkan pilihan lainnya: ";
    cin>>lain;
    cout<<endl;
    }
int jml(int a, int b){
    return a*b;
    }
int bayar(int a, int b){
    return a-b;
    }
void cetakakhir(){
    total= bayarfc+bayardrink+bayarlain;
    cout<<"Total yang harus dibayarkan sebesar= Rp. "<<total<<endl;
    cout<<endl;
    cout<<"Masukkan Jumlah Uang yang dibayarkan konsumen= Rp. ";
    cin>>tunai;
    cout<<endl;
    kembalian=tunai-total;
    cout<<"Kembalian: Rp. "<<kembalian<<endl;
    cout<<endl;
    }
void cetakayam(){
    if (fc == '1'){
    cout<<"Total ayam (dada): Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar ayam (dada): Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(fc == '2'){
    cout<<"Total ayam (Paha atas): Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar ayam (Paha atas): Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(fc == '3'){
    cout<<"Total ayam (Paha Bawah): Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar ayam (Paha Bawah): Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(fc == '4'){
    cout<<"Total ayam (Sayap): Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar ayam (Sayap): Rp. "<<bayar(jumlah,diskon)<<endl;
    }
}
void cetakminum(){
    if (drink == '1'){
    cout<<"Total Ice Coffee : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Ice Coffee : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(drink == '2'){
    cout<<"Total Aqua Botol : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Aqua Botol : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(drink == '3'){
    cout<<"Total Pepsi : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Pepsi : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(drink == '4'){
    cout<<"Total Mocha Float : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Mocha Float : Rp."<<bayar(jumlah,diskon)<<endl;
    }
    else if(drink == '5'){
    cout<<"Total Fanta : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Fanta : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(drink == '6'){
    cout<<"Total Ichi Ocha : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Ichi Ocha : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
}
void cetaklain(){
    if (lain == '1'){
    cout<<"Total Nasi : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Nasi : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(lain == '2'){
    cout<<"Total Kentang : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Kentang : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(lain == '3'){
    cout<<"Total Salad : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Salad : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
    else if(lain == '4'){
    cout<<"Total Soup : Rp. "<<jml(harga,x)<<endl;
    cout<<endl;
    cout<<"Bayar Soup : Rp. "<<bayar(jumlah,diskon)<<endl;
    }
}
int main(){
    tgl();
    menu();
    switch(fc){
    case '0':{
    bayarlain=0;
    cout<<endl;
    }
    break;
    case '1':{
    harga= 13000;
    cout<<"Masukkan Jumlah ayam (dada) yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=39000){
            diskon= jumlah*5/100;
            cout<<"Diskon 5%, diskon ayam (Dada) sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    else if (jumlah<39000){
            diskon=0;
            cout<<"Diskon 0%, diskon ayam (Dada) sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    cetakayam();
    bayarfc=bayar(jumlah,diskon);
    cout<<endl;
    }
    break;

    case '2':{
    harga= 11000;
    cout<<"Masukkan Jumlah ayam (Paha atas) yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=33000){
        diskon= jumlah*5/100;
        cout<<"Diskon 5%, diskon ayam (Paha atas) sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    else if (jumlah<33000){
        diskon= 0;
        cout<<"Diskon 0%, diskon ayam (Paha atas) sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    cetakayam();
    bayarfc=bayar(jumlah,diskon);
    cout<<endl;
    }
    break;
    case '3':{
    harga= 9000;
    cout<<"Masukkan Jumlah ayam (Paha Bawah) yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=27000){
        diskon= jumlah*5/100;
        cout<<"Diskon 5%, diskon ayam (Paha Bawah) sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    else if (jumlah<27000){
        diskon=0;
        cout<<"Diskon 0%, diskon ayam (Paha Bawah) sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    cetakayam();
    bayarfc=bayar(jumlah,diskon);
    }
    break;
    case '4':{
    harga= 9000;
    cout<<"Masukkan Jumlah ayam (Sayap) yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=27000){
        diskon= jumlah*5/100;
        cout<<"Diskon 5%, diskon ayam (Sayap) sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    else if (jumlah<27000){
        diskon=0;
        cout<<"Diskon 0%, diskon ayam (Sayap) sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    cetakayam();
    bayarfc=bayar(jumlah,diskon);
    }
    break;
    default:{
        cout<<"Input Anda Salah"<<endl;
        cout<<endl;
        }
    }
    switch(drink){
    case '0':{
    bayarlain=0;
    cout<<endl;
    }
    break;
    case '1':{
    harga= 7500;
    cout<<"Masukkan Jumlah Ice Coffee yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=22500){
        diskon= jumlah*5/100;
        cout<<"Diskon 5%, diskon Ice Coffee sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    else if (jumlah<22500){
        diskon= 0;
        cout<<"Diskon 0%, diskon Ice Coffee sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    cetakminum();
    bayardrink=bayar(jumlah,diskon);
    }
    break;
    case '2':{
    harga= 4000;
    cout<<"Masukkan Jumlah Aqua Botol yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=12000){
        diskon= jumlah*5/100;
        cout<<"Diskon 5%, diskon Aqua Botol sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    else if(jumlah<12000){
        diskon= 0;
        cout<<"Diskon 0%, diskon Aqua Botol sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    cetakminum();
    bayardrink=bayar(jumlah,diskon);
    }
    break;
    case '3':{
    harga= 7000;
    cout<<"Masukkan Jumlah Pepsi yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=21000){
        diskon= jumlah*5/100;
        cout<<"Diskon 5%, diskon Pepsi sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    else if (jumlah<21000){
        diskon= 0;
        cout<<"Diskon 0%, diskon Pepsi sebesar: Rp. "<<diskon<<endl;
        cout<<endl;
        }
    cetakminum();
    bayardrink=bayar(jumlah,diskon);
    }
    break;
    case '4':{
    harga= 11000;
    cout<<"Masukkan jumlah Mocha float yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=33000){
            diskon= jumlah*5/100;
            cout<<"Diskon 5%,diskon Mocha Float sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    else if (jumlah<33000){
            diskon=0;
            cout<<"Diskon 0%,diskon Mocha Float sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    cetakminum();
	bayardrink=bayar(jumlah,diskon);
    }
    break;
    case '5':{
    harga= 6000;
    cout<<"Masukkan jumlah Fanta yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=18000){
            diskon= jumlah*5/100;
            cout<<"Diskon 5%,diskon Fanta sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    else if (jumlah<18000){
            diskon=0;
            cout<<"Diskon 0%,diskon Fanta sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    cetakminum();
	bayardrink=bayar(jumlah,diskon);
    }
    break;

  case '6':{
    harga= 9000;
    cout<<"Masukkan jumlah Ichi Ocha yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=27000){
            diskon= jumlah*5/100;
            cout<<"Diskon 5%,diskon Ichi Ocha sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    else if (jumlah<27000){
            diskon=0;
            cout<<"Diskon 0%,diskon Ichi Ocha sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
	cetakminum();
	bayardrink=bayar(jumlah,diskon);
    }
    break;
    default:{
        cout<<"Input Anda Salah"<<endl;
        cout<<endl;
        }
    }
	switch(lain){
	case '0':{
        bayarlain=0;
        cout<<endl;
        }
    break;

    case '1':{
    harga= 4000;
    cout<<"Masukkan jumlah Nasi yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=12000){
            diskon= jumlah*5/100;
            cout<<"Diskon 5%,diskon Nasi sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    else if (jumlah<12000){
            diskon=0;
            cout<<"Diskon 0%,diskon Nasi sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
	cetaklain();
	bayarlain=bayar(jumlah,diskon);
    }
    break;

    case '2':{
    harga= 6000;
    cout<<"Masukkan jumlah Kentang yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=18000){
            diskon= jumlah*5/100;
            cout<<"Diskon 5%,diskon Kentang sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    else if (jumlah<18000){
            diskon=0;
            cout<<"Diskon 0%,diskon Kentang sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    cetaklain();
	bayarlain=bayar(jumlah,diskon);
    }
    break;

    case '3':{
    harga= 7500;
    cout<<"Masukkan jumlah Salad yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=22500){
            diskon= jumlah*5/100;
            cout<<"Diskon 5%,diskon Salad sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    else if (jumlah<22500){
            diskon=0;
            cout<<"Diskon 0%,diskon Salad sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    cetaklain();
	bayarlain=bayar(jumlah,diskon);
    }
    break;

    case '4':{
    harga= 6000;
    cout<<"Masukkan jumlah Soup yang diinginkan: ";
    cin>>x;
    jumlah=jml(harga,x);
    if (jumlah>=18000){
            diskon= jumlah*5/100;
            cout<<"Diskon 5%,diskon Soup sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    else if (jumlah<18000){
            diskon=0;
            cout<<"Diskon 0%,diskon Soup sebesar: Rp. "<<diskon<<endl;
            cout<<endl;
            }
    cetaklain();
	bayarlain=bayar(jumlah,diskon);
    }
    break;
    default:{
        cout<<"Input Anda Salah"<<endl;
        cout<<endl;
        }
	}
    cetakakhir();
    cetaktgl();
    return 0;
}

