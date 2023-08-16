#include<stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 * _strcpy - a function that copies a string from a source to a destination.
 * @s1: destination.
 * @s2: source
 * Return: pointer to destination.
 */
char *_strcpy(char *s1, char *s2)
{
int x;
for (x = 0; s2[x] != '\0'; x++)
{
s1[x] = s2[x];
}
s1[x] = '\0';
return (s1);
}
/**
 * _str_len - function that returns the lenght of a string
 * @strg: string.
 * Return: integer.
 */
int _str_len(char *strg)
{
if (*strg == '\0')
return (0);
else
return (1 + _str_len(strg + 1));
}
/**
 * new_dog - a function that creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: typedef dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p = malloc(sizeof(dog_t));
if (p == NULL)
return (NULL);
p->name = malloc(_str_len(name) + 1);
if (p->name != NULL)
{
_strcpy(p->name, name);
}
else
{
free(p);
return (NULL);
}
p->age = age;
p->owner = malloc(_str_len(owner) + 1);
if (p->owner != NULL)
{
_strcpy(p->owner, owner);
}
else
{
free(p->name);
free(p);
return (NULL);
}
return (p);
}
