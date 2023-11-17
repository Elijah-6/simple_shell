#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void display_prompt(void);
char *read_input(void);
void execute_command(char *command);
void handle_error(char *message);

#endif

