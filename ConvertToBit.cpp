#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int chuyendoi(char s[]){
	int l=strlen(s);
	int x=0;
	if(l==1){	
		if((int)s[0]>=65&&(int)s[0]<=90||(int)s[0]>=97&&(int)s[0]<=122){
			x=(int)s[0];	
		}
		else{
			x=s[0]-'0';
		}
	}
	else{
		if(s[0]=='-'){	
			for(int i=1;i<l;i++){
				x=x*10+s[i]-'0';
			}
			return -x;
		}
		else{
			for(int i=0;i<l;i++){
				x=x*10+s[i]-'0';
			}
		}		
	}
	return x;
}
char kytu(int a){
	switch(a){
		case 1:{
			return '1';
			break;
		}
		case 2:{
			return '2';
			break;
		}
		case 3:{
			return '3';
			break;
		}
		case 4:{
			return '4';
			break;
		}
		case 5:{
			return '5';
			break;
		}
		case 6:{
			return '6';
			break;
		}
		case 7:{
			return '7';
			break;
		}
		case 8:{
			return '8';
			break;
		}
		case 9:{
			return '9';
			break;
		}
		case 10:{
			return 'A';
			break;
		}
		case 11:{
			return 'B';
			break;
		}
		case 12:{
			return 'C';
			break;
		}
		case 13:{
			return 'D';
			break;
		}
		case 14:{
			return 'E';
			break;
		}
		case 15:{
			return 'F';
			break;
		}
		case 0:{
			return '0';
			break;
		}
	}
}
char *bit(long a,int ma,int byte){
	char temp[9]="00000000";
	char temp1[2]=" ";
	char *s;	
	s=(char *)malloc(byte*8+byte);
	s[0]='\0';
	for(int i=0;i<byte;i++){
		strcat(s,temp);
		if(strlen(s)==(byte*8+byte-1)){
			break;
		}
		strcat(s,temp1);
	}
	for(int i=byte*8+(byte-2);i>0;i--){
		if(a<0){
			a=-a;
			s[0]='1';
		}
		if(s[i]==' '){
			i--;
		}
		s[i]=kytu(a%ma);
		a/=ma;
		if(a==0){
			break;
		}
	}
	s[byte*8+byte-1]='\0';
	char *b;
	b=strdup(s);
	return b;
}
int main(){
	char s[8];
	int b;
	long x;
	printf("Nhap so hoac ki tu can tra: ");
	gets(s);	
	x=chuyendoi(s);
	printf("Nhap so byte can in: ");
	scanf("%d",&b);
	printf("\nNhi phan %d bit:      [%s]",8*b,bit(x,2,b));
	printf("\nBat phan %d bit:      [%s]",8*b,bit(x,8,b));
	printf("\nThap luc phan %d bit: [%s]",8*b,bit(x,16,b));
	return 0;
}
