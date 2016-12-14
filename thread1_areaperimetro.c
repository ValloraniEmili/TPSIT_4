#include<pthread.h>
#include<stdio.h>
int b,h;
int a,p;
void *area(void *arg){
               a=b*h;
               printf("L'area e': %d\n",a);
}

void *perimetro(void *arg){
             p=(b+h)*2;
             printf("Il perimetro e': %d\n",p);
}

int main(void){
pthread_t tid1;
pthread_t tid2;

 printf("\nInserisci base\n");
 scanf("%d",&b);
 printf("\nInserisci altezza\n");
 scanf("%d",&h);
 void *area(void *arg);
 void *perimetro(void *arg);
 pthread_create(&tid1,NULL,&area,NULL);
 pthread_create(&tid2,NULL,&perimetro,NULL);
 sleep(5);
 return 0;
}
