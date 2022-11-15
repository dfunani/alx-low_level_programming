#ifndef _DOG_
#define _DOG_

/**
 * struct dog - dog obj
 * @name: name of dog obj
 * @age: age of dog
 * @owner: dog owner
 *
 * Description: An object to template creating a dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;
#endif
