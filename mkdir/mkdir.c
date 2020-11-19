#include <sys/stat.h>

int main(int argc, char **argv) {
  
  if (argc < 2) {
    return 1;
  }

  for (int i=1; i<argc; i++) {
    mkdir(argv[i], 0755);
  }

}
