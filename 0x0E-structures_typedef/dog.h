#include <stddef.h>
#ifndef DOG_H
#define DOG_H

/**
 *struct my_struct - Short description
 *@name: member name
 *@b: member age
 *@c: member owner
 *
 *Description: define data for struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
