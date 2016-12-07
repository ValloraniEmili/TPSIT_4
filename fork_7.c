#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
        /*varibili*/
        pid_t pid;
        int i,n;
        do{
        printf("inserire un numero da 1 a 5\n ");
        scanf("%d",&n);
        }while((n<1)||(n>5));
        printf("io sono il processo padre: %d\n",getpid());
        for(i=0;i<n;i++){
                pid=fork();
        if(pid==0){
        sleep(2);
        printf("il figlio ha pid %d,il padre %d\n",getpid(),getppid());
        }

        }
}

