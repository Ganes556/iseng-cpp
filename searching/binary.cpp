# include <iostream>
using namespace std;

int main(){
	int data[5] = {1,2,3,6,9};
	cout << "input yg dicari >> ";
	int cari;
	cin >> cari;
	int awal,tengah,akhir;
	
	awal = 0; // posisi awal
	akhir = 4; // posisi akhir = banyak data-1
	
	while(awal <= akhir){	
	
		tengah = (awal+akhir)/2; // data tengah
		// pengecekan nilai yg dicari dengan nilai tengah
		if(cari > data[tengah] ){
			awal = tengah+1;		
		}else if(cari < data[tengah]){
			akhir = tengah-1;
		}else{
			break;
		}
	}
	
	if(cari == data[tengah]){
		cout << "ketemu";
	}else{
		cout << "tidak ketemu";
	}
	

}
