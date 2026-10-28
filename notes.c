#include <stdio.h>

int main(){
 float note1,note2,note3,moyenne;
 char nom[50];

 printf("===PySchool Kairouan-Gestion Notes===\n");

 printf("Ekteb esmek");
 scanf("%s",nom);

 printf("Note1:");
 scanf("%f",&note1);

 printf("Note2:");
 scanf("%f",&note2);

 printf("Note3:");
 scanf("%f",&note3);

 moyenne=(note1+note2+note3)/3;

 printf("\n---Natija---\n");
 printf("Tilmidh: %s\n",nom);
 printf("Moyenne mte3ek: %s\n",moyenne);

 if(moyenne>=10){
    printf("MABROUK! Najeh!\n");
 }else{
    printf("le,5sara.7awel mara o5ra!\n");
 }
 return 0;
 }
