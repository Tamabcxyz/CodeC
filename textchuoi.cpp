#include <stdio.h>
#include <conio.h>
#include <string.h>
int xoakitu(char s[], int vitrixoa){
	for (int i=vitrixoa; i<strlen(s); i++){
		s[i]=s[i+1];
	}
}
int xoatrungnhau(char s[]){
	for (int i=0; i<strlen(s); i++){
		for (int j=i+1; j<strlen(s); j++){
			if (s[i]==s[j]){
				xoakitu(s,j);		j--;
			}
		}
	}printf ("%s", s);
}
int dem(char *s, char x){	int dem=0;
	for (int i=0; i<strlen(s); i++){
		if (s[i]==x){
			dem++;
		}
	}return dem;
}
int main()
{
char s[100];	
gets(s);	char *c; 
c=strdup(s);
///*
//c=(char *)malloc(strlen(s));
///strcpy(c,s);
//*/
xoatrungnhau(s); 
char *d;	
d=strdup(s);
printf ("\n");
for (int i=0; i<strlen(d); i++){
	printf (" %c co %d ki tu tai vi tri: ", d[i], dem(c,d[i]));{
	for (int j=0; j<strlen(c); j++){
		if (d[i]==c[j]){
			printf ("%d\t", j);
		}
	}printf ("\n");
	}
}
}
