#include <stdio.h>
#include <conio.h>
int main(){
	/*int n; int du; int nhiphan[20], k,i;
	printf ("nhap vao so nguyen n=  "); scanf ("%d", &n);
	do{
		du=n%2;
		nhiphan[k]=du;
		k++;
		n=n/2;
	}while (n>0);
	printf ("dang nhi phan la");
	for (i=k-1; i>=0; i--){
		printf ("%d", nhiphan[i]);
	}*/
	int nhiphan[20]; int n,t,k;
	printf ("nhap vao so n\n");
	scanf ("%d",&n);
	for (; n>0; ){
		int t=n%2;
		nhiphan[k]=t;
		k++;
		n=n/2;
	}
	printf ("dang nhi phan la");
	for (int i=k-1; i>=0; i--){
		printf (" %d", nhiphan[i]);
	}
}
