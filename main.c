/**
 * @file    main.c
 * @author  Octarudin Mahendra (octarudin@gmail.com)
 * @brief   This is an example code for learning doxygen and sphinx.
 *          Doxygen and sphinx are a tool for documenting a code.
 * @version 0.1
 * @date    2025-11-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

/**
 * @brief Person Model
 *        
 */
typedef struct _Person {
    char* name;
    unsigned char age;
    void (*GetName)(struct _Person*);
} Person;

/**
 * @brief Print the Name object
 * 
 * @param self 
 * @return void
 */
void PrintName(Person* self) {
    printf(TAG, "%s", self->name);
}

char const* TAG = "[SYS]:";     // untuk logging

int Operation(int,int);

int main() {
    int var1 = 10;              // buat variabel bernilai 10
    unsigned char var2 = 17;    // buat variabel dimulai dari nol dgn nilai 17
    
    Person person;              // buat instance
    person.name = "Octa";
    person.age = 21;
    person.GetName = PrintName; // memanggil GetName sama saja memanggil PrintName
    person.GetName(&person);    // memanggil nama dari person

    printf(TAG, "Addition Operator = %d\r\n", Operation(var1, var2)); // mencetak nilai variabel

    return 0;
}

int Operation(int a, int b) {
    return a+b;
}