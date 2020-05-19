#include <iostream>

using namespace std;

int data[100],datdata[100];
int jumlah;

//fungsi Selection sort
void tukar(int s, int r)
{
	int t;
	t = data[r];
	data[r] = data[s];
	data[s] = t;
}
void SelectionSort()
{
	int pos,i,j;
	for(i=1; i<=jumlah-1 ;i++)
	{
	    pos = i;
	    for(j = i+1;j<=jumlah;j++)
	    {
		   if(data[j] < data[pos]) pos = j;
		}
        if(pos != i) tukar(pos,i);
    }
}

int main()
{
	cout << "SELECTION SORT" << endl;
	cout <<"\nMasukkan Jumlah Data Yang akan diinput : "; cin  >>jumlah;
	cout << endl;

	for(int i=1;i<=jumlah;i++)
	{
		cout<<"Masukkan data ke-"<<i<<" : ";
		cin>>data[i];
		datdata[i]=data[i];
	}

	SelectionSort();
	cout<<"/nData Setelah di Urutkan : "<<endl;
	for(int i=1; i<=jumlah; i++)
	{
	  	cout<<" "<<data[i];
	}
}
