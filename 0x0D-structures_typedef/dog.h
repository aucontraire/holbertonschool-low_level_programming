#ifndef DOG_H
#define DOG_H
int _putchar(char c);
/**
 * struct dog - best friend of humankind
 * @name: doggo's name
 * @age: doggo's age
 * @owner: owner's name
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} d;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* !DOG_H */
