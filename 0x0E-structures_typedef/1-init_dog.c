#include "dog.h"
/**
 * init_dog - function that initilize variable of struct dog type
 * @d: struct
 * @name: dog owner
 * @age: dog age
 * @owner: dog owner
 * @Rturn:-nitialized struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;

	}
}
