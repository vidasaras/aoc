#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  FILE *file = fopen("./input", "r");

  unsigned int horizontal = 0;
  unsigned int depth = 0;

  char str[1024];
  while (fgets(str, sizeof(str), file)) {

    char *token = strtok(str, " ");

    char data[2][1024];
    int i = 0;
    while (token != NULL) {
      printf("%s", token);
      strcpy(data[i], token);
      i++;
      token = strtok(NULL, " ");
    }
    char command[1024];
    char value[1024];
    strcpy(command, data[0]);
    strcpy(value, data[1]);
    if (strcmp("forward", command) == 0){
      horizontal += atoi(value);
    }
    if (strcmp("down", command) == 0){
      depth += atoi(value);
    }
    if (strcmp("up", command) == 0){
      depth -= atoi(value);
    }
  }
  printf("%d * %d = %d\n", depth, horizontal, depth * horizontal);
  fclose(file);
}
