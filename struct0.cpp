#include <stdio.h>
#include <conio.h>
typedef struct{
	char Tensv[20];
	char Msv[8];
	int Namsinh;
	float Diemtb;
	char Diachi[20];
}Sinhvien;
int Nhapsv(Sinhvien sv[], int *n){
	printf ("nhap vao so luong sinh vien  ");
	scanf ("%d",&*n);	int i;
	for ( i=0; i<*n;i++){
		printf ("nhap ten sv: %d\n",i+1);	fflush(stdin); gets(sv[i].Tensv);
		printf ("nhap ma sv:\n");	fflush(stdin);gets(sv[i].Msv);
		printf ("nam sinh:\n"); fflush(stdin); scanf ("%d",&sv[i].Namsinh);
		printf ("nhap diem trung binh:\n");	 scanf ("%f",&sv[i].Diemtb);
		printf ("nhap dia chi:\n"); fflush(stdin); gets(sv[i].Diachi);
	}}
int insv(Sinhvien sv[], int n){	
	int i;
	printf ("\t\t------DANH SACH LOP-----\n");
	printf ("\n%-20s%-20s%-20s%-10s%-10s%","Ho ten","Ma sv","Nam sinh","Diem tb","Dia chi");
		for (i=0; i<n; i++){
			printf ("\n%-20s%-20s%-20d%-10.1f%-10s",sv[i].Tensv,sv[i].Msv,sv[i].Namsinh,sv[i].Diemtb,sv[i].Diachi);
		}
}	


int main(){
	Sinhvien sv[100];
	int n;
	Nhapsv(sv,&n);
	insv(sv,n);
	
}
