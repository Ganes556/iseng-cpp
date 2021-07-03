#include "iostream"
#include "conio.h"
using namespace std;

struct Node {
  int item;          //variabel item
   Node *kiri;      //pointer ke subtree kiri
   Node *kanan;     //pointer ke subtree kanan
  };

void tambah(Node **akar,int itembaru)   //berisi pointer yang menunjuk ke pointer akar itu sendiri
  {
   if((*akar) == NULL)            //jika akar kosong maka membuat item baru      
   {
     Node *baru;                        //pointer baru
     baru = new Node;                   //new node = alamat baru
     baru->item = itembaru;   //baru di tunjuk oleh pointer item & di isi dengan item baru
     baru->kiri = NULL;       //baru ditunjuk dengan pointer kiri ,dan jika masihh kosong
     baru->kanan = NULL;  //baru ditunjuk dengan pointer kanan & jika kosong
     (*akar) = baru;         //pointer akar = variabel baru dengan alamat baru
     (*akar)->kiri = NULL;         
     (*akar)->kanan = NULL;        
     cout<<"Item bertambah!";
   }
   else if(itembaru < (*akar)->item)   tambah(&(*akar)->kiri,itembaru);       
// jika item yang ditambah di kiri 

   else if(itembaru > (*akar)->item)   tambah(&(*akar)->kanan,itembaru);       //jika item yang ditambah item ke kanan

   else if(itembaru == (*akar)->item) //jika item yang di input sama dengan item yang ditambah sebelumnya
     cout<<"Item sudah ada!";
  }

void tampil(Node *akar)     //fungsi menampilkan seluruh item yang telah di imput
  {
	   if(akar != NULL){
	   cout<<akar->item<<" ";      
	   tampil(akar->kiri),   //rekursif dengan fungsi tampil dengan mengarah ke kanan
	   tampil(akar->kanan);  //rekursif dengan fungsi tampil dengan mengarah ke kanan
	  }
  }
 
void preOrder(Node *akar)       //fungsi cetak preOrder
  {
	   if(akar != NULL){
	   cout<< akar->item<<"  ";         //cetak item akar
	   preOrder(akar->kiri),            //cetak di subtree kiri
	   preOrder(akar->kanan);           //cetak di subtree kanan
	  }
  }

void inOrder(Node *akar)        //fungsi cetak inOrder
  {
	   if(akar != NULL){
	   inOrder(akar->kiri),         //cetak di subtree kiri
	   cout<< akar->item<<"  ";     //cetak item akar
	   inOrder(akar->kanan);        //cetak di subtree kanan
	  }
  }

void postOrder(Node *akar)      //fungsi cetak postOrder
  {
	   if(akar != NULL){
	   postOrder(akar->kiri),       //cetak di subtree kiri
	   postOrder(akar->kanan);      //cetak di subtree kanan
	   cout<< akar->item<<"  ";     //cetak item akar
	  }
  }

main()
{
  int item;
  Node *phn;      //pointer phn untuk menghubungkan dengan link Node
  phn = NULL;     //alamat pointer phn pada NULL
  char pil;

  do {
    system("cls");
    cout<<"\tTREE SORT\n";
    cout<<"1. Tambah\n";
    cout<<"2. Pre-order\n";
    cout<<"3. In-order\n";
    cout<<"4. Post-order\n";
    cout<<"5. Keluar\n";
    cout<<"Silahkan masukkan pilihan anda (1-5)...  ";
    pil=getche();
        if(pil=='1')
        {
          cout<<"\n";
          cout<<"\nItem baru : ";cin>>item;
          tambah(&phn,item);    //fungsi tambah dengan menggunakan alamat pointer phn dengan variabel
        }

if(pil=='2')
        {
        if(phn!=NULL) {       //jika phn tidak kosong
          cout<< "\n-->Item yang masuk : ";tampil (phn);  //cetak item yang masuk
          cout<<"\n-->preOrde  : ";preOrder(phn); //cetak preOrder
          }
        else cout<<"\n-->Masih kosong!";
          getch();
        }

if(pil=='3')
        {
        if(phn!=NULL) {
          cout<< "\n-->Item yang masuk : ";tampil(phn);   //cetak item yang masuk
          cout<<"\n-->inOrder  : ";inOrder (phn); //cetak item inOrder
          }
        else cout<<"\n-->Masih kosong!";
          getch();
        }

if(pil=='4')
        {
        if(phn!=NULL) {
        cout<< "\n-->Item yang masuk : ";tampil (phn);    //cetak item yang masuk
        cout<<"\n-->postOrder  : ";postOrder(phn);        //cetak item postOrder
          }
        else cout<<"\n-->Masih kosong!";
          getch();
        }
        }
          while(pil!='5');
            cout<<"\n";
}


