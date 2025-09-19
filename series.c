#include <stdio.h>
long double sumn, sumn2, Esumn, Esumn2, Ssum, Ssum2;
unsigned int n, i, s, p;

void serie1() {
	printf("A seleccionado serie 1/n \n");
	printf("Valor de n deseado: ");
        scanf("%d", &n);
        printf("Serie 1/n de 1 hasta %d:\n",n);
                
        for(i=1; i<=n;i++){
        sumn=1.0/(long double)i ;
        Esumn= sumn + Ssum;
	Ssum=Esumn;
                	}
        printf("Sum 1/n =%.18Lf\n",Esumn);
        printf("Serie divergente \n");
	printf(".-.-.-.-.-.-.-.-.-.-.-\n");
                }
void serie2(){
	printf("A seleccionado serie 1/n^2 \n");
	printf("Valor de n deseado: ");
        scanf("%d", &n);
        printf("Serie 1/n^2 de 1 hasta %d:\n",n);
                
        for(i=1; i<=n;i++){
        sumn2=1.0/((long double)i*(long double)i) ;
        Esumn2= sumn2 +Ssum2;
        Ssum2=Esumn2;
		 	}
        printf("Sum 1/n^2 =%.18Lf\n",Esumn2);
	printf("Serie Convergente \n");
	printf(".-.-.-.-.-.-.-.-.-.-.-\n");
                 }

int main(){
        do{
	printf("Programa de series \n");
	printf("1. Serie 1/n \n");
	printf("2. Serie 1/n^2 \n");
	printf("3. Salida del programa \n");
	printf("Seleccione una opción: ");
	scanf("%d", &s);
        p=1;
        sumn=0;
        sumn2=0;
        Esumn=0;
        Esumn2=0;
	Ssum=0;
	Ssum2=0;
	switch (s){
	case 1: serie1(); break;

	case 2: serie2(); break;

	case 3: printf("A seleccionado salida del programa \n"); p=0; break;
		}
	}while(p);
	return 0;
	}
