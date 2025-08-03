// #27: Enumerations(enums) in C | C Programming for Beginners

#include <stdio.h> 

enum Size {
    Small = 27 ,
    Medium = 31 ,
    Large = 35,
    ExtraLarge = 40
};

int main() {

    enum Size shirtSize1 = Small; // Assigning an enumeration value
    enum Size shirtSize2 = Medium; // Assigning another enumeration value
    enum Size shirtSize3 = Large; // Assigning yet another enumeration value
    enum Size shirtSize4 = ExtraLarge; // Assigning the last enumeration value

    printf("Shirt size 1: %d\n", shirtSize1);
    printf("Shirt size 2: %d\n", shirtSize2);
    printf("Shirt size 3: %d\n", shirtSize3);
    printf("Shirt size 4: %d\n", shirtSize4);
    printf("Size of enum Size: %zu bytes\n", sizeof(enum Size));
    
    
    return 0;
}
