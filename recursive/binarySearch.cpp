# include <iostream>
using namespace std;
// konsep recursive itu menggunakan return dan isi return tersebut mengembalikan dirinya sendiri
int binarySearch(int data[],int awal,int akhir,int cari){

	int tengah = (awal+akhir)/2;
	
	// nilai awal tidak mungkin lebih besar dari nilai akhirnya
	// maupun nilai akhir tidak mungkin lebih kecil dari nilai awalnya
	if(awal <= akhir){
		// ketemu kembalikan index
		if(cari == data[tengah]){
			return tengah;
		// awal --> tengah+1
		}else if(cari > data[tengah]){
			return binarySearch(data,tengah+1,akhir,cari);   
		// akhir --> tengah-1
		}else if(cari < data[tengah]){
			return binarySearch(data,awal,tengah-1,cari);
		}
	}
	return -1;
}


int main(){
	int data[] = {1,2,3,4,7,9,10,12,32,33};
	while(true){
		cout << "Masukan nilai yg dicari >> ";
		int cari;
		cin >> cari;
		
		int akhir = sizeof(data)/sizeof(data[0])-1;
			
		int index = binarySearch(data,0,akhir,cari);
		
		if(index == -1){
			cout << cari << " Tidak ditemukan di dalam data!" << endl<<endl;
		}else{
			cout << cari << " Ditemukan pada index ke-" << index <<endl<<endl;
		}
	}
}


