#include <stdio.h>
int main(int argc, char *argv[]) {
  if (argc != 5) {
    printf("Usage: %s <color1> <color2> <color3> <color4>\n", argv[0]);
    return 1;
  }
  printf("Number of arguments: %d\n", argc);
  printf("Colors:\n");
  for (int i = 1; i < argc; i++) {
    printf("%s\n", argv[i]);
  }
  return 0;
}

// commands to run

// gcc -o colors q9.c  
// ./colors red green blue yellow

// output

// Number of arguments: 5
// Colors:
// red
// green
// blue
// yellow