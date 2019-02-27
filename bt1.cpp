//vd1:tong cac so chi het cho 3 hoac 5 duoi 1000
#include <stdio.h>
#include <conio.h>
//int timso(int a){
//	if (a%3==0||a%5==0)
//		return a;
//	return 0;
//}
//int main(){
//	int tong=0;
//	for (int i=0; i<1000; i++){
//		tong=tong+timso(i);
//	}printf ("%d",tong);
//}
//vd2: tinh tong cac so fubonacci dui 4tr.
int fubonacci(int a[],int &n){
int n1=0,n2=1,n3;  
  
 
 printf("\n%d %d",n1,n2);  //in hai so 0 va 1  
  
 for(int i=2;i<n;++i)   //vong lap bat dau tu 2 boi vi 0 va 1 da duoc in 
 {  
  n3=n1+n2;  
  printf(" %d",n3);  
  n1=n2;  
  n2=n3;  
 }  	
}
int main(){
	int a[100]; int n;
	printf ("nhap vao n  ");
	scanf ("%d",&n);
	fubonacci(a,n);
}
 
