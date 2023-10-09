#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: Dog's basic attributes
 */
struct dog {
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

/* any other function declarations or structures go here */

#endif /* DOG_H */
