#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  if (isatty(STDIN_FILENO)) {
    // shell is running in interactive mode
    // display prompt and accept input from the user

  } else {

  }

  return 0;
}
