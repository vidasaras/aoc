#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE* fptr;
  char data[200];
  fptr = fopen("input", "r");
  int prev=0;
  int count=0;
  while (fgets(data, 200, fptr)
               != NULL) {
            int temp = atoi(data);

            if (prev < temp) count++;
            prev = temp;
        }
  fclose(fptr);
  printf("Count: %d\n", count - 1);
  return 0;
}
