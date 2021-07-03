# include <iostream>
using namespace std;
int main(){
   int b[5] = {10,1,23,4,9};
   // deklarasi
   int temp;
   int swap;
   // algoritma
   for(int i=0; i < 5; i++){

        temp = i;
        swap = b[i];
      	// check nilai terkecil di urutan berikutnya
   		for(int j= i+1; j<5; j++){
        	if(b[j] < b[temp]){
      			temp = j;
        	}

      	}
    // pertukaran
        b[i] = b[temp];
        b[temp] = swap;

   }
   
   // cetak array 
   for(int k=0; k<5; k++){
   	if(k == 4){
		cout << b[k];
      }else{
      	cout << b[k] << ", ";
      }


   }

}
