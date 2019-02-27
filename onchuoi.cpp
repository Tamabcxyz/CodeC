#include <stdio.h>
#include <conio.h>
#include <string.h>
int xuatmaascii(char a[]){
	for (int i=0; i<strlen(a); i++){
		printf ("%c co ma ascii la %d\n", a[i], a[i]);
	}
}
 int daochuoi(char a[]){	printf ("chuoi dao nguoc la: ");
 	for (int i=strlen(a)-1; i>=0; i--){
 		printf ("%c ",a[i]);
	 }
 }
kiemtrachuoidoixung(char a[]){
	int n=strlen(a)/2;
	for (int i=0; i<n; i++){
	if (a[i]!=a[strlen(a)-1-i]){	
		return 0;
	}
	}return 1;
}
// in ra ten: "Ngyen Van Minh" thanh "Minh"
int tachten(char a[]){
	for (int i=strlen(a)-1; i>=0; i--){
		if (a[i]==32){
			for (int j=i; j<strlen(a); j++){
				printf ("%c",a[j]);
			}  return 0;
		}
	}
}
int tachho(char a[]){
	for (int i=0; i<strlen(a); i++){
		if (a[i]==32){
			for (int j=0; j<i; j++){
				printf ("%c",a[j]);
			}		return 0;
		}
	}
}
int inlottenxuongdong(char a[]){
	for (int i=0; i<strlen(a); i++){
		if (a[i]==32){	printf ("\n");
			for (int j=i+1; j<strlen(a); j++){
				printf ("%c",a[j]);		
			}break;a[strlen(a)]='\0';
		}
		else if (a[i]!=32)
			printf ("%c",a[i]);
	}
}
int inholotxuongdong(char a[]){	
	for (int k=strlen(a); k>=0; k--){
		if (a[k]==32){
			for (int f=k; f<strlen(a); f++){
				printf ("%c", a[f]);
			}break;a[k]='\0';
		}
	}
	printf ("\n");
	for (int i=strlen(a); i>=0; i--){
		if(a[i]==32){
			for (int j=0; j<i; j++){
				printf ("%c", a[j]);
			}break;
		}	
	}
}
int xuongdonghet(char a[]){
	for (int i=0; i<strlen(a); i++){
		if (a[i]!=32){
			printf ("%c", a[i]);
		}else printf("\n");
	}
}	
void innguoc(char s[]){
	int l=strlen(s);
	for(int i=l-1;i>=0;i--){
		if(s[i]==' '){
			for(int j=i+1;j<strlen(s);j++){
				printf("%c",s[j]);
			}
			s[i]='\0';
			printf(" ");
		}
		if(i==0){
			for(int k=0;k<strlen(s);k++){
				printf("%c",s[k]);
			}
		}
	}
}
int main(){
	char a[100]; char *c; char *b;
	printf ("nhap vao chuoi a\n");
	gets(a);
//	xuatmaascii(a);
//	daochuoi(a);
//	if (kiemtrachuoidoixung(a)==1)
//	printf ("chuoi doi xung\n");
//	else printf ("chuoi ko doi xung\n");
//	tachten(a);		b=strdup(a);
//	tachho(a);		c=strdup(a);
//	inlottenxuongdong(a);
//	inholotxuongdong(a);
//	xuongdonghet(a);
	innguoc(a);
}

