#include <stdio.h>

int main(int argc, char **argv) {

  if (argc <= 2) {
    return 1;
  }

  for (int i=1; i<argc; i+=2) {
    rename(argv[i], argv[i+1]);
  }

}
