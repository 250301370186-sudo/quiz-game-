#include <stdio.h>

int main() {
    char answer;
    int score = 0;
    
    printf("\n*******************************************\n");
    printf("*   WELCOME TO C PROGRAMMING QUIZ!       *\n");
    printf("*******************************************\n\n");
    
    // Question 1
    printf("Question 1: What does '%%d' represent in printf()?\n");
    printf("A) Double\n");
    printf("B) Decimal/Integer\n");
    printf("C) Character\n");
    printf("D) String\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    
    if(answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B\n\n");
    }
    
    // Question 2
    printf("Question 2: What is the correct way to declare a float?\n");
    printf("A) float x = 5.5;\n");
    printf("B) float x = 5.5f;\n");
    printf("C) Both A and B\n");
    printf("D) decimal x = 5.5;\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    
    if(answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C\n\n");
    }
    
    // Question 3
    printf("Question 3: Which operator is used for assignment?\n");
    printf("A) ==\n");
    printf("B) =\n");
    printf("C) !=\n");
    printf("D) :\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    
    if(answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B\n\n");
    }
    
    // Question 4
    printf("Question 4: What does 'scanf()' function do?\n");
    printf("A) Prints output\n");
    printf("B) Takes input from user\n");
    printf("C) Clears screen\n");
    printf("D) Calculates values\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    
    if(answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B\n\n");
    }
    
    // Question 5
    printf("Question 5: What is the output of: 5 + 3 * 2 ?\n");
    printf("A) 16\n");
    printf("B) 11\n");
    printf("C) 13\n");
    printf("D) 10\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    
    if(answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is B\n\n");
    }
    
    // Question 6
    printf("Question 6: Which loop checks condition at the end?\n");
    printf("A) for loop\n");
    printf("B) while loop\n");
    printf("C) do-while loop\n");
    printf("D) if loop\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    
    if(answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C\n\n");
    }
    
    // Display final score
    printf("==========================================\n");
    printf("QUIZ COMPLETED!\n");
    printf("==========================================\n");
    printf("Your score: %d out of 6\n", score);
    
    if(score == 6) {
        printf("Perfect! Excellent work!\n");
    } else if(score >= 4) {
        printf("Good job!\n");
    } else {
        printf("Keep practicing!\n");
    }
    
    return 0;
}