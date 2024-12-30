#include <stdio.h>
#include <string.h>

struct Genre {
    char name[50];
    char description[200];
};

struct Movie {
    char name[100];
    float rating;
    int release_year;
    struct Genre genre;
};

void MovieGenre(struct Movie movies[], int num_movies, const char* genre_name) {
    printf("\"%s\" janridagi kinolar:\n", genre_name);
    printf("Name           | Rating | Release Year | Genre Name  | Genre Description\n");
    printf("--------------------------------------------------------------------------\n");

    for (int i = 0; i < num_movies; i++) {
        if (strcmp(movies[i].genre.name, genre_name) == 0) {
            printf("%-15s | %-6.2f | %-12d | %-12s | %-18s\n", 
                    movies[i].name, 
                    movies[i].rating, 
                    movies[i].release_year, 
                    movies[i].genre.name, 
                    movies[i].genre.description);
        }
    }
}

int main() {
    struct Genre action = {"Action", "Action-packed thriller"};
    struct Genre comedy = {"Comedy", "Light-hearted and humorous movies"};
    
    struct Movie movies[3] = {
        {"Movie A", 8.5, 2022, action},
        {"Movie B", 9.0, 2023, action},
        {"Movie C", 7.5, 2021, comedy}
    };

    Moviegenre(movies, 3, "Action");

    return 0;
}
