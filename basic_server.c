#include "pipe_networking.h"


int main() {

  int to_client;
  int from_client;
  char input[BUFFER_SIZE];

  from_client = server_handshake( &to_client );
  while(1){
    read(input, from_client, BUFFER_SIZE)
    printf("%s\n", input);
  }
}
