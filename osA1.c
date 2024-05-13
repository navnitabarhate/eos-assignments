#include<unistd.h>
#include<stdio.h>
#include<sys/wait.h>

int main()  {
    int ret, i, s;
    for(i=0; i<5; i++) {
      ret = fork();
      if(ret == 0) {
              for(i=1; i<=5; i++)  {
                      printf("count: %d\n", i); 
                      printf("child: pid=%d\n", getpid());
                      sleep(5);
               }
               _exit(1);
       }
       
   }

               for(i=0; i<=5; i++) {
                   waitpid(-1, &s, 0);
                   printf("child exit: %d\n", WEXITSTATUS(s));
                }
                return 0;
}
                      
      
