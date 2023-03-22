#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog's data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: saves dogs data into different variables
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
