#include "dog.h"
#include <stdlib.h>
/**
* init_dog - init var of type struct dog
* @d: pointer to struct
* @name: name of dog
* @age: age of dog
* @owner: who care dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
