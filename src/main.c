#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int exit = 0;
  clock_t start = clock();
  do {
    if (kbhit()) {
      char ch = getch();
      exit = 1;
      printf("\n");
    }

    double delta = ((double) clock() - start) / CLOCKS_PER_SEC;
    printf("time in: %fsec\r", delta);
  } while (!exit);
  return EXIT_SUCCESS;
}
