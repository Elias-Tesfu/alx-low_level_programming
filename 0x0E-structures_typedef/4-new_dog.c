#include "dog.h"

/**
 * _strlen - returns the length of a str
 * @s: string
 * Return:
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copiess a string
 * @dest: the detination pointer
 * @src: the source pointer
 * Return:
 */
char *_strcpy(char *desst, char *src)
{
	int len, i;

	len = 0;
	while(src[len] != '\0')
	{
		len++;
	}

	for(i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n, o;

	n = _strlen(name);
	o = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (n + 1);
