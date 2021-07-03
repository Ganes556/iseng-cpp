# include <iostream>
using namespace std;

int main(){
	int a[] = {1,4,2,7,3,9,6,8,0};
	int k,y,i;
	// k nya menjadi kunci
	for(k =1; k < 9; k++){
		
		y = a[k]; // nilai kuncinya // 0
		i = k-1;
		// melakukan pergeseran
		while(i >= 0 &&  y < a[i]){
			a[i+1] = a[i]; // 0 = 4 // 0, 1, 3, 4, 2 
//			cout << y << "   " << i;
			// fase pertama
			// 3 = 1
			// 1, 1 , 4, 0, 2
			i--;
		}
		// 1 (index 1) tukar atau diganti dengan nilai kuncinya
		// 1 = 3 
		// 1, 3 , 4, 0, 2

		// melakukan pertukaran untuk bagian akhir condition
		a[i+1] = y;
	}
	
	for(i = 0; i < 9; i++){
		cout << a[i] << " ";
	}
	
}
