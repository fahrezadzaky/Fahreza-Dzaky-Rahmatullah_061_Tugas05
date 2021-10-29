#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,m,n, matriks [10][10], tranpose[10][10];
	
	cout<<"------------------------"<<endl;
	cout<<"PROGRAM TRANPOSE MATRIKS"<<endl;
	cout<<"------------------------"<<endl;
	
	cout<<"Jumlah baris matriks";
	cin>>m;
	cout<<"Jumlah kolom matrks";
	cin>>n;
	
	cout<<"Memasukkan elemen matriks\n";
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			cin>>matriks[i][j];
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			tranpose[j][i]=matriks[i][j];
		}
	}
	cout<<"Hasil Tranpose Matriks\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<tranpose[i][j]<<"\t";
		}
		cout<<endl;
	}
	getch();
	return 0;
}
