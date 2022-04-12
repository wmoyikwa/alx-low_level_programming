#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Dog informations
 * @name: pointer pointed to the name of dog
 * @age: pointer pointed to the age of dog
 * @owner: pointer pointed to the owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
