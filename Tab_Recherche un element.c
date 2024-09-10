#include <stdio.h>

int main() {
 int T[]={3,4,5,6,7,8};
 int R,C=0;
 printf("entrez l'element a rechercher:");
 scanf("%d",&R);
 for (int i=0;i<6;i++){
     if (R==T[i]){

     printf("l'element est se trouve sur le tableau.");
     C++;
 }
 }
  if(C==0)
 printf("l'element ne se trouve pas sur le tableau.");
    return 0;
}