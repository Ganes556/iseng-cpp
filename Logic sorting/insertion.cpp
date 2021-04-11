# include <iostream>
using namespace std;

int main(){
	int a[5] = {3,1,4,0,2};
	int k,y,i;
	// k nya menjadi kunci
	for(k =1; k < 5; k++){
		
		y = a[k];
		
		// melakukan pergeseran
		for(i = k-1; i >=0 && y < a[i]; i--){
			a[i+1] = a[i];
			
		}
		
		// melakukan pertukaran untuk bagian akhir condition
		a[i+1] = y;

	}
	
	
	for(i = 0; i < 5; i++){
		cout << a[i] << endl;
	}
	
}
