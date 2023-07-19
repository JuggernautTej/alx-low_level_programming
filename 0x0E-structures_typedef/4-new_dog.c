#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
/**
 * new_dog - Function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;
doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
{
free(doggy);
return (NULL);
}
doggy->name = malloc(sizeof(char) * (strlen(name) + 1));
if (doggy->name == NULL)
{
free(doggy->name);
return (NULL);
}
doggy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (doggy->owner == NULL)
{
free(doggy->owner);
return (NULL);
}
strcpy(doggy->name, name);
doggy->age = age;
strcpy(doggy->owner, owner);
return (doggy);
}
