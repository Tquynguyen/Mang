#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Hoan vi mot ma tran gom mang va cot */
int main(int argc, char** argv) {
	srand(time(NULL));
	int m,n;
	cout<<"Moi ban nhap so dong: ";
	cin>>n;
	cout<<"Moi ban nhap so cot: ";
	cin>>m;
	int M[n][m];
	for (int i=0;i<n;i++)
	{
	for (int j=0;j<m;j++)
	{
	M[i][j]=rand()%100;
	cout<<M[i][j]<<"\t";}
	cout<<endl;	
}
	
	int N[m][n];
	for (int i=0;i<n;i++)
	{
	for (int j=0;j<m;j++)
	{N[j][i]=M[i][j];}}
	cout<<"\n Mang sau khi hoan vi la: \n";
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
		cout<<N[i][j]<<"\t";
		}
		cout<<endl;	
	}
	return 0;
}
