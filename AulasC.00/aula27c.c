// #27: Enumerations(enums) in C | C Programming for Beginners

#include <stdio.h> 

enum Size {
    Small = 27 ,
    Medium = 31 ,
    Large = 35,
    ExtraLarge = 40
} shoeSize;

int main() {

    shoeSize = Medium; // Assigning an enumeration value

    printf("Shoe size: %d\n", shoeSize);

    return 0;
}
