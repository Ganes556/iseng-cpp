# include <iostream>
using namespace std;

int pangkat(int a, int b){
	
	if(b <= 0){
		return 1;
	}
	return a * pangkat(a,b-1);
}

int main(){
	int a;
	int b;
	cout << "nilai >> ";
	cin >> a;
	cout << "pangkat >>";
	cin >> b;
	cout << pangkat(a,b);
}
