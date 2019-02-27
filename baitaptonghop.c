#include <stdio.h>
#include <conio.h>
#include <string.h>
//cong ma ascii cua chuoi
//int main(){
//	char a[20];	int tong=0; int M=15; int k,i;
//	printf ("nhap vao chuoi chu hoa\n");
//	gets(a);
//	for (i=0; i<strlen(a); i++){
//		printf ("%d\n", a[i]);
//		tong=tong+a[i];	
//	}printf ("%d\n", tong);
//	k=tong/15;
//	printf ("%d",k);
//}
// in day bit nhe
/*int main(){
	int a[20]; int k,n;
	printf ("nhap vao so nguyen can chuyen\n");
	scanf ("%d",&n);
	for (; n>0; ){
		int t=n%2;
		a[k]=t;
		k++;
		n=n/2;
	}printf ("dang nhi phan la\n");
	for (int i=k-1; i>=0; i--){
		printf ("%d",a[i]);
}	}*/
/*int main(){
	int n; int dem=0;
printf ("nhap vao so nguyen can tim bit 0\n");
scanf ("%d",&n);
for (; n>0; ){
	int t=n%2;
	if (t==1){
		dem++;
	}
	n=n/2;
}printf ("%d",dem);	
}*/
// on mang
/*void nhapmang(int a[], int n){
	for (int i=0; i<n; i++){
		printf ("A[%d]  ",i+1);
		scanf ("%d",&a[i]);
	}
}
void inmang(int a[], int n){
	for (int i=0; i<n; i++){
		printf ("%d\t",a[i]);
	}
}
void maxmang(int a[], int n){
	int max; a[0]=max;
	for (int i=0; i<n; i++){
		if (a[i]>max){
			max=a[i];
		}
	}printf ("max cua mang la %d",max);
}
void minmang(int a[], int n){
	int min;	min=a[0];
	for (int i=0; i<n; i++){
		if (a[i]<min){
			min=a[i];
		}	
	}printf ("min cua mang la %d",min);
}
void tongmang(int a[], int n){
	int tong=0;
	for (int i=0; i<n; i++){
		tong=tong+a[i];
	}printf ("tong mang la %d", tong);
}
void chenphantumang(int a[], int &n, int vitricanchen, int socanchen){
	for (int i=n; i>vitricanchen; i--){
		a[i]=a[i-1]; 
	}a[vitricanchen]=socanchen;
	n++;
}
void xoaphantumang(int a[], int &n, int vitrixoa){
	for (int i=vitrixoa; i<n; i++){
		a[i]=a[i+1];
	}n--;
}
void sapxepmang(int a[], int n){
	int temp; printf ("mang tang la\n");
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int kiemtranguyento(int so){
	int dem=0;
	for (int i=2; i<=so; i++){
		if (so%i==0){
			dem++;
		}
	}
	if (dem==1){
		return 0;
	}
		return 1;
}
void xuatsonguyento(int a[], int n){
	printf ("so nguyen to co trong mang la \n");
	for (int i=0; i<n; i++){
		if (kiemtranguyento(a[i])==0){
			printf ("%d\t",a[i]);
		}
	}
}
void timkiem(int a[], int n, int x){
	for (int i=0; i<n; i++){
		if (a[i]==x){
			printf ("%d co trong mang\n",a[i]);
			printf ("vi tri cua %d la vi tri thu %d\n",a[i],i);
		}
	}
}
void xoaphantutrungnhau(int a[], int &n){
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[i]==a[j]){
				xoaphantumang(a,n,j);
				j--;
			}
		}
	}
}
int main(){
	int a[100]; int n;
	printf ("nhap vao so luong phan tu mang\n");
	scanf ("%d", &n);
	nhapmang(a,n);
	inmang(a,n);	printf ("\n");
	//maxmang(a,n);
	//minmang(a,n);
	//tongmang(a,n);
	//chenphantumang(a,n,2,3); inmang(a,n);
	//xoaphantumang(a,n,2); inmang(a,n);
	//sapxepmang(a,n);	inmang(a,n);
	//xuatsonguyento(a,n); 
	//timkiem(a,n,2);
	xoaphantutrungnhau(a,n); inmang(a,n);
}*/
// on chuoi
/*void xuatmaascii(char a[]){
	for (int i=0; i<strlen(a); i++){
		printf ("%c co ma ascii la %d\n",a[i],a[i]);
	}
}
void daochuoi(char a[]){
	for (int i=strlen(a)-1; i>=0; i--){
		printf ("%c",a[i]);
	}
}
int kiemtrachuoidoixung(char a[]){
	int n; n=strlen(a)/2;
	for (int i=0; i<n; i++){
		if (a[i]!=a[strlen(a)-1-i]){
			return 1;
		}
	}return 0;
}
int tachten(char a[]){
	for (int i=strlen(a); i>=0; i--){
		if (a[i]==32){
			for (int j=i+1; j<strlen(a); j++){
				printf ("%c",a[j]);
			}return 0;
			a[i]='\0';
		}
	}
}
int tachho(char a[]){
	for (int i=0; i<strlen(a); i++){
		if (a[i]!=32){
			printf ("%c",a[i]);
		}
		else a[i]='\0';
	}	
}
int inholottenxuongdong(char a[]){
	for (int i=0; i<strlen(a); i++){
		if (a[i]==32){	printf ("\n");
			for (int j=i+1; j<strlen(a); j++){
				printf ("%c",a[j]);
			}break;
		}
		else {
			printf ("%c",a[i]);
		
		}
	}
}
int intenxuongdongholot(char a[]){
	for (int i=strlen(a); i>=0; i--){
		if (a[i]==32){
			for (int j=i+1; j<strlen(a); j++){
				printf ("%c",a[j]);
			}break;
		}
	}printf ("\n");
	for (int i=strlen(a); i>=0; i--){
		if (a[i]==32){
			for (int k=0; k<i; k++){
				printf ("%c",a[k]);
			}break;
		}
	}
}
int xuongdonghet(char a[]){
	for (int i=0; i<strlen(a); i++){
		if (a[i]!=32){
			printf ("%c",a[i]);
		}
		else printf ("\n");
	}
}
void xoakitutrongchuoi(char a[], int vitrixoa){
	for (int i=vitrixoa; i<strlen(a); i++){
		a[i]=a[i+1];
	}//a[strlen(a)-1]='\0';
}
int xoakhoantrang(char a[]){
	for (int i=0; i<strlen(a); i++){
		if (a[i]!=32){
			printf ("%c",a[i]);
		}
	}
}
int themkitu(char a[], int vitricanthem, int kitucanthem){
	for (int i=strlen(a); i>vitricanthem; i--){
		a[i]=a[i-1];
	}a[vitricanthem]=kitucanthem;
	a[strlen(a)+1]='\0';
}
void xoakitutrung(char a[]){
	for (int i=0; i<strlen(a); i++){
		for (int j=i+1; j<strlen(a); j++){
			if (a[i]==a[j]){
				xoakitutrongchuoi(a,j);
				j--;
			}
		}
	}
}
int demkitu(char a[], char x){int dem=0;
	for (int i=0; i<strlen(a); i++){
		if (a[i]==x){
			dem++;
		}
	}return dem;
}

int main(){
	char a[100];
	printf ("nhap vao chuoi a\n");
	gets(a);
	//xuatmaascii(a);
	//daochuoi(a);
	/*if (kiemtrachuoidoixung(a)==1){
		printf ("chuoi khong doi xung\n");
	}
	else printf ("chuoi doi xung\n");*/
	//tachten(a);
	//tachho(a);
	//inholottenxuongdong(a);
	//intenxuongdongholot(a);
	//xuongdonghet(a);
	//xoakitutrongchuoi(a,2);	puts(a);
	//xoakhoantrang(a);
	//themkitu(a,2,'d'); themkitu(a,7,'n');themkitu(a,9,'a');puts(a);
	//xoakitutrung(a);puts(a);}*/
	//in chu so theo ma ascii
