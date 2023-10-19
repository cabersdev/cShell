#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  if (isatty(STDIN_FILENO)) {
    // shell is running in interactive mode
    // display prompt  
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));
    char username = *getlogin();
    char hostname[1024];
    gethostname(hostname, sizeof(hostname));
    printf("%s@%s:%s\n", username, hostname, cwd);

    // accept input from the user
    


  } else {
    // shell is running in non-interactive mode
    // execute commands from script or batch file
  }

  return 0;
}
