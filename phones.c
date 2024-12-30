#include <stdio.h>

typedef struct {
    char name[64];
    char brand[32];
    float price;
    char ram[8];
    char color[16];
} Phone; 

void filter(Phone phones[], int length, float price){
    printf("Narxi $500 dan yuqori telefonlar:\n");
    printf("Name         | Brand    | Price  | RAM  | Color\n");
    printf("------------------------------------------------\n");

    for(int i = 0; i < length; i++){
        Phone phone = phones[i];
        if(phone.price >= price){
            printf(
                "%-12s | %-8s | %6.1f | %-4s | %-5s\n", 
                phone.name, phone.brand, phone.price, 
                phone.ram, phone.color);
        }
    }
}

void get_max(Phone phones[], int length){
    Phone max = phones[0];
    for(int i = 0; i < length; i++){
        if(max.price < phones[i].price){
            max = phones[i];
        }
    }

    printf("Eng qimmat telefon:\n");
    printf("Name         | Brand    | Price  | RAM  | Color\n");
    printf("------------------------------------------------\n");
    printf(
        "%-12s | %-8s | %6.1f | %-4s | %-5s\n", 
        max.name, max.brand, max.price, 
        max.ram, max.color);
}

int main(){

    Phone phones[10] = {
        {"Galaxy S20", "Samsung", 800, "8GB", "Black"},
        {"iPhone 12", "Apple", 1000, "6GB", "White"},
        {"Pixel 6", "Google", 600, "8GB", "Blue"},
        {"Redmi Note 10", "Xiaomi", 200, "4GB", "Gray"},
        {"OnePlus 9", "OnePlus", 700, "12GB", "Black"},
        {"Galaxy A51", "Samsung", 400, "6GB", "White"},
        {"iPhone SE", "Apple", 500, "3GB", "Red"},
        {"Moto G Power", "Motorola", 300, "4GB", "Blue"},
        {"Nokia 8.3", "Nokia", 650, "8GB", "Green"},
        {"Xperia 5 II", "Sony", 900, "8GB", "Black"}
    };
    int length = sizeof(phones) / sizeof(phones[0]);

    get_max(phones, length);

}