#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: point of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a1, b1, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (a1 = 0; name[a1]; a1++)
		;
	a1++;
	dog->name = malloc(a1 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < a1; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (b1 = 0; owner[b1]; b1++)
		;
	b1++;
	dog->owner = malloc(b1 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < b1; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
