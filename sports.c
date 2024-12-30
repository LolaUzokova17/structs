#include <stdio.h>
#include <string.h>

struct Stadium {
    char name[100];
    int capacity;
};

struct Team {
    char team_name[100];
    char coach[100];
    int players_count;
    int founded_year;
    struct Stadium stadium;
};

void displayOldestTeam(struct Team teams[], int num_teams) {
    int oldest_team_index = 0;
    
    for (int i = 1; i < num_teams; i++) {
        if (teams[i].founded_year < teams[oldest_team_index].founded_year) {
            oldest_team_index = i;
        }
    }
    
    printf("Eng eski jamoa:\n");
    printf("Team Name    | Coach       | Players Count | Founded Year | Stadium Name\n");
    printf("----------------------------------------------------------------------\n");
    
    printf("%-12s | %-12s | %-13d | %-12d | %-12s\n", 
            teams[oldest_team_index].team_name,
            teams[oldest_team_index].coach,
            teams[oldest_team_index].players_count,
            teams[oldest_team_index].founded_year,
            teams[oldest_team_index].stadium.name);
}

int main() {
    struct Stadium stadium1 = {"Stadium A", 50000};
    struct Stadium stadium2 = {"Stadium B", 60000};
    
    struct Team teams[3] = {
        {"Team A", "Coach A", 11, 1950, stadium1},
        {"Team B", "Coach B", 12, 1980, stadium2},
        {"Team C", "Coach C", 15, 1995, stadium1}
    };

    displayOldestTeam(teams, 3);

    return 0;
}
