#include <stdlib.h>

char *_strdup(const char *str)
{
int i, len = 0;
char *ptr;

/* Get the length of the string */
while (str[len])
len++;

/* Allocate memory */
ptr = malloc(len * sizeof(char));

/* If malloc failed */
if (!ptr)
return NULL;

/* Copy the string */
for (i = 0; i < len; i++)
ptr[i] = str[i];

return ptr;
}
