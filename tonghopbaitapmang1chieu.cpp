#include <stdio.h>
#include <conio.h>
#include <math.h>
// nhap mang a voi n phan tu
int nhapmang(int a[], int n){
	for (int i=0; i<n; i++){
		printf ("A[%d]  ", i);
		scanf ("%d", &a[i]);
	}
}
// in mang ra
int inmang(int a[], int n){
	for (int i=0; i<n; i++){
		printf ("%d\t", a[i]);
	}
}
int maxmang(int a[], int n){
	int max=a[0];
	for (int i=0; i<n; i++){
		if (a[i]>max){
			max=a[i];
		}
	}	printf ("max cua mang la %d", max);
}
int minmang(int a[], int n){
	int min=a[0];
	for (int i=0; i<n; i++){
		if (a[i]<min){
			min=a[i];
		}
	}printf ("min cua mang la %d", min);
}
int tongmang(int a[], int n){ 
	int tong=0;
	for (int i=0; i<n; i++){
		tong=tong+a[i];
	}printf ("tong cua cac phan tu mang la %d", tong);
}
// chen phan tu vao mang 
int chenphantumang(int a[], int &n, int vitricanchen, int socanchen){
	for (int i=n; i>vitricanchen; i--){
		a[i]=a[i-1]; 
	}
		a[vitricanchen]=socanchen;
		n++;
}
int xoaphantumang(int a[], int &n, int vitricanxoa){
	for (int i=vitricanxoa; i<n; i++){
		a[i]=a[i+1];
	}n--;
}
int sapxepmangtang(int a[], int n){
	int temp;
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
	for (int i=2; i<=sqrt(so); i++){
		if (so%i==0)
		dem++;
	}
	if (dem==1){
		return 1;
	} return 0;
		
}
int xuatsonguyentotrongmang(int a[], int n){
	for (int i=0; i<n; i++){
		if (kiemtranguyento(a[i])==1)
		printf ("%d\t", a[i]);	
	}
}
// xuat ra vi tri co noi dung x trong mang
int timkiem(int a[], int n, int x){
	for (int i=0; i<n; i++){
		if (a[i]==x){
			printf (" vi tri trung la vi tri thu %d\n",i);
		}
	}
}
int xacdinhcobaonhieusotrung(int a[], int n, int x){
	int dem=0;
	for (int i=0; i<n; i++){
		if (a[i]==x){
			dem++;
		}
	}printf ("co %d vit tri trung nhau", dem);
}
int kiemtrasole(int a[], int n){
	int dem=0;
	for (int i=0; i<n; i++){
		if (a[i]%2!=0){
			dem++;
			printf ("%d\t", a[i]);
		}
	}	printf ("co %d so le", dem);
}
int kiemtrasochan(int a[], int n){
	int dem=0;
	for (int i=0; i<n; i++){
		if (a[i]%2==0){
			dem++;
			printf ("%d\t", a[i]);
		}
	}	printf ("co %d so chan", dem);
}
int daomang(int a[], int n){
	for (int i=n-1; i>=0; i--){
		printf ("%d\t", a[i]);
	}
}
int xoatrungnhau(int a[], int &n){
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (a[j]==a[i]){
				xoaphantumang(a,n,j);
				j--;
			}
		}
	}
}
// tim dem xem so luong phan tu xuat hien
int tim(int a[],int x,int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]==x)
		dem++;
	}printf("\nco %d so %d",dem,x);
}
//dem so lan xuat hien cua tung phan tu
int kt(int a[],int &n){
	int dem=0;
	for(int i=0;i<n;i++){
	tim(a,a[i],n);
	}
}
int main()
{
	int a[50];	int n,i;
	printf ("nhap vao n phan tu mang\n");	scanf ("%d", &n);
	nhapmang(a,n);
	//printf ("mang vua nhap la\n");
	//inmang(a,n); 	printf ("\n");
	//maxmang(a,n);	printf ("\n");
	//minmang(a,n);	printf ("\n");
	//tongmang(a,n);	printf ("\n");
	//chenphantumang(a,n,2,3); printf ("mang sau khi chen:\n");	inmang(a,n);
	//xoaphantumang(a,n,2); inmang(a,n);
	//sapxepmangtang(a,n); inmang(a,n);
	//printf ("so nguyen to trong mang la \n");
	//xuatsonguyentotrongmang(a,n);
	//timkiem(a,n,2);
	//xacdinhcobaonhieusotrung(a,n,2);
	//kiemtrasole(a,n);	printf ("\n");
	//kiemtrasochan(a,n);	printf ("\n");
	//daomang(a,n);
	//xoatrungnhau(a,n);	inmang(a,n);
	//kt(a,n);
}
