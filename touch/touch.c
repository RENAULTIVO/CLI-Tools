#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv) {

  if (argc <= 1) {
    return 1;
  }

  for (int i=0; i<argc; i++) {
    creat(argv[i], 0755);
  }

}
