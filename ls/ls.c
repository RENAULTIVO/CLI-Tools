#include <dirent.h>
#include <stdio.h>

void listPath(char *path) {
   
  DIR *full_directory = opendir(path);
  struct dirent *directory_reader;
  
  if (full_directory) {
    
    printf("%s:\n", path);

    while (directory_reader = readdir(full_directory)) {
      printf("  %s\n", directory_reader->d_name);
    }
      
  }

}

int main(int argc, char **argv) {
  
  if (argc == 1) {
    listPath("./");
    return 0;
  }

  listPath(argv[1]);

  for (int i=2; i<argc; i++) {
    
    char *path = "./";

    if (argv[i] != NULL) {
      path = argv[i];
    }
    
    puts("\n");
    listPath(path);

  }
  
}
