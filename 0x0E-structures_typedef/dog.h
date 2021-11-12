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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
