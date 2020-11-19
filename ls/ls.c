#include <dirent.h>
#include <stdio.h>

int main(int argc, char **argv) {
  
  char *path = "./";

  if (argv[1] != NULL) {
    path = argv[1];
  }

  DIR *full_directory = opendir(path);
  struct dirent *directory_reader;
  
  if (full_directory) {
    
    while (directory_reader = readdir(full_directory)) {
      printf("%s\n", directory_reader->d_name);
    }

  }
  
}
