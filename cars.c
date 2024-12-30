#include <stdio.h>

struct Car {
    char model[50];
    char brand[50];
    int price;
    int year;
};

int main() {
    struct Car cars[] = {
        {"Rolls Royce", "Rolls", 150000, 2021},
        {"Tesla Model S", "Tesla", 100000, 2022},
        {"BMW 7 Series", "BMW", 90000, 2020}
    };

    int num_cars = sizeof(cars) / sizeof(cars[0]);
    
    struct Car most_expensive = cars[0];
    for (int i = 1; i < num_cars; i++) {
        if (cars[i].price > most_expensive.price) {
            most_expensive = cars[i];
        }
    }

    printf("Eng qimmat mashina:\n");
    printf("Model       | Brand   | Price | Year\n");
    printf("-----------------------------------------\n");
    printf("%-10s | %-7s | %-5d | %-4d\n", 
            most_expensive.model, most_expensive.brand, 
            most_expensive.price, most_expensive.year);

    return 0;
}