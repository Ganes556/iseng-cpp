# include <iostream>
using namespace std;

int main(){
	int data[5] = {1,2,3,6,9};
	cout << "input yg dicari >> ";
	int cari;
	cin >> cari;
	int awal,tengah,akhir;
	
	awal = 0;
	akhir = 4;
	
	while(awal <= akhir){	
	
		tengah = (awal+akhir)/2;
		
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
