#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

static void signhandler(int signo){
  if(signo == SIGINT) {
    printf("Exiting because of SIGINT");
    exit(0);
  } else if(signo == SIGUSR1){
    printf("PPID: %d\n", getppid());
  }
}
int main(){
  while(1){
    signal(SIGINT, signhandler);
    printf("%d \n", getpid());
    sleep(1);
  }
  return 0;
}