/*	int main(){
	char a[100];
	gets(a);
	puts(a);	
	for (int i=0; i<strlen(a); i++){
		for (int j=i+1; j<strlen(a); j++){
			if (a[i]>a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	puts(a);
		
	}*/
	/*int kiemtranguyento(int so){int dem=0;
		for (int i=2; i<=so; i++){
			if (so%i==0){
				dem++;
			}
		}
		if (dem==1){
			return 0;
		}
		else return 1;
	}
	
int main(){
	for (int i=; i<100; i++){
		if (kiemtranguyento(i)==0){
			printf("%d\t",i);
		}
	}
}*/
/*typedef struct{
	char tensv[30];
	char mssv[10];
	int namsinh;
	float diemtb;
	char diachi[30];
}sinhvien;
void nhapsinhvien(sinhvien sv[], int *n){
	printf ("nhap so luong sinh vien \n");
	scanf ("%d",&*n);
	int i;
	for (i=0; i<*n; i++){
		printf ("nhap ten sinh vien %d  ",i+1);
		fflush(stdin);
		gets(sv[i].tensv);
		printf ("ma so sv\n");
		gets(sv[i].mssv);
		printf ("nam sinh\n");fflush(stdin);
		scanf ("%d",&sv[i].namsinh);
		printf ("diem trung binh\n"); fflush(stdin);
		scanf ("%f",&sv[i].diemtb);fflush(stdin);
		printf ("dia chi\n");
		gets(sv[i].diachi);
	}
}
void xuatsinhvien(sinhvien sv[], int n){
	int i;
	printf ("%-20s%-15s%-15s%-15s%-20s\n","Ten sv","Ma sv","Nam sinh","Diem tb","Dia chi");
	for (int i=0; i<n; i++){
		printf ("%-20s%-15s%-15d%-15.1f%-20s\n",sv[i].tensv,sv[i].mssv, sv[i].namsinh,sv[i].diemtb,sv[i].diachi);
	}
}



int main(){
	sinhvien sv[100];
	int n;
	nhapsinhvien(sv,&n);
	xuatsinhvien(sv,n);
}*/
/*int kiemtraso(int so){
	int dem=0;
	while (so!=0){
	so=so/10;
	dem++;
	}
	printf ("so la %d",dem);
}
int main(){
	int n;
printf ("nhap vao so\n");
scanf ("%d",&n);
kiemtraso(n);
}*/
// tim uoc chung cua a và b
/* main()
{
        int a=12;
		int b=16;
		int c;
        for (int i=1; i<=a||i<=b; i++){
        	if (a%i==0&&b%i==0)
        	c=i;
		}printf ("%d",c);
}*/
//int main(){
//	int a=84,b=90,c;
//	/*while (a!=b){
//		if (a>b)
//		a=a-b;
//		else b=b-a;
//	}printf ("%d",a);*/
//	
//	c=(a*b)/6;printf ("boi chung nho nhat la %d \n",c);
//}
// tinh giai thua cua 1 so.
/*int tinhgiaithua(int a){
	if (a==0)
		return 1;
	else return a*tinhgiaithua(a-1);
}
int main(){
	int a;
	printf ("nhap vao so can tinh giai thua\n");
	scanf ("%d",&a);
	printf ("giai thua cua %d la %d",a,tinhgiaithua(a));
}*/
// day so fibonaci 1 2 3 5 8 13 21....
/*int main(){
	int n,a,b,c,i;
	a=1; 
	b=2; 
	printf ("can xuat ra bao nhieu so fibonaci\n");
	scanf ("%d",&n);
	printf ("%d\t",a);	printf ("%d\t",b);
	for (i=0; i<n-2; i++){
		c=a+b; printf ("%d",c);
		a=b;
		b=c;
		printf ("\t");
	}
}*/
// ve tam giac passcal ko de qui
//	int giaiThua(int n){
//		int tong=1;
//		if(n==0||n==1)return 1;
//		else{
//			int i;
//			for(i=2;i<=n;i++){
//				tong=tong*i;
//			}
//		}return tong;
//}
//	int veThap(){
//		printf("nhap vao so hang\n");
//		int n;
//		scanf("%d",&n);
//		int i,j=0;
//		for(i=0;i<n;i++){
//			for(j=0;j<=i;j++){
//				printf("%d ",giaiThua(i)/(giaiThua(j)*giaiThua(i-j)));
//			}printf("\n");
//		}
//	}
//	int main(){
//		
//		veThap();
//	}
// bai toan thap ha noi
//int chuyen(int n,char a,char b){
//	printf("chuyen tu cot %c sang cot %c\n",a,b);
//}
//int thapHaNoi(int n,char a,char b,char c){
//	if(n==1){
//		chuyen(1,a,c);
//	}
//	else{
//		thapHaNoi(n-1,a,c,b);
//		chuyen(n,a,c);
//		thapHaNoi(n-1,b,a,c);
//	}
//}
//
//int main(){
//	int n;
//	char a='A'; char b='B'; char c='C';
//	printf("nhap vao so luong dia\n");
//	scanf("%d",&n);
//	thapHaNoi(n,a,b,c);
//}








