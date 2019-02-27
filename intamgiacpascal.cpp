#include <stdio.h>
#include <conio.h>
int main(){
int n, i,k, j, s, m1, m2 ;

    printf(" Nhap vao so hang cua tam giac: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=0; j<=i; ++j){
            if ((j==0) && ((i-j)==0)){ 
                printf("    1"); 
            } else{
                s=1;
                for(k=1; k<=i; k++){
                    s*=k;
                }
                m1=1;
                for(k=1; k<=j; k++){
                    m1*=k;
                }
                m2=1;
                for(k=1; k<=(i-j); k++){
                    m2*=k;
                }
            }  
            printf("%5d", s/(m1*m2)); 
        }                
        printf("\n");
    }
    getch();
}
