#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid,int height);
int wrdcnt(char *s);
char **strtow(char *str);
char *argstostr(int ac, char **av);
#endif /*_MAIN_H_ */
