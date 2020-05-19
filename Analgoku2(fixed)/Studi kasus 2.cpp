#include <iostream>
using namespace std;

main()
{
    int jumlah, cardat, A[100], index, jwb;
	bool ketemu = false;
	cout << "SEQUENTIAL SEARCH" << endl;
	cout << "\nMasukan banyak data =  ";
    cin  >> jumlah;
    cout << endl;

	for(int i=0; i<jumlah; i++)
	{
	   cout << "Data ke-" << i+1 << " : ";
	   cin >> A[i];
	}

	cout << "\nMasukan data yang dicari : ";
	cin  >> cardat;


	for(int i=0; i<jumlah; i++){
	    if(A[i] == cardat){
	 	    ketemu = true;
	        index = i;
	    	i = jumlah;
	   }
	}
	if(ketemu == true){
	   cout << "\nData ditemukan pada data ke-" << index+1;
	}
	else{
	   cout << "Data tidak Ada!";
	}
}
