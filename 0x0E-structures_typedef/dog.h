#ifndef MY_HEADER
#define MY_HEADER
/**
*struct dog - Django
*@name: name
*@age: age
*@owner: owner
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
