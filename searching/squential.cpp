# include <iostream>
using namespace std;

int main(){
	//data
	int data[5] = {8,0,1,1,10};
	int cari;
	
	cout << "Pencarian : ";
	cin >> cari;
	
	bool ada = false;
	int jumlah = 0;
	
	for(int i = 0; i < 5; i++){
		// check jika ada
		if(cari == data[i]){
			// ganti ada dengan true
			ada = true;
			// tambahkan jumlah yg ditemukan
			jumlah++;
		}
	}
	
	// tampilkan
	if(ada){
		cout << "Nilai " << cari << " ditemukan!" << endl;
		cout << "Jumlah yang ditemukan : " << jumlah;
	}else{
		cout << "Nilai " << cari << " tidak ditemukan!";
	}
}
