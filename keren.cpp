# include <iostream>
using namespace std;

int main(){
	
	for(int i = 0; i < 5; i++){
		// setengah segitiga kebalik
		for(int j = i; j < 2; j++){
			cout<< "+";
		}
		
		for(int j = 3; j <= i; j++){
			cout<< "-";
		}
		for(int j = 0; j <= i; j++){
			cout << "*";
		}
//		// setengah segitiga  
//		for(int j = 0; j <= i; j++){
//			cout << "+";
//		}
//		
//		for(int j = 4; j >= i; j--){
//			cout <<"-";
//		}
		cout << endl;
	}
}
