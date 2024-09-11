#include <stdio.h>
#include <string.h>

void evaluate(char *cmd) {
	cmd[strlen(cmd) - 1] = '\0';
	printf("%s: command not found\n", cmd);
}

int main() {
  printf("$ ");
  fflush(stdout);

  // Wait for user input
  char input[100];
  fgets(input, 100, stdin);
  evaluate(input);
  return 0;
}
