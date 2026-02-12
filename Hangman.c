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
char target_word[] = "HUNDREDS OF BEAVERS";
int attempts_count = 0;

// Output module
void Output_text(char show_these_letters[]) {

    for (int letter_index_for_target_word = 0; target_word[letter_index_for_target_word] != '\0'; letter_index_for_target_word++) {
        
        // check if letter exists
        int is_letter_present = 0; 
        for (int letter_index_for_show_these_letters = 0; show_these_letters[letter_index_for_show_these_letters] != '\0'; letter_index_for_show_these_letters++) {
            if (target_word[letter_index_for_target_word] == show_these_letters[letter_index_for_show_these_letters]) {
                printf("%c ", target_word[letter_index_for_target_word]);
                is_letter_present = 1;
                break;
            }
        }
        if (!is_letter_present) {
            if (target_word[letter_index_for_target_word] == ' ') {
                printf("    ");
            }
            else {
                    printf("__ ");
            }
        }
    }


}

//string concatenation function
char* Append_letter_to_string(char str_1[], char letter) {
    int length = 0;
    for (int i = 0; str_1[i] != '\0'; i++) {
        length++;
    }
    str_1[length] = letter;
    str_1[length + 1] = '\0';
    return str_1;
}

//uppercase for letters
char Make_uppercase(char letter) {
    if (letter == 'A' || letter == 'a') { return 'A'; }
    if (letter == 'B' || letter == 'b') { return 'B'; }
    if (letter == 'C' || letter == 'c') { return 'C'; }
    if (letter == 'D' || letter == 'd') { return 'D'; }
    if (letter == 'E' || letter == 'e') { return 'E'; }
    if (letter == 'F' || letter == 'f') { return 'F'; }
    if (letter == 'G' || letter == 'g') { return 'G'; }
    if (letter == 'H' || letter == 'h') { return 'H'; }
    if (letter == 'I' || letter == 'i') { return 'I'; }
    if (letter == 'J' || letter == 'j') { return 'J'; }
    if (letter == 'K' || letter == 'k') { return 'K'; }
    if (letter == 'L' || letter == 'l') { return 'L'; }
    if (letter == 'M' || letter == 'm') { return 'M'; }
    if (letter == 'N' || letter == 'n') { return 'N'; }
    if (letter == 'O' || letter == 'o') { return 'O'; }
    if (letter == 'P' || letter == 'p') { return 'P'; }
    if (letter == 'Q' || letter == 'q') { return 'Q'; }
    if (letter == 'R' || letter == 'r') { return 'R'; }
    if (letter == 'S' || letter == 's') { return 'S'; }
    if (letter == 'T' || letter == 't') { return 'T'; }
    if (letter == 'U' || letter == 'u') { return 'U'; }
    if (letter == 'V' || letter == 'v') { return 'V'; }
    if (letter == 'W' || letter == 'w') { return 'W'; }
    if (letter == 'X' || letter == 'x') { return 'X'; }
    if (letter == 'Y' || letter == 'y') { return 'Y'; }
    if (letter == 'Z' || letter == 'z') { return 'Z'; }
}

//cheking if a letter is present in a string
int Is_letter_present(char string[], char letter) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == letter) {
            return 1;
        }
    }
    return 0;
}




int main() {

    // code for printing stuff output ig
    printf("\n\n\n\n");
    char letters_to_show[100] = "";
    int number_of_tries = 1; 
    while (number_of_tries <= 7) {
        char guessed_letter;
        Output_text(letters_to_show);
        printf("\n\n\nATTEMPT %d: \n    Enter the letter you want to use: ", number_of_tries);
        scanf(" %c", &guessed_letter);
        guessed_letter = Make_uppercase(guessed_letter);
        Append_letter_to_string(letters_to_show, guessed_letter);
        if (!Is_letter_present(target_word, guessed_letter)) {
            number_of_tries++;
        }

    }
    // letter attempt or guess the answer
    
    

}


