// #27: Enumerations(enums) in C | C Programming for Beginners

#include <stdio.h> 

enum Size {
    Small,
    Medium,
    Large,
    ExtraLarge
};

int main() {

    enum Size shirtSize;

    shirtSize = Medium; // Assigning an enumeration value
    printf("Shirt size: %d\n", shirtSize);
    return 0;
}
