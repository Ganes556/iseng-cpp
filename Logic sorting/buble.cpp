# include <iostream>
using namespace std;

int main(){
	int a[5] = {3,1,4,0,2};
	int temp;
	for(int i =0; i < 5; i++){
		// dikurangi i karna elemen trakhir akan menjadi yang paling besar pada data tersebut
		// hal tersebut membuat menjadi tidak perlu mengambil elemen terakhir lagi
		for(int j =0; j < 5-i-1; j++){
			temp = a[j];
			if(a[j] > a[j+1]){
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
	for(int i = 0; i<5; i++){
		cout << a[i];
	}
}
