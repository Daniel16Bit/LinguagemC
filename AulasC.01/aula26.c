// #26 C Struct | C Programming for Beginners

#include <stdio.h>

// Declaração da struct (fora da main)
struct Person {
    double salary;
    int age;
};

int main() {
    struct Person person1;  // Agora a struct existe, então funciona
    struct Person person2;  // Outra instância da struct

    person1.age = 25;
    person1.salary = 50000;

    printf("Age: %d\n", person1.age);
    printf("Salary: %.2f\n", person1.salary);

    person2.age = 40;
    person2.salary = 60000;
    printf("Age: %d\n", person2.age);
    printf("Salary: %.2f\n", person2.salary);


    return 0;
}
