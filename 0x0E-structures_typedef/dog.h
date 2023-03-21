#ifndef DOG_H
#define DOG_H

/**
 * struct dog - lists elements of dog
 * @name: name of dog
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dogo_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogo_t *new_dog(char *name, float age, char *owner);
void free_dog(dogo_t *d);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);

#endif
