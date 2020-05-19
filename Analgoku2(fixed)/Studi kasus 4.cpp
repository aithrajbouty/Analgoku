#include <iostream>

using namespace std;

int data[100],data2[100],jumlah;

//Fungsi Insertion Discending
void Insert_sort()
{
	int temp,i,j;
	for(i=1;i<=jumlah;i++){
	    temp = data[i];
		j = i -1;
	    while(data[j]>temp && j>=0){
			data[j+1] = data[j];
	   	    j--;
	    }
	    data[j+1] = temp;
	}
}
int main()
{
	cout << "INSERTION SORT"<<endl;
	cout <<"\nMasukkan Jumlah Data : ";
	cin  >>jumlah;
	cout <<endl;

	for(int i=1;i<=jumlah;i++){
	  cout<<"Masukkan data ke-"<<i<<" : ";
	  cin>>data[i];
	  data2[i]=data[i];
	}

	Insert_sort();
	cout<<"\nData Setelah di Urutkan : "<<endl;

	for(int i=1; i<=jumlah; i++)
	{
	  cout<<data[i]<<" ";
	}
}
