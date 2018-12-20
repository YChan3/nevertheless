#include "pipe_networking.h"


int main() {

  int to_client;
  int from_client;
  char input[BUFFER_SIZE];

  from_client = server_handshake( &to_client );
  while(1){
    if(read(from_client, input, BUFFER_SIZE)){
      printf("your input was %ld characters.\n", strlen(input));
    }
    else{
      from_client = server_handshake( &to_client );
      remove("WKP");
    }
  }
}
