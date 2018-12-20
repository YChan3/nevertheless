#include "pipe_networking.h"


static void sighandler(int signo){
  if (signo == SIGINT) {
    remove("WKP");
    exit(0);
  }
}

int main() {
  signal(SIGINT,sighandler);

  int to_client;
  int from_client;
  char input[BUFFER_SIZE];

  while(1){
    if(read(from_client, input, BUFFER_SIZE)){
      printf("your input was %ld characters.\n", strlen(input));
    }
    else{
      from_client = server_handshake( &to_client );
    }
  }
}
