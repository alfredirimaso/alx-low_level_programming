Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are structures, when, why and how to use them
How to use typedef

1. A dog is the only thing on earth that loves you more than you love yourself
mandatory
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
mandatory


Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.
