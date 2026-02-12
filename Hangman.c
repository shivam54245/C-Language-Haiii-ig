/*

TODO:

    ESSENTIAL:
        word list to choose from
        word input processing
        word comparing
        word showing if correct
        repeat 7?? times

    OPTIONAL:
        different modes (words, movies, shows, countries, etc)
        read from different text files for each
        wordle type stuff, like if a letter is present but not in the correct spot
        hangman drawing, maybe a actual drawing or maybe text art or something idk

*/


// test word

#include <stdio.h>
char target_word[] = "hundred";
int attempts_count = 0;

// Output module
void Output_text(char show_these_letters[]) {

    for (int letter_index_for_target_word = 0; target_word[letter_index_for_target_word] != '\0'; letter_index_for_target_word++) {
        
        // check if letter exists
        for (int letter_index_for_show_these_letters = 0; show_these_letters[letter_index_for_show_these_letters  + 1] != '\0'; letter_index_for_show_these_letters++) {
            if (target_word[letter_index_for_target_word] == show_these_letters[letter_index_for_show_these_letters]) {
                printf("%c", target_word[letter_index_for_target_word]);
            }

            else {
                    printf("| __ ");
            }
        
        }
    }

printf("|");

}



int main() {

    // code for printing stuff output ig
char letters_to_show[] = "";
   while (1) {
    char guessed_letter;
    printf("\n\n\nEnter the letter you want to use: ");
    scanf(" %c", &guessed_letter);
    char letters_to_show = letters_to_show + guessed_letter;         /// PROBLEM
    Output_text(&letters_to_show);

   }
    // letter attempt or guess the answer
    
    

}


