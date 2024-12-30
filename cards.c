#include <stdio.h>
#include <string.h>

struct Card {
    char card_holder_name[100];
    char card_number[20];
    char expiry_date[10];
    int cvv;
};

void displayCards(struct Card cards[], int num_cards) {
    printf("Amal qilayotgan kartalar:\n");
    printf("Card Holder Name | Card Number      | Expiry Date | CVV\n");
    printf("---------------------------------------------------------\n");
    
    for (int i = 0; i < num_cards; i++) {
        printf("%-17s | %-16s | %-11s | %d\n", cards[i].card_holder_name, cards[i].card_number, cards[i].expiry_date, cards[i].cvv);
    }
}

int main() {
    struct Card cards[2] = {
        {"John Doe", "1234 5678 9012 3456", "12/25", 123},
        {"Jane Smith", "2345 6789 0123 4567", "11/24", 456}
    };

    displayCards(cards, 2);
    
    return 0;
}