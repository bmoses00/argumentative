# include <unistd.h>
# include <string.h>
# include <stdio.h>

char ** parse_args( char * line ) {
	line = calloc(100, 1);
	char * curr = line;
	char * args[8];	
	int i;
	for (i = 0; curr != NULL; i++) {
		args[i] = strsep(&curr, " ");
	}
	return pointer to original thing
}


int main(int argc, char * argv[]) {
  char ** line = parse_args("ls -a -l");
  
  execvp(args[0], args);
}


