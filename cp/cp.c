#include <stdio.h>

int main(int argc, char **argv) {

  if (argc < 3) {
    return 1;
  }

  for (int i=1; i<argc; i+=2) {

    char BUFFER[BUFSIZ];

    FILE *original;
    FILE *copy;
    size_t number_of_chars;

    original = fopen(argv[i], "rb");
    copy = fopen(argv[i+1], "wb");

    do {

      number_of_chars = fread(BUFFER, 1, BUFSIZ, original);
      fwrite(BUFFER, 1, number_of_chars, copy);
    
    } while(number_of_chars != 0);

  }

}

