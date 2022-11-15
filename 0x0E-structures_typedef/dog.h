#ifndef _HEADER_
#define _HEADER_

/**
  * struct dog - Attributes of the dog
  * @name: Name of the dog
  * @age: Age of the dog
  * @owner: Owner of the dog
  * Description: Attributes of the dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for dog structure
 * it is teh new name for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
