#include <stdlib.h>
#include "dog.h"

/**
 * len_str - funtion for length of a string
 * @str: string whose length id determine
 *
 * Return: length of string str
*/
int len_str(char *str)
{
	int counter;

	counter = 0;

	while (str[counter] != '\0')
		counter++;

	return (counter);
}

/**
 * _strcpy - function to copy string from destination to source
 * @dest: destination of sring
 * @src: sorce of string
 *
 * Return: destination of copied string
*/
char *_strcpy(char *dest, char *src)
{
	int j;
	int size;

	size = 0;

	while (src[size] != '\0')
		size++;
	for (j = 0; j < size; j++)
	{
		dest[j] = src[j];
	}

	dest[j] = '\0';
	return (dest);
}

/**
* new_dog - function that creates a new dog.
* @name: new dpg name
* @age: new dog age
* @owner: new dog owner
*
* Return:successful pointer to the new dog, NULL otherwise
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	/*create a pointer to dog_t and declare variables*/
	dog_t *my_new_dog;
	int len_name;
	int len_owner;

	/*initialize variables*/
	len_name = len_str(name);
	len_owner = len_str(owner);


	/*create dynamic memory for pointer and variables*/
	my_new_dog = malloc(sizeof(dog_t));

	if (my_new_dog == NULL)
		return (NULL);

	(*my_new_dog).name = malloc((len_name + 1) * sizeof(char));

	if ((*my_new_dog).name == NULL)
	{
		free(my_new_dog);
		return (NULL);
	}

	(*my_new_dog).owner = malloc((len_owner + 1) * sizeof(char));

	if ((*my_new_dog).owner == NULL)
	{
		free(my_new_dog);
		free((*my_new_dog).name);
		return (NULL);
	}

	_strcpy((*my_new_dog).name, name);
	_strcpy((*my_new_dog).owner, owner);
	(*my_new_dog).age	= age;

	return (my_new_dog);
}

