#include <stdio.h>
#include <string.h>

struct Player {
    int ballScores[12];
    char playerName[50];
    int totalScore;
};

int validateScore(int score) {
    if (score >= 0 && score <= 6) {
        return score;
    }
    return -1;  // Invalid score
}

void playGame(struct Player *player) {
    for (int i = 0; i < 12; i++) {
        int score;
        printf("Enter score for ball %d (0-6): ", i + 1);
        scanf("%d", &score);
        
        int validScore = validateScore(score);
        if (validScore != -1) {
            player->ballScores[i] = validScore;
        } else {
            printf("Invalid score. Ball %d marked but no score added.\n", i + 1);
            player->ballScores[i] = 0;  // Mark the ball with score 0
        }
    }
}

int findWinner(struct Player player1, struct Player player2) {
    if (player1.totalScore > player2.totalScore) {
        return 1;  // Player 1 wins
    } else if (player1.totalScore < player2.totalScore) {
        return 2;  // Player 2 wins
    } else {
        return 0;  // Draw
    }
}

void displayMatchScoreboard(struct Player player1, struct Player player2) {
    printf("\nMatch Scoreboard:\n");
    printf("Player 1: %s\n", player1.playerName);
    printf("Scores per ball: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", player1.ballScores[i]);
    }
    printf("\nTotal Score: %d\n", player1.totalScore);
    printf("Average Score: %.2f\n", player1.totalScore / 12.0);

    printf("\nPlayer 2: %s\n", player2.playerName);
    printf("Scores per ball: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", player2.ballScores[i]);
    }
    printf("\nTotal Score: %d\n", player2.totalScore);
    printf("Average Score: %.2f\n", player2.totalScore / 12.0);
}

int main() {
    struct Player player1, player2;

    printf("Enter Player 1's name: ");
    scanf(" %[^\n]s", player1.playerName);
    player1.totalScore = 0;
    playGame(&player1);
    
    printf("Enter Player 2's name: ");
    scanf(" %[^\n]s", player2.playerName);
    player2.totalScore = 0;
    playGame(&player2);
    
    // Calculating total score for each player
    for (int i = 0; i < 12; i++) {
        player1.totalScore += player1.ballScores[i];
        player2.totalScore += player2.ballScores[i];
    }

    int winner = findWinner(player1, player2);
    if (winner == 1) {
        printf("\nPlayer 1 wins!\n");
    } else if (winner == 2) {
        printf("\nPlayer 2 wins!\n");
    } else {
        printf("\nIt's a draw!\n");
    }

    displayMatchScoreboard(player1, player2);

    return 0;
}
