#include "pipe_networking.h"


int main() {

  int to_client;
  int from_client;
  char input[BUFFER_SIZE];

  from_client = server_handshake( &to_client );
  while(1){
    if(read(from_client, input, BUFFER_SIZE) != -1);
    printf("%d\n", strlen(input));
  }
}
