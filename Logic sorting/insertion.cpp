# include <iostream>
using namespace std;

int main(){
	int a[6] = {2,8,5,3,9,4};
	int k,y,i;
	// k nya menjadi kunci
	for(k =1; k < 6; k++){
		
		y = a[k];
		
		// melakukan pergeseran
		for(i = k-1; i >=0 && y < a[i]; i--){
			a[i+1] = a[i];
			
		}
		
		// melakukan pertukaran untuk bagian akhir condition
		a[i+1] = y;

	}
	
	
	for(i = 0; i < 5; i++){
		cout << a[i] << " ";
	}
	
}

