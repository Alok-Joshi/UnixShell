#include <stdio.h>
#include <unistd.h>

int main(){

    while(1){
        
        char buffer[100];

        printf("\n>>> ");
        scanf("%s",&buffer);

        int pid = fork();
        if(pid > 0){
                
            
            wait();
        }
        if(pid == 0){
            
            execv(buffer,NULL);
        }
    }

    return 0;
}
        
