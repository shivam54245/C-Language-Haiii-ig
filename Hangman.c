/*

TODO:

    ESSENTIAL:
        word list to choose from
        word input processing
        word comparing
        word showing if correct
        repeat 7?? times

    OPTIONAL:
        single player and multiplayer modes
        different modes (words, movies, shows, countries, etc)
        read from different text files for each
        wordle type stuff, like if a letter is present but not in the correct spot
        hangman drawing, maybe a actual drawing or maybe text art or something idk

*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Changable stuff
int max_attempts = 7;      //number of attempts

char *word_list[] = {      //word list having 100 words
"Sholay",
"Mother India",
"Mughal e Azam",
"Lagaan",
"Dangal",
"3 Idiots",
"Taare Zameen Par",
"Swades",
"Chak De India",
"Barfi",
"Queen",
"Bajrangi Bhaijaan",
"PK",
"Rang De Basanti",
"Zindagi Na Milegi Dobara",
"Dilwale Dulhania Le Jayenge",
"Kabhi Khushi Kabhie Gham",
"Kal Ho Naa Ho",
"Kuch Kuch Hota Hai",
"My Name Is Khan",
"Black",
"Rockstar",
"Kahaani",
"Andaz Apna Apna",
"Golmaal",
"Munna Bhai MBBS",
"Lage Raho Munna Bhai",
"Gully Boy",
"Article 15",
"Raazi",
"Stree",
"Badhaai Ho",
"Piku",
"Airlift",
"Rustom",
"Special 26",
"Baby",
"Neerja",
"Mary Kom",
"Bhaag Milkha Bhaag",
"The Lunchbox",
"Talvar",
"Haider",
"Omkara",
"Maqbool",
"Satya",
"Company",
"Singham",
"Drishyam",
"Tumbbad",
"Parched",
"Masaan",
"Udaan",
"Kai Po Che",
"Dil Chahta Hai",
"Kabir Singh",
"Padmaavat",
"Bajirao Mastani",
"Gangubai Kathiawadi",
"Sanju",
"Dhobi Ghat",
"Wake Up Sid",
"Tamasha",
"Yeh Jawaani Hai Deewani",
"Student Of The Year",
"Housefull",
"Ek Tha Tiger",
"Tiger Zinda Hai",
"War",
"Pathaan",
"Jawan",
"Don",
"Don 2",
"Ra One",
"Koi Mil Gaya",
"Krrish",
"Krrish 3",
"Kaabil",
"Guzaarish",
"Devdas",
"Hum Dil De Chuke Sanam",
"Hum Aapke Hain Koun",
"Maine Pyar Kiya",
"Dil",
"Dil To Pagal Hai",
"Mohabbatein",
"Veer Zaara",
"Fanaa",
"Parineeta",
"Saathiya",
"Taal",
"Roja",
"Bombay",
"Dil Se",
"Guru",
"Sarkar",
"Sarkar Raj",
"Paa",
"Cheeni Kum"



};


char* target_word;

//intro text
char intro_text[] = "\n\n\n\n\nHii!! This is my attempt at the recreation of a popular game known as Hangman.\n\n ***HOW TO PLAY***\n# The objective is to guess the name of the movie, with the help of cues as they are revealed each time you pick a letter to make a guess.\n# If the letter is present in the movie name then it is revealed wherever it is present. If the letter is not present you lose an attempt.\n# Once you believe you have figured out the movie name, you may go ahead and type the whole word, or just the letters left to reveal it completely, at once.\n# But remember you only have limited numbers of attempts to guess the movie name so be careful! And Enjoy, GOOD LUCK!!\n";



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

//string append function
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
char Make_uppercase_letter(char letter) {
    if (letter == 'a') { return 'A'; }
    if (letter == 'b') { return 'B'; }
    if (letter == 'c') { return 'C'; }
    if (letter == 'd') { return 'D'; }
    if (letter == 'e') { return 'E'; }
    if (letter == 'f') { return 'F'; }
    if (letter == 'g') { return 'G'; }
    if (letter == 'h') { return 'H'; }
    if (letter == 'i') { return 'I'; }
    if (letter == 'j') { return 'J'; }
    if (letter == 'k') { return 'K'; }
    if (letter == 'l') { return 'L'; }
    if (letter == 'm') { return 'M'; }
    if (letter == 'n') { return 'N'; }
    if (letter == 'o') { return 'O'; }
    if (letter == 'p') { return 'P'; }
    if (letter == 'q') { return 'Q'; }
    if (letter == 'r') { return 'R'; }
    if (letter == 's') { return 'S'; }
    if (letter == 't') { return 'T'; }
    if (letter == 'u') { return 'U'; }
    if (letter == 'v') { return 'V'; }
    if (letter == 'w') { return 'W'; }
    if (letter == 'x') { return 'X'; }
    if (letter == 'y') { return 'Y'; }
    if (letter == 'z') { return 'Z'; }
    else { return letter; }
}

char* Make_uppercase_word(char word[]) {

    static char uppercase_word[100] = "";
    for (int i = 0; word[i] != '\0'; i++) {
        Append_letter_to_string(uppercase_word, Make_uppercase_letter(word[i]));
    }
    return uppercase_word;
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

    //target word randomization
    int word_list_length = sizeof(word_list) / sizeof(word_list[0]);
    srand(time(0));
    int random_index = rand() % word_list_length;
    char* raw_target_word = word_list[random_index];
    target_word = Make_uppercase_word(raw_target_word);
    
    //initialization
    printf(intro_text);
    int attempts_count = 0;
    printf("\n\n\n\n");
    char letters_to_show[100] = " ";
    int number_of_tries = 1; 

    //main loop
    while (1) {
        //input letter prossesing
        char guessed_letter;
        Output_text(letters_to_show);
        printf("\n\n\nATTEMPT %d of %d: \n    Enter the letter you want to use: ", number_of_tries, max_attempts);
        scanf(" %c", &guessed_letter);
        guessed_letter = Make_uppercase_letter(guessed_letter);
        Append_letter_to_string(letters_to_show, guessed_letter);
        if (!Is_letter_present(target_word, guessed_letter)) {
            number_of_tries++;
        }
        

        //check to see if the game is over
        int is_game_in_progress = 0;
        for (int i = 0; target_word[i] != '\0'; i++) {
            if (!Is_letter_present(letters_to_show, target_word[i])) {
                is_game_in_progress = 1;
                break;
            }
        }
        //win condition
        if (!is_game_in_progress) {
            Output_text(letters_to_show);
            printf("\n\n\n\nYAY! YOU WON! YOU ARE AMAZING!!\n\n");
            
        }
        //lose condition
        if (number_of_tries > max_attempts) {
            printf("\n\n\n\nNOO!...YOU DIED! The movie name was %s.\n\n", target_word);
        }

        //care to play again message
        if (is_game_in_progress && number_of_tries <= max_attempts) {
            // Output_text(letters_to_show);
        }
        if (!is_game_in_progress || number_of_tries > max_attempts) {
            printf("Would you like to play again?       [Y] Yes     [N] No (Default)\n\n");
            
            char play_again_choice;
            scanf(" %c", &play_again_choice);
            if (play_again_choice == 'Y' || play_again_choice == 'y') {
                system("H1.exe");
            }
            else {
                break;
            }
        }
        
    }

    

}


