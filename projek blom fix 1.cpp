#include <iostream>
using namespace std;

float hitungBMI (float tinggi, float berat)
{
	float bmi = berat/(tinggi*tinggi);
	return bmi;
}
void display (float bmi)
{
	if (bmi<18.5) 
	{
		cout<<" Kategori berat badan \t: kurus "<<endl;
	}	
	else if (bmi>=18.5 && bmi<=24.9)
	{
		cout<<"Kategori berat badan \t: Berat badan normal "<<endl;
	}
	else if (bmi>= 25.0 && bmi<=29.9)
	{
		cout<<"Kategori berat badan \t: kelebihan berat badan   "<<endl;
	}
	else
		cout<<"Kategori berat badan \t: Obesitas "<<endl;
	}

int main ()
{
	float tinggi, berat, bmi;
	int orang;
	string nama [10];
	float tertinggi = 0, terendah =100, totalBMI = 0;
	
	cout<<"Masukkan Jumlah Orang : ";
	cin>> orang;
	cout<<"----------------------------------------------------"<<endl;	
	for (int i=0; i<orang; i++)
	{
		cout<<"Nama : ";
		cin.ignore();
		getline (cin, nama[i]);
		cout<<"Tinggi (m) : ";
		cin >> tinggi;
		
		cout << "Berat (Kg) : ";
		cin >> berat;
		
		bmi = hitungBMI (tinggi, berat);
		display (bmi);
		
		if (bmi>tertinggi)
			tertinggi = bmi;
		if (bmi<terendah)
			terendah =bmi;
		totalBMI = totalBMI + bmi;
	cout<<"----------------------------------------------------"<<endl;
	}
	float rata = totalBMI/orang;
	cout <<endl;
	cout <<"Rata-rata nilai BMI dari "; for (int i=0; i<10; i++)  {
	    cout<<nama [i]<<" , ";
	}
	cout<<" adalah " <<rata<< ", nilai BMI tertinggi dari meraka adalah " <<tertinggi<<", dan nilai BMI terendah dari mereka adalah " <<terendah<< endl;
	return 0;
}
