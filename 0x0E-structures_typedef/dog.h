#ifndef dog_H
#define dog_H
/**
 * struct dog - a new data type for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: this data type is for the dogs
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
