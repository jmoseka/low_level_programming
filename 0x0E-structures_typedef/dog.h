#ifndef DOG_H
#define DOG_H

/**
 *struct dog - containing members of dog
 *@name: member name
 *@age: member age
 *@owner: member owner
 *
 *Description: define data for struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
