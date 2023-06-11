#include <stdio.h>
#include <string.h>
#define SIZE 50

int main(){
    // Variables, Main
    char S[SIZE];

    // Receive String input from user
    printf("Enter String: ");
    fgets(S, SIZE, stdin);

    // Get length of <S>
    int length = strlen(S);
    
    // Change last character to NULL
    S[length - 1] = '\0';


    

    // Print result to terminal
    printf("Total number of characters : %lu\n", strlen(S));

    // Print each character per line
    for (int i = 0; i < strlen(S); i++) {
        printf("Charater at %d : %c\n", i, S[i]);
    }

    // End of Program message
    printf("=== This is the End of this Program ===\n");

    // Check if the last character is newline or null
    if (S[length - 1] == '\n') {
        printf("Last Character is Newline\n");
    } else if (S[length - 1] == '\0') {
        printf("Last Character is Null\n");
    }

    // End program
    return 0;
}