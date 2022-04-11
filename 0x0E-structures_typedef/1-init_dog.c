#include "dog.h"
/**
 * init_dog - initialize a structure of dog characteristics
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a struct of dog's name, age and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name
	d->age = age
	d->owner = owner
}
