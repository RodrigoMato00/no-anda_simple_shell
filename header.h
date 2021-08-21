#ifndef HEADER_H
#define HEADER_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

/**
 *struct built - my struct
 *@cmd: command
 *@f: fuction
 */
typedef struct built
{
	char *cmd;
	int (*f)(char **arrtok);
} built_jrl;

/**
 *struct exit_status - my struct
 *@message: message
 *@code: exit code
 *@exit: 1 or 0
 */
typedef struct exit_status
{
        char *message;
        int code;
	int exit;
} exit_jrl;

int _atoi(char *s);
int _cd(char **arrtok);
exit_jrl *change_status(exit_jrl *estat, char *msg, int cd, int flag);
int check_builtins(char *token, char *cpy2, char **arrtok);
int c_check(char *path, char *command, char **buf, struct stat **bufstat);
exit_jrl *child_proc(exit_jrl *estat, char **ar, char *cpy2, char *ipname);
int count_tokens(char *input, const char *delim);
char **create_arrtok(char *input, char **arrtok);
int _env(char **arrtok);
int _eexit(char **arrtok);
void _free(unsigned int num, ...);
int (*get_cmd_func(char *s))(char **arrtok);
char *_getenv(const char *name);
void get_input(char **input, exit_jrl *estat);
ssize_t _getline(char **lineptr);
char *_getrealenv(const char *name);
int help_setenv(char **arrtok);
int main(int argc, char *argv[]);
void mem_init(int num, ...);
void minit2(int num, ...);
int niproc(char *av[]);
char *null_init(char *buffer, int size);
exit_jrl *pipex(char **argv);
exit_jrl *proc(char *input, char *ipname, exit_jrl *estat);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _ssetenv(const char *name, const char *value, int overwrite);
char *_strcat(char *dest, const char *src, const char *delim);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *src, char *dest);
unsigned int _strlen(char *str);
char *_strtok(char *str, const char *delim, char **saveptr);
char **tokenize_cmds(char *input, char **cmdtok);
char *transform_tok(char *command);
int _unsetenv(const char *name);
void check_signal(int sig_num);
extern char **environ;
#endif /*odio este proyecto, no quiero mas low level por un rato*/
