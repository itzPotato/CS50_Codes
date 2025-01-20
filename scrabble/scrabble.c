#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    // printf("%i\n", score1);

    // use arrays to define scores for each letter? something like points[26].
    // but then how do you define points[0] = 65 and then again say the letter a = x points
    // what about uppercase and lower case - if conditional?
}

int compute_score(string word)
{
    // define each letter and it's score value
    //  break up the word using a for loop
    //  input syntax such as ignoring other characters like: ?!-_
    //  Capital letters == small letters(converting)
    int score = 0;

    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            word[i] = tolower(word[i]);
            score += points[word[i] - 'a'];
        }
        else if (islower(word[i]))
        {
            score += points[word[i] - 'a'];
        }
    }
    return score;
}
