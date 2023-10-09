#ifndef DOG_h
#define DOG_h
/**
 * struct dog - data type that include char a float type.
 * @name: first member of type char.
 * @age: second member of type float.
 * @owner: third member of type char.
 *
 * Description: the structure or type will represent the different detail of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
