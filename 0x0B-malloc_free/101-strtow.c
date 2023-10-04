#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
    char *concat_str;
    int len1 = 0, len2 = 0, index, concat_index = 0;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    // Calculate the length of s1
    for (index = 0; s1[index]; index++)
        len1++;

    // Calculate the length of s2
    for (index = 0; s2[index]; index++)
        len2++;

    // Allocate memory: combined length of s1 and s2 plus 1 for the null terminator
    concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concat_str == NULL)
        return NULL;

    // Copy s1 to concat_str
    for (index = 0; s1[index]; index++)
        concat_str[concat_index++] = s1[index];

    // Copy s2 to concat_str
    for (index = 0; s2[index]; index++)
        concat_str[concat_index++] = s2[index];

    // Null-terminate the concatenated string
    concat_str[concat_index] = '\0';

    return concat_str;
}
