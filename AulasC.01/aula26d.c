// #26 C Struct | C Programming for Beginners

#include <stdio.h>

// Declaração da struct (fora da main)
typedef struct Person {
    double salary;
    int age;
}Person;

int main() {
    Person person1;

    person1.age = 25;
    person1.salary = 50000;

    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);


    return 0;
}
