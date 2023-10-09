#ifndef DOG_h
#define DOG_h
/**
 * struct dog - data type that include char a float type.
 * @name: first member of type char.
 * @age: second member of type float.
 * @owner: third member of type char.
 *
 * Description: type will represent the different detail of a dog
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
#endif
