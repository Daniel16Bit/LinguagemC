// #26 C Struct | C Programming for Beginners

#include <stdio.h>

// Declaração da struct (fora da main)
struct Person {
    double salary;
    int age;
};

int main() {
  

    struct Person person1 = {.age = 25, .salary = 50000.50};
    struct Person person2 = {.age = 30, .salary = 60000.75};



    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

 
    printf("Age: %d\n", person2.age);
    printf("Salary: %.2f\n", person2.salary);


    return 0;
}
