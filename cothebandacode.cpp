#include <stdio.h>
#include <conio.h>
// de tao tam giac so pascal
//int giaithua(int a){
//	if(a==0||a==1)return 1;
//	else return a*giaithua(a-1);
//}
//void pascal(int a){
//	for(int i=0;i<a;i++){
//		for(int j=0;j<=i;j++){
//			printf("%d",giaithua(i)/(giaithua(j)*giaithua(i-j)));printf("  ");
//		}printf("\n");
//	}
//}
//int main(){
//	int a;
//	printf("nhap vao a\n");
//	scanf("%d",&a);
//	pascal(a);
//	
//}
// thap ha noi
//void chuyen(int so, char a, char b){
//printf("chuyen dia tu co %c sang cot %c\n",a,b);	
//}
//void thaphanoi(int so, char a, char b, char c){
//	if(so==1){
//		chuyen(1,a,c);
//	}else{
//		thaphanoi(so-1,a,c,b);
//		chuyen(so,a,c);
//		thaphanoi(so-1,b,a,c);
//	}
//}
//
//int main(){
//	int so;char a='A'; char b='B';char c='C';
//	printf("nhap so dia\n");
//	scanf("%d",&so);
//	thaphanoi(so,a,b,c);
//}
// in tam giac so doi xung
//int abs(int x){
//	if(x<0)return x=x*(-1);
//	else return x;
//}
//int main(){
//	for(int i=0;i<=6;i++){
//		for(int j=0;j<=2*6;j++){
//			int x=j-6;
//			x=abs(x);
//			int a=i-x;
//			if(a>0)printf(" %d ",a);
//			else printf("   ");
//		}
//		printf("\n");
//	}	
//}
// chen mang b vao 1 vi tri trong mang a

int main(){
		int n,m;
	int b[n];
	int a[m+n];
	printf("nhap so ptu cua mang b\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("ptu b[%d]= ",i);
		scanf("%d",&b[i]);
	}
	printf("nhap so ptu cua mang a\n");
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		printf("ptu a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		printf("%d ",a[i]);
	}
	printf("nhap vi tri can chen\n");
	int k;scanf("%d",&k);
	if(k>m){
		for(int i=0;i<n;i++){
			a[i+m]=b[i];
		}
	}
	else if(k<=0){
		for(int i=m+n-1;i>=n;i--)a[i]=a[i-n];
		for(int i=0;i<n;i++)a[i]=b[i];
	}
	else {
		for(int i=m+n-1;i>=n;i--)a[i]=a[i-n];
		for(int i=k;i<=k+n;i++)a[i]=b[i-k];
	}
	printf("mang sau khi chen la\n");
	for(int i=0;i<m+n;i++){
		printf("%d",a[i]);
	}
	
	
}
