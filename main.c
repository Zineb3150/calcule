#include <stdio.h>
#include <stdlib.h>

int main()
{
 int A,B,c;
  char CD;
  do {

printf("entre un operation (+ - * / ou q pour quitter");
scanf("\n%c",&CD);
if (CD!='q'){
    printf("cree premier nombre!\n");
  scanf("%d",&A);
  printf("cree dexieme nombre!\n");
  scanf("%d",&B);



switch (CD){
        case '+' : c=A+B;printf("%d",c);
        break;
        case '-' : c=A*B; printf("%d",c);
            break;
        case '*':
            if(B!=0){
                c=A/B; printf("%d",c);
            }else {
            printf("entre nombre doit etre pas egal a 0\n,");
            }
             break;
        case '/' : c=A-B;printf ("%d",c);
                break;
        default: printf("l'operation n'est pas valide");
        break;}
}else{
    printf ("fin de programme");
    }
  }while (CD!='q');
}







