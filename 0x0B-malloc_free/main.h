#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
cahr *str_concat(chr *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
chr *rgstostr(int ac, char**av);

#endif
