//
//  main.c
//  MCS
//
//  Created by Preston Heffner on 8/18/25.
//

#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define EXIT_SUCCESS 0
#define true !false
void MC_loop(void);
char *MC_read_line(void);


typedef struct{
    char WORD[20];
} WORD;
WORD Mind[20];
unsigned int MEMORY = 0b000000000;
struct {
    char blanks;//this is actually a number.
    _Bool bitarray; //DO NOT ASSIGHN TRUE OR FALSE TO THIS EVER this val
} shortmem;

int main(int argc, const char **argv)
{
  // Load config files, if any.

  // Run command loop.
  MC_loop();

  // Perform any shutdown/cleanup.

  return EXIT_SUCCESS;
}




void MC_loop(void){
  char *line;
  char **args;
  int status;

  do {
      
      printf("=(");

  } while (status);
}

int MC_think(char **args){
    if (args[0] == NULL){
        shortmem.blanks++;
        goto emptyR;
        return 0;
    }
    int foramount = 30;
    for (int tokes = 0; tokes < foramount;tokes++){
        
    }
    
    return 0;
    while (0){
    emptyR:
        printf("this string is empty user");
        if (shortmem.blanks > 8){
            printf("communication deemed frivolus");
        }
    }
    while (0){
    otherres:
        printf("this string is empty user");
        if (shortmem.blanks > 8){
            printf("communication deemed frivolus");
        }
    }
    while (0){
    executeR:
        printf("this string is empty user");
        if (shortmem.blanks > 8){
            printf("communication deemed frivolus");
        }
    }
    return 0;
}



//responses



#define LSH_RL_BUFSIZE 1024

