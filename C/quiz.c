#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defining a structure for a question
struct Question {
    char question[100];
    char options[10][100];
    int correctAnswer;
};

// Function to insert ques
void insertQues(struct Question *ques, int numQues) {
    int i;
    for (i = 0; i < numQues; i++) {
        printf("\nEnter question %d: ", i+1);
        fgets(ques[i].question, sizeof(ques[i].question), stdin);
        ques[i].question[strcspn(ques[i].question, "\n")] = 0;

        printf("\nEnter options for question %d:\n", i+1);
        for (int j = 0; j < 4; j++) {
            printf("Option %d: ", j+1);
            fgets(ques[i].options[j], sizeof(ques[i].options[j]), stdin);
            ques[i].options[j][strcspn(ques[i].options[j], "\n")] = 0;
        }

        printf("\nEnter the correct answer for question %d (1-%d): ", i+1, 4);
        scanf("%d", &ques[i].correctAnswer);
        getchar(); 
    }
}

// Function to count score
void calScore(struct Question *ques, int numQues, int *score) {
    int i, j, answer;
    char option;
    for (i = 0; i < numQues; i++) {
        printf("\nQuestion %d:\n", i+1);
        printf("%s\n", ques[i].question);
        for (j = 0; j < 4; j++) {
            printf("%d. %s\n", j+1, ques[i].options[j]);
        }

        printf("Enter your answer (1-4): ");
        scanf("%d", &answer);
        getchar(); 

        if (answer == ques[i].correctAnswer) {
            (*score)++;
            
        } 
    }
}
// Function to display answers
void dispAns(struct Question *ques, int numQues) {
    int i, j, answer;
    char option;
    for (i = 0; i < numQues; i++) {
        printf("\nQuestion %d:\n", i+1);
        printf("%s\n", ques[i].question);
        for (j = 0; j < 4; j++) {
            printf("%d. %s\n", j+1, ques[i].options[j]);
        }
        printf("The correct answer is option %d.\n", ques[i].correctAnswer);
    }
}
    

int main() {
    int numQues, score = 0;
    struct Question ques[100];

    printf("Enter the number of ques: ");
    scanf("%d", &numQues);
    getchar(); 

    insertQues(ques, numQues);
    calScore(ques, numQues, &score);
    printf("\nYour score: %d out of %d\n", score, numQues);


    char choice;    
    while(1){
        printf("\nDo you want to see the correct answers? (y/n): ");
        scanf(" %c", &choice);
        switch (choice) {
            case 'y':
            case 'Y':
                dispAns(ques, numQues);
                break;
            case 'n':
            case 'N':
                printf("Exiting the game. Thank you!\n");
                break;
            default:
                printf("Invalid choice.\n");
                continue;
        }
    }

    return 0;
}