#include "pipe_networking.h"


int main() {

  int to_client;
  int from_client;
  char input[BUFFER_SIZE];

  from_client = server_handshake( &to_client );
  while(1){
    int words = read(from_client, input, BUFFER_SIZE);
    printf("%d\n",words);
    if(words != -1){
      wait(2);
      printf("your input was %ld characters.\n", strlen(input));
    }
  }
}
