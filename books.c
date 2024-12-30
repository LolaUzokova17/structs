#include <stdio.h>
#include <string.h>

struct Author {
    char name[100];
    int birth_year;
};

struct Book {
    char title[100];
    float price;
    int published_year;
    struct Author author;
};

void BooksAuthor(struct Book books[], int num_books) {
    printf("1980-yildan keyin tug'ilgan mualliflarning kitoblari:\n");
    printf("Title           | Price | Published Year | Author Name  | Author Birth Year\n");
    printf("----------------------------------------------------------------------------\n");

    for (int i = 0; i < num_books; i++) {
        if (books[i].author.birth_year > 1980) {
            printf("%-15s | %-5.2f | %-14d | %-12s | %-17d\n", 
                    books[i].title, 
                    books[i].price, 
                    books[i].published_year, 
                    books[i].author.name, 
                    books[i].author.birth_year);
        }
    }
}

int main() {
    struct Author author1 = {"Alex Black", 1990};
    struct Author author2 = {"Mary White", 1985};
    struct Author author3 = {"John Green", 1975};

    struct Book books[3] = {
        {"Book A", 25.0, 2021, author1},
        {"Book B", 30.0, 2023, author2},
        {"Book C", 20.0, 2015, author3}
    };

    BooksAuthor(books, 3);

    return 0;
}