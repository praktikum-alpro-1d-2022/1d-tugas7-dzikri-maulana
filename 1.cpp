//Dzikri Maulana
//1D
//2210631170117
#include <iostream>
using namespace std;

void Matriks1 ();
void Matriks2 ();
void cetakmatriks1 ();
void cetakmatriks2 ();
void milih();
void wrginpt ();
void penambahan ();
void perkalian ();
void pemilihan_transpose ();
void transpose1 ();


float a[10][10];
float b[10][10];
int hasiltambah[10][10];
int hasilkurang[10][10];
int hasilkali[10][10];
int transpose[10][10];
int baris, kolom;
int baris1, kolom1;
int baris2, kolom2;
int i, j, k;
int pilihan;
int pilihantranspose;
int jumlah;

int main ()
{
    char lagi;
    do{
Matriks1 ();
cetakmatriks1 ();
Matriks2 ();
cetakmatriks1 ();
cetakmatriks2 ();
milih();
wrginpt ();
penambahan ();
perkalian ();
pemilihan_transpose ();
transpose1 ();
cout<<"ulangi program? (y/t): ";
cin>>lagi;
    }while(lagi!='t');
}

//simpan matriks
  void Matriks1 ()
{
cout << "INPUT MATRIKS" << endl;
cout << "Masukan ordo Matriks A dan B (kolom dan baris sama) : ";
  cin >> baris1;
  kolom1=baris1;
cout<<"Matriks berorodo "<<baris1<<"x"<<baris1<<endl;
cout<<"dengan jumlah elemen maasing masing matriks berjumlah "<<baris1*baris1<<endl;
cout << "Masukan Elemen Matriks : " << endl;
for (int i = 0; i < baris1; ++i)
    {
for (int j = 0; j < kolom1; ++j)
	{
cout << "Masukan Elemen A " << "[" << i + 1 << "," << j +
	    1 << "] : ";
	  cin >> a[i][j];
}
}
}

void Matriks2 ()
{

cout << endl;
baris2=baris1;
kolom2=kolom1;
cout << "Masukan Elemen Matriks : " << endl;
for (int i = 0; i < baris2; ++i)
    {
for (int j = 0; j < kolom2; ++j)
	{
cout << "Masukan Elemen B" << "[" << i + 1 << "," << j +
	    1 << "] : ";
	  cin >> b[i][j];
}
}
}

//print matriks
  void
cetakmatriks1 ()
{
cout << endl;
cout << "Matriks A" << endl;
for (int i = 0; i < baris1; ++i)
    {
for (int j = 0; j < kolom1; ++j)
	{
cout << " " << a[i][j];
if (j == kolom1 - 1)
cout << endl;
}
}
}

void cetakmatriks2 ()
{
cout << endl;
cout << "Matriks B" << endl;
for (int i = 0; i < baris2; ++i)
    {

for (int j = 0; j < kolom2; ++j)
	{

cout << " " << b[i][j];
if (j == kolom2 - 1)
cout << endl;
}
}
}
//pilih
void milih(){
if(baris1 != kolom2 && baris1 != kolom1 && baris2 != kolom1 && baris2 != kolom2){
    cout<<"Ordo Tidak Sesuai, Ulangi!"<<endl;
}
else{
    cout<<endl;
    cout<<"PILIH OPERASI MATRIKS"<<endl;
    cout<<"1. PENJUMLAHAN"<<endl;
    cout<<"2. PERKALIAN"<<endl;
    cout<<"3. TRANSPOSE"<<endl;
    cout<<"Pilih : ";cin>>pilihan;
}
}

//pemilihan Melebihi
  void
wrginpt ()
{

if (pilihan > 6)
    {

cout << "Input salah silahkan ulangi!";

}

}


//penambahan
  void
penambahan ()
{

if (pilihan == 1)
    {

cout << "" << endl;

cout << "Hasil Penambahan :" << endl;

baris = baris1;
      baris2;

kolom = kolom1;
      kolom2;

for (int i = 0; i < baris; i++)
	{

for (int j = 0; j < kolom; j++)
	    {

hasiltambah[i][j] = a[i][j] + b[i][j];

cout << hasiltambah[i][j] << " ";

}
cout << endl;

}
}
}

//perkalian
  void
perkalian ()
{
if (pilihan == 2&& baris1 == kolom2)
    {
for (i = 0; i < baris1; i++)
	{
for (j = 0; j < kolom2; j++)
	    {
for (k = 0; k < baris2; k++)
		{
jumlah = jumlah + a[i][k] * b[k][j];
}

hasilkali[i][j] = jumlah;

jumlah = 0;

}

}

cout << "Hasil perkalian matriks AxB: \n";

for (i = 0; i < baris1; i++)
	{

for (j = 0; j < kolom1; j++)
	    {

cout << hasilkali[i][j] << " ";

}

cout << endl;

}

}else if(pilihan == 2&& baris1 != kolom2){
cout<<"tidak bisa dikali"<<endl;}
}




//milih transpose
  void
pemilihan_transpose ()
{

if (pilihan == 3)
    {

cout << "Pilih Matriks Yang Ingin di Transposekan!" << endl;

cout << "1. MATRIKS A" << endl;

cout << "2. MATRIKS B" << endl;

cout << "Pilih : ";
      cin >> pilihantranspose;

cout << "Pilihan : ";

}

}



//transpose
  void
transpose1 ()
{

if (pilihantranspose == 1)
    {


	//proses transpose matriks
	for (int i = 0; i < baris1; ++i)

for (int j = 0; j < kolom1; ++j)
	  {

transpose[j][i] = a[i][j];

}

	//mengeluarkan transpose matriks
	cout << "Hasil Transpose Matriks A Adalah : " << endl;

for (int i = 0; i < baris1; ++i)
	{

for (int j = 0; j < kolom1; ++j)
	    {

cout << " " << transpose[i][j];

if (j == baris1 - 1)

cout << endl;

}

}


}

  else if (pilihantranspose == 2)
    {


	//proses transpose matriks
	for (int i = 0; i < baris2; ++i)

for (int j = 0; j < kolom2; ++j)
	  {

transpose[j][i] = b[i][j];

}

	//mengeluarkan transpose matriks
	cout << "Hasil Transpose Matriks B Adalah : " << endl;

for (int i = 0; i < baris2; ++i)
	{

for (int j = 0; j < kolom2; ++j)
	    {

cout << " " << transpose[i][j];

if (j == baris2 - 1)

cout << endl;

}

}


}

  else if (pilihantranspose > 2)
    {

cout << "Input Salah, Silahkan Ulangi!" << endl;

}


}
