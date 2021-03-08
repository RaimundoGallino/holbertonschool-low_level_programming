#ifndef DOG
#define DOG

/**
 * struct dog - check the code for Holberton School students.
 * @name: name of the owner
 * @owner: owner of the dog
 * @age: age of the dog
 * Return: Always 0.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);


#endif
