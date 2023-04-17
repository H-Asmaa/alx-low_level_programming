#ifndef DOG_h
#define DOG_h
/**
 * struct dog - strucutes
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A structure dog with the name, age, and owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
