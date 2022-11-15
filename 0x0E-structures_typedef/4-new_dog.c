#include "dog.h"

/**
 * new_dog - creates a dog
 * @name: name of dog
 * @age: of dog
 * @owner: of dog
 *
 * Return: ptr to the dog created
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog_obj;
	dog_t *dog_ptr = &dog_obj;
	char *name_copy = name;
	char *owner_copy = owner;

	if (dog_ptr == NULL)
	{
		return (NULL);
	}
	(*dog_ptr).name = name_copy;
	(*dog_ptr).age = age;
	(*dog_ptr).owner = owner_copy;
	return (dog_ptr);
}
