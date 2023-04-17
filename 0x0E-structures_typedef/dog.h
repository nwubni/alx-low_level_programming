#ifndef DOG
#define DOG

/**
* struct dog - Dog structure
* @name: Dog's name
* @age: Dog's age
* @owner: Dog's owner
* Description: Longer description
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

