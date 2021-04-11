# include <iostream>
using namespace std;
int main(){
	// membuat wajik bagian kiri
	int a;
	cout << "Masukan tingginya,(HARUS GANJIL) = ";
	cin >> a;
	int median = a - (a/2);
	int b = a-median;
	
	//bagian barisnya
	for(int i = 0; i < a; i++){
		// bagian kolomnya
		for(int j = 0; j <= b; j++){
			// logic
			if(i+j >= b && i <= median-1 || i-median < j && i >= median){
				cout<<"*";
			}else{
				cout <<" ";	
			}
		}
		cout << endl;
	}
	
}
