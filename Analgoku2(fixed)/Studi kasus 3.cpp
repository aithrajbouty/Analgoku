#include<iostream>

using namespace std;
int main()
{
	int jumlah, i, array[100], cardat, awal, akhir, tengah;
	cout << "BINARY SEARCH"<<endl;
	cout <<"\nMasukkan banyak data : "; cin  >>jumlah;
	cout << endl;

	for (i=0; i<jumlah; i++)
	{
		cout<<"Data ke-"<<i+1<<" :";
		cin>>array[i];
	}
	cout <<"\nMasukkan data yang di cari : ";
	cin  >>cardat;
	awal  = 0;
	akhir = jumlah-1;

	while (awal <= akhir)
	{
		tengah = (awal+akhir)/2;
		if(array[tengah] < cardat)
		{
			awal = tengah + 1;

		}
		else if(array[tengah] == cardat)
		{
			cout<<cardat<<" ditemukan pada data ke-"<<tengah+1<<"\n";
			break;
		}
		else
		{
			 akhir = tengah - 1;
		}
		tengah = (awal + akhir)/2;
	}

	if(awal > akhir)
	{
		cout<<cardat<<" Tidak Ditemukan!";
	}
}
