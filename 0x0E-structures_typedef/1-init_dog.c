#include "dog.h"
/**
 * init_dog - initialize a structure of dog characteristics
 *@d: pointer to dog variable
 * @name: name to init
 * @age: age of init
 * @owner: owner of init
 *
 * Description: a struct of dog's name, age and owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
