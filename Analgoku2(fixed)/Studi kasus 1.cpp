#include <iostream>
using namespace std;

int main(){
	//deklarasi
	cout << "NILAI MAKSIMUM" << endl;
	int n, maks, i, x[99];
    for(;;){
		cout<<"\nJumlah data (minimal 2): ";
		cin>>n;
		if(n<2){
			cout<<"Maaf, data minimal 2."<<endl;
			continue;
		}
		break;
	}

	cout<<"Data:"<<endl;
	for (i=0; i<n; i++){
		cout<<"Data ke-"<<i+1<<": ";
		cin>>x[i];
	}

	//Algoritma
	i=1;
	maks=x[0];
	do {
		if(x[i]>maks){
			maks=x[i];
		}
		i=i+1;
	}
	while(i<n);

	cout<<"Nilai terbesar adalah: "<<maks<<endl;
}
