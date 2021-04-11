# include <iostream>
# include <conio>

int main(){
	
	int Dipa[9] = {2,1,3,4,6,7,8,9,5};
	int cari;
	
	cout << "Masukan Nilai Yang Dicari >> ";
	cin >> cari;
	
	for(int i = 0; i < 9; i++){
		if(cari == Dipa[i]){
			cout << "Ada"<< endl;
			break;
		}else if(i == 8){
			cout << "Tidak ada"<<endl;
		}
	}
	getch();
}
