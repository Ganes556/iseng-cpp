# include <iostream>
# include <conio>

int fibonacci(int a){
	if(a <= 1){
		return a;
	}
	
	return fibonacci(a-2) + fibonacci(a-1);
}

int main(){
	int a;
	cout << "Fibonacci ke-";
	cin >> a;
	cout << fibonacci(a);
	getch();
}
