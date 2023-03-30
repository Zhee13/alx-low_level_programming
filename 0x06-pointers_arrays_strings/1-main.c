
0x06. C - More pointers, arrays and strings
C
 By: Julien Barbier
 Weight: 1
 Project will start Mar 29, 2023 6:00 AM, must end by Mar 31, 2023 6:00 AM
 Checker was released at Mar 29, 2023 6:00 PM
 An auto review will be launched at the deadline


Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are pointers and how to use them
What are arrays and how to use them
What are the differences between pointers and arrays
How to use strings and how to manipulate them
Scope of variables
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
Quiz questions
Great! You've completed the quiz successfully! Keep going! (Hide quiz)
Question #0
What happens when one tries to dereference a pointer to NULL?


World War Z


Nothing


Kernel panic


Segmentation fault

Question #1
What is/are the difference(s) between the two following variables? (Except their names)

char *s1 = "";
char *s2 = NULL;

The second one can be dereferenced, not the first one


The first one points to a 0-byte, the second one points to 0


They are the same


The first one points to 0, the second one points to a 0-byte


The first one can be dereferenced, not the second one

Question #2
What is wrong with the following code?

int n = 5;
int array[5];
int i = 3;

array[n] = i;

It is not possible to access array[n]


Nothing is wrong


The array array is not entirely initialized


It is impossible to declare the variable array this way

Question #3
Why is it important to reserve enough space for an extra character when declaring/allocating a string?


For fun


In case we need one


For the null byte (end of string)


For memory alignment

Question #4
What is wrong with the following code?

int n = 5;
int array[n];
int i = 3;

array[n] = i;

It is not possible to access array[n]


Nothing is wrong


The array array is not entirely initialized


It is impossible to declare the variable array this way

Question #5
var = "Best";
What is the type of var?


string


int *


char *

Question #6
What is wrong with the following code?

int n = 5;
int array[10];
int i = 3;

array[n] = i;

It is not possible to access array[n]


Nothing is wrong


The array array is not entirely initialized


It is impossible to declare the variable array this way

Tasks
0. strcat
mandatory
Write a function that concatenates two strings.

Prototype: char *_strcat(char *dest, char *src);
This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
Returns a pointer to the resulting string dest
FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

julien@ubuntu:~/0x06$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
julien@ubuntu:~/0x06$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x06-pointers_arrays_strings
File: 0-strcat.c
   
1. strncat
mandatory
Write a function that concatenates two strings.

Prototype: char *_strncat(char *dest, char *src, int n);
The _strncat function is similar to the _strcat function, except that
it will use at most n bytes from src; and
src does not need to be null-terminated if it contains n or more bytes
Return a pointer to the resulting string dest
FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

julien@ubuntu:~/0x06$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
 	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
