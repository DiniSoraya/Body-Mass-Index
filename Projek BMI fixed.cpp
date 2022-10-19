#include <iostream>
//Nama anggota kelompok 7:
//1.Dian prinatama silaban 2217051137
//2.Dini soraya 2217051107
//3.Fara alif lailla 2217051153
using namespace std;

void header() {
cout << 
" _______  _______  ______   __   __    __   __  _______  _______  _______    ___   __    _  ______   _______  __   __ \n"
"|  _    ||       ||      | |  | |  |  |  |_|  ||   _   ||       ||       |  |   | |  |  | ||      | |       ||  |_|  |\n"
"| |_|   ||   _   ||  _    ||  |_|  |  |       ||  |_|  ||  _____||  _____|  |   | |   |_| ||  _    ||    ___||       |\n"
"|       ||  | |  || | |   ||       |  |       ||       || |_____ | |_____   |   | |       || | |   ||   |___ |       |\n"
"|  _   | |  |_|  || |_|   ||_     _|  |       ||       ||_____  ||_____  |  |   | |  _    || |_|   ||    ___| |     | \n"
"| |_|   ||       ||       |  |   |    | ||_|| ||   _   | _____| | _____| |  |   | | | |   ||       ||   |___ |   _   |\n"
"|_______||_______||______|   |___|    |_|   |_||__| |__||_______||_______|  |___| |_|  |__||______| |_______||__| |__|\n"<<endl;
cout<<"Selamat datang di program kalkulator BMI, Indeks massa tubuh (BMI) adalah berat badan seseorang dalam kilogram dibagi \ndengan kuadrat tinggi badan dalam meter. BMI adalah metode skrining yang murah dan mudah untuk menentukan kategori \nberat badan (kurus, berat badan sehat, kelebihan berat badan, dan obesitas)."<<endl;
cout<<"\nPada program ini Anda dapat menghitung nilai BMI, mengetahui kategori berat badan Anda berdasarkan nilai BMI, dan juga \nmenghitung rata-rata nilai BMI; menentukan nilai BMI tertinggi; dan menentukan nilai BMI terendah dalam sebuah grup."<<endl<<endl;                                                                                                                                                                                                                                                                                  
}
// Fungsi menghitung BMI
float hitungBMI (float tinggi, float berat)
{
	float bmi = berat/(tinggi*tinggi);
	return bmi;
}
//Prosedur menampilkan status nutrisi
void tampilkan (float bmi)
{
	if (bmi<18.5) 
	{
		cout<<"Kategori berat badan \t: Kurus"<<endl;
	}	
	else if (bmi>=18.5 && bmi<=24.9)
	{
		cout<<"Kategori berat badan \t: Berat badan normal"<<endl;
	}
	else if (bmi>= 25.0 && bmi<=29.9)
	{
		cout<<"Kategori berat badan \t: Kelebihan berat badan"<<endl;
	}
	else
		cout<<"Kategori berat badan \t: Obesitas"<<endl;
	}

int main ()
{
	float tinggi, berat, hasil;
	int jumlah_anggota;
	string nama [10];
	float tertinggi = 0, terendah =100, totalBMI;
	header ();
	cout<<"Masukkan jumlah anggota grup  : ";
	cin>> jumlah_anggota;
	cout<<"----------------------------------------------------"<<endl;	
	for (int i=0; i<jumlah_anggota; i++)
	{
		cout<<"Nama \t\t\t: ";
		cin.ignore();
		getline (cin, nama[i]);
		cout<<"Tinggi (m) \t\t: ";
		cin >> tinggi;
		
		cout << "Berat (kg) \t\t: ";
		cin >> berat;
                cout << "Nilai BMI \t\t: "<<hitungBMI (tinggi, berat)<<endl; //Memanggil fungsi hitungBMI	
                hasil = hitungBMI (tinggi, berat);
                tampilkan (hasil); //Memanggil prosedur status nutrisi
		if (hasil>tertinggi)
                    tertinggi = hasil;
                if (hasil<terendah)
                   terendah = hasil;
                totalBMI += hasil; 
	cout<<"----------------------------------------------------"<<endl;
	}
	float rata = totalBMI/jumlah_anggota; //menghitung rata-rata
	cout <<endl;
	cout <<"Nama-nama anggota grup yang terdata : \n";
	for (int i=0; i<jumlah_anggota; i++){
	    cout<<" * "<<nama [i]<<endl;}
	cout<<"Rata-rata nilai BMI \t: "<<rata<<endl;
	cout<<"Nilai BMI tertinggi \t: " <<tertinggi<<endl; 
	cout<<"Nilai BMI terendah \t: " <<terendah<< endl;
	return 0;
}
