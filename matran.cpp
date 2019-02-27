
#include<stdio.h>
#include <conio.h>
int nhapmatran(int a[][10], int m, int n){
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			printf ("so o dong %d cot %d la:", i+1,j+1);
			scanf ("%d",&a[i][j]);
		}
	}
}
int inmatran(int a[][10], int m, int n){
	for (int i=0; i<m; i++){
		printf ("\n");
		for (int j=0; j<n; j++){
			printf ("%d\t", a[i][j]);
			}
	}
}
int tong2matran(int a[][10], int b[][10], int c[][10], int m , int n){
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}

int main()
{
	int a[10][10];	int m,n;
	int b[10][10];
	int c[10][10];
	printf ("nhap vao so dong va so cot cua ma tran\n");
	scanf ("%d%d", &m, &n);
	printf ("nhap vao ma tran a\n");
	nhapmatran(a,m,n);
	inmatran(a,m,n);	printf ("\n");
	printf ("nhap vao ma tran b\n");
	nhapmatran(b,m,n);
	inmatran(b,m,n);	printf ("\n");
	tong2matran(a,b,c,m,n);
	printf ("ma tran tong la\n");
	inmatran(c,m,n);
}
