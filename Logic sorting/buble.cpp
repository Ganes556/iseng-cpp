# include <iostream>
using namespace std;

int main(){
	int jumlah;
	cout << "Jumlah data: ";
	cin >> jumlah;
	int data[jumlah];
	for(int i=0; i<jumlah; i++){
		cout << "data ke-" << i+1 << ": ";
		cin >> data[i];
	}
	
	int temp;
	for(int i =0; i < 5; i++){
		// dikurangi i karna elemen trakhir akan menjadi yang paling besar pada data tersebut
		// hal tersebut membuat menjadi tidak perlu mengambil elemen terakhir lagi
		for(int j =0; j < 5-i-1; j++){
			temp = data[j];
			if(data[j] > data[j+1]){
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	}
	cout << "hasil sorting: ";
	for(int i = 0; i<5; i++){
		cout << data[i] << " ";
	}
}
