// include standard input output library
#include <stdio.h> 
// include standard library
#include <stdlib.h>
// include string manipulation library
#include <string.h>
// include boolean data types and operation
#include <stdbool.h>
// include POSIX operating system API
#include <unistd.h>

#include <sys/types.h>

#include <sys/wait.h>

int main(int argc, char *argv[])
{
  if (isatty(STDIN_FILENO)) {
    // shell is running in interactive mode (connected to a terminal)
    // display prompt 

    // get the current working directory
    char cwd[1024];
    getcwd(cwd, sizeof(cwd));

    // get username of the current user
    char *username = getlogin();

    // get the hostname of the system
    char hostname[1024];
    gethostname(hostname, sizeof(hostname));

    // print the prompt in the format: username@hostname:current_directory
    printf("%s@%s:%s\n", username, hostname, cwd);

    // accept input from the user
    
    

  } else {
    // If the shell is not running in interactive mode (e.g., script or batch file is providing input)
    // Execute commands from the script or batch file (missing code)

  }

  // exit the program
  return 0;
}
