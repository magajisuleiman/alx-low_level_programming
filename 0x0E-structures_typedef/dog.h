#ifndef DOG_H
#define DOG_H

/**
 * struct dog - user define data type sruct dog
 * @name: structure menmber 1
 * @age: structure menmber 2
 * @owner: structure menmber 3
 *
 * Description: classify a dog and its properties
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - newly define type definition for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int len_str(char *str);
dog_t *new_dog(char *name, float age, char *owner);

#endif
