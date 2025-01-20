//The Ultimate 2024 quiz
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    // Check if the number of arguments is correct and validate input
    if (argc != 2) {
        printf("Usage: ./2024quiz integer level (1, 2, or 3)\n");
        return 1; // Exit with error code
    }
    else
    {
        // Introductory messages
        printf("2024 is coming to an end. And with that, we have to celebrate all the good things and acknowledge the bad things that happend in 2024! And this quiz will help us do that.\n");
        sleep(4);

        for (int i = 0; i < 3; i++) {
            printf(".\n");
            sleep(1);
        }
        printf("Are\n");
        for (int i = 0; i < 3; i++) {
            printf(".\n");
            sleep(1);
        }
        printf("You\n");
        for (int i = 0; i < 3; i++) {
            printf(".\n");
            sleep(1);
        }
        printf("Ready?\n");
        printf("\n");
        fflush(stdout);
    }

    // Convert the argument to an integer
    int x = atoi(argv[1]);
    if (x < 1 || x > 3) {
        printf("Error: Level must be an integer between 1 and 3.\n");
        return 1; // Exit with error code
    }

    // Level 1 code, the easiest
    if (x == 1) {
        printf("You selected Level 1: The easiest level.\n");

        int score = 0;
        char answer;

        // Question 1
        printf("Question 1: Who was elected as the United States President for the 2025-2029 term?\n");
        printf("a. Joe Biden\n");
        printf("b. Kamala Harris\n");
        printf("c. Rishi Sunak\n");
        printf("d. Donald Trump\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was d.\n\n");
        }
        printf("Current Score: %d/1\n\n", score);
        sleep(2);

        // Question 2
        printf("Question 2: Which of the following was a movie released in 2024?\n");
        printf("a. Gladiator II\n");
        printf("b. Spiderman No Way Home\n");
        printf("c. Hit Man\n");
        printf("d. Ghosted\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was a.\n\n");
        }
        printf("Current Score: %d/2\n\n", score);
        sleep(2);

        // Question 3
        printf("Question 3: In which country were the Olympics hosted?\n");
        printf("a. London\n");
        printf("b. Munich\n");
        printf("c. Moscow\n");
        printf("d. Paris\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was d.\n\n");
        }
        printf("Current Score: %d/3\n\n", score);
        sleep(2);

        // Question 4
        printf("Question 4: Which two countries are currently engaged in an ongoing conflict?\n");
        printf("a. Russia and India\n");
        printf("b. India and Bangladesh\n");
        printf("c. The United States and Russia\n");
        printf("d. Russia and Ukraine\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was d.\n\n");
        }
        printf("Current Score: %d/4\n\n", score);
        sleep(2);

        // Question 5
        printf("Question 5: Which company makes the famous \"ChatGPT\"?\n");
        printf("a. Microsoft\n");
        printf("b. Apple\n");
        printf("c. Claude\n");
        printf("d. OpenAI\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was d.\n\n");
        }
        printf("Current Score: %d/5\n\n", score);

        // Final Score
        printf("Final Score: %d/5\n", score);


        if (score == 0)
        {
            printf("Did you time travel to 2025? How do you know none of these?!?!\n");
        }
        else if (score == 1 || score == 2)
        {
            printf("You need to learn your 2024!\n");
        }
        else if (score == 3 || score == 4)
        {
            printf("Not bad! You remember most of your stuff!\n");
        }
        else
        {
            printf("Whoa! You know your 2024!!!\n");
        }

    }

    // Level 2 code, the medium level
    if (x == 2) {
        printf("You selected Level 2: The medium level.\n");
            // Level 2 code, the medium level

        int score = 0;
        char answer;

        // Question 1
        printf("Question 1: Which player won the Ballon d'Or 2024?\n");
        printf("a. Vinicius Jr\n");
        printf("b. Mbappe\n");
        printf("c. Ronaldo\n");
        printf("d. Rodri\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was d.\n\n");
        }
        printf("Current Score: %d/1\n\n", score);
        sleep(2);

        // Question 2
        printf("Question 2: Which famous rapper dropped a new album in 2024?\n");
        printf("a. Playboi Carti\n");
        printf("b. Kendrick Lamar\n");
        printf("c. Ed Sheeran\n");
        printf("d. Paul Pogba\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'b' || answer == 'b') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was b.\n\n");
        }
        printf("Current Score: %d/2\n\n", score);
        sleep(2);

        // Question 3
        printf("Question 3: Which Video game was released in 2024?\n");
        printf("a. Marvel Rivals\n");
        printf("b. Fortnite: Remastered\n");
        printf("c. Valorant: The Legacy Edition\n");
        printf("d. Zelda: Breath of the Wild\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was a.\n\n");
        }
        printf("Current Score: %d/3\n\n", score);
        sleep(2);

        // Question 4
        printf("Question 4: Which artist’s tour ended as the first tour to pass $2 Billion in sales?\n");
        printf("a. Taylor Swift\n");
        printf("b. Beyoncé\n");
        printf("c. Drake\n");
        printf("d. Ed Sheeran\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was a.\n\n");
        }
        printf("Current Score: %d/4\n\n", score);
        sleep(2);

        // Question 5
        printf("Question 5: Which iPhone was released in 2024?\n");
        printf("a. iPhone 14\n");
        printf("b. iPhone 19\n");
        printf("c. iPhone 16\n");
        printf("d. iPhone 17\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'c' || answer == 'C') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was c.\n\n");
        }
        printf("Current Score: %d/5\n\n", score);

        // Final Score
        printf("Final Score: %d/5\n", score);
        if (score == 0)
        {
            printf("Did you time travel to 2025? How do you know none of these?!?!\n");
        }
        else if (score == 1 || score == 2)
        {
            printf("You need to learn your 2024!\n");
        }
        else if (score == 3 || score == 4)
        {
            printf("Not bad! You remember most of your stuff!\n");
        }
        else
        {
            printf("Whoa! You know your 2024!!!\n");
        }
    }

    // Level 3 code, the hardest
    if (x == 3) {
        // execute the code needed
        printf("You selected Level 3: The hardest level.\n");
        int score = 0;
        char answer;

        // Question 1
        printf("Question 1: Which country won the UEFA European Championship in 2024?\n");
        printf("a. Spain\n");
        printf("b. Germany\n");
        printf("c. Portugal\n");
        printf("d. France\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'a' || answer == 'A') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was a.\n\n");
        }
        printf("Current Score: %d/1\n\n", score);
        sleep(2);

        // Question 2
        printf("Question 2: Who was declared the 2024 Driver’s Champion in Formula 1?\n");
        printf("a. Lewis Hamilton\n");
        printf("b. Charles Leclerc\n");
        printf("c. Max Verstappen\n");
        printf("d. Carlos Sainz\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'c' || answer == 'C') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was c.\n\n");
        }
        printf("Current Score: %d/2\n\n", score);
        sleep(2);

        // Question 3
        printf("Question 3: Which actor won the Best Actor award from the 96th Academy Awards?\n");
        printf("a. Tom Cruise\n");
        printf("b. Brad Pitt\n");
        printf("c. Cillian Murphy\n");
        printf("d. Denzel Washington\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'c' || answer == 'C') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was c.\n\n");
        }
        printf("Current Score: %d/3\n\n", score);
        sleep(2);

        // Question 4
        printf("Question 4: Which streamer won the streamer of the year award?\n");
        printf("a. Kai Cenat\n");
        printf("b. Jynxi\n");
        printf("c. Faze Jarvis\n");
        printf("d. IShowSpeed\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was d.\n\n");
        }
        printf("Current Score: %d/4\n\n", score);
        sleep(2);

        // Question 5
        printf("Question 5: Which famous cartoon’s patent expired on January 1st of 2024?\n");
        printf("a. Oggy and The Cockroaches\n");
        printf("b. SpongeBob\n");
        printf("c. Peanuts\n");
        printf("d. Mickey Mouse\n");
        printf("Your answer: ");
        scanf(" %c", &answer);
        if (answer == 'd' || answer == 'D') {
            score++;
            printf("Correct!\n\n");
        } else {
            printf("Wrong! The correct answer was d.\n\n");
        }

        // Final Score
        printf("Final Score: %d/5\n", score);

        if (score == 0) {
            printf("Did you time travel to 2025? How do you know none of these?!?!\n");
        } else if (score == 1 || score == 2) {
            printf("You need to learn your 2024!\n");
        } else if (score == 3 || score == 4) {
            printf("Not bad! You remember most of your stuff!\n");
        } else {
            printf("Whoa! You know your 2024!!!\n");
        }

        return 0;
    }

        return 0; // Successful
}
