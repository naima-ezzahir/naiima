 challege de tableau de modification


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int tab[7]={5,8,9,10,78,56,12};
    int i;
    for (i=0;i<7;i++){
       printf("%d\n",tab[i]);
       
    }
    printf("ltableau apr");
    tab[6]=99;
    for (i=0;i<7;i++){
       printf("%d\n",tab[i]);
       
    }
    return 0;
}


challege de copier un tableau dans un tableau



#include <stdio.h>

int main() {
 int oritab[9]={4,6,8,33,55,77,23,45,89};
  int copitab[9];
  int i;
   for (int i=0;i<9;i++){
       copitab[i]= oritab[i] ;
           }
  for (int i=0;i<9;i++){
      printf("%d \n",oritab[i]);
  }
 
  for (int i=0;i<9;i++){
      printf("%d\n",copitab[i]);
    
}
    return 0;
}

















challenge 1:

#include <stdio.h>
int somme( int a,int b){
    return a+b;
}
int main() {
    int x,y;
    printf("donner la valeur de x: ");
    scanf(" %d",&x);
     printf("donner la valeur de y: ");
    scanf(" %d",&y);
int result = somme(x,y);
printf("la somme est %d+%d=%d\n",x,y,result);
    return 0;
}

challenge 2:

#include <stdio.h>
int multiplication(int a,int b){
    return a*b;
}
int main() {
    int x;
    int y;
    printf(" donner une valeur: ");
    scanf("%d",&x);
     printf(" donner une valeur: ");
    scanf("%d",&y);
 int result = multiplication(x,y);
 printf("multiplication est %d*%d=%d\n",x,y,result);
    return 0;


    challenge 3:

    #include <stdio.h>
int Maximum(int a,int b){
 if(b<a){
     return a;
 }else{
     return b;
 }
}
int main() {
    int x;
    int y;
    printf(" donner une valeur: ");
    scanf("%d",&x);
     printf(" donner une valeur: ");
    scanf("%d",&y);
 int result =  Maximum(x,y);
 printf(" Maximum de %d et %d:%d\n",x,y,result);
    return 0;
}
 
 challenge 4:

 #include <stdio.h>
int Minimum(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
int main() {
    int x;
    int y;
    printf(" donner une valeur: ");
    scanf("%d",&x);
     printf(" donner une valeur: ");
    scanf("%d",&y);
 int result =  Minimum(x,y);
 printf(" Minimum de %d et %d:%d\n",x,y,result);
    return 0;
}

challenge 5:


#include <stdio.h>
int fact(int a){
    int f =1;
    for(int i = 1; i<=a; i++){
        f *=i;
    }
        return f;
   
    }
int main() {
 int n;
    printf(" donner une valeur: ");
    scanf("%d",&n);
     
 int result = fact(n);
 printf(" Factorielle de %d :%d\n",n,result);
    return 0;
    challenge 6:


    #include <stdio.h>
int fibonacci(int n){
    if(n==0){
        return 0;
        }
   else if (n==1) {
       return 1;
       }
else  return   fibonacci(n-1) + fibonacci(n-2);
}
int main() {
 int n;
    printf(" donner une valeur: ");
    scanf("%d",&n);
     
 int result =fibonacci(n);
 printf(" fibonacci de %d :%d\n",n,result);
    return 0;
}

challenge 7:


#include <stdio.h>
void inverce(char tab[],int indice ){
    for (int i=indice-1;i>=0;i--){
        printf(" %c",tab[i]);
        
    }
}
int main() {
   char tab1[233];
   printf("donner tun caracter: ");
   scanf("%s",&tab1);
   int n=0;
   while(tab1[n]!='\0'){
      n++;
   }
   printf(" inverce est: ");
   inverce(tab1,n);
   
   

    return 0;
}

























challenge 8:


#include <stdio.h>
int Parite(int n){
    if (n%2==0){
        return 1;
    }else {
        return 0;
    }
}
int main() {
 int n;
    printf(" donner une valeur: ");
    scanf("%d",&n);
     
 int result =Parite(n);
 printf(" Parite de %d :%d\n",n,result);
    return 0;
}





