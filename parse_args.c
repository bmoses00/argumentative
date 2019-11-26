# include <unistd.h>
# include <string.h>
# include <stdio.h>

int main(int argc, char * argv[]) {
  char line[100] = "ls -a -l";
  char * curr = line;
  char * token;
  char * args[8];
  int i;
  for (i = 0; curr != NULL; i++) {
    args[i] = strsep(&curr, " ");
  }
  execvp(args[0], args);
}
