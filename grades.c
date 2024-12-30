#include <stdio.h>
#include <string.h>

struct Student {
    char first_name[50];
    char last_name[50];
};

struct Subject {
    char name[100];
};

struct Score {
    float score;
};
void StudentGrade(struct Student students[], struct Subject subjects[], struct Score scores[], int num_students, int num_subjects) {
    float total_score = 0.0;
    int total_scores = num_students * num_subjects;
    
    for (int i = 0; i < num_students; i++) {
        for (int j = 0; j < num_subjects; j++) {
            total_score += scores[i * num_subjects + j].score;
        }
    }
    
    float average_score = total_score / total_scores;
    
    printf("O'rtacha bahodan yuqori ball to'plagan talabalar:\n");
    printf("First Name | Last Name | Subject Name  | Score\n");
    printf("------------------------------------------------\n");
    
    for (int i = 0; i < num_students; i++) {
        for (int j = 0; j < num_subjects; j++) {
            if (scores[i * num_subjects + j].score > average_score) {
                printf("%-11s | %-10s | %-13s | %.2f\n", 
                        students[i].first_name, 
                        students[i].last_name, 
                        subjects[j].name, 
                        scores[i * num_subjects + j].score);
            }
        }
    }
}

int main() {
    struct Student students[2] = {
        {"John", "Doe"},
        {"Jane", "Smith"}
    };

    struct Subject subjects[2] = {
        {"Math"},
        {"Physics"}
    };

    struct Score scores[4] = {
        {85}, 
        {70},
        {90},
        {95}
    };

    StudentGrade(students, subjects, scores, 2, 2);

    return 0;
}
