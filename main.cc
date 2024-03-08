#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


const int word_lenght = 5; // const indicates that the value of the variable cannot be changed
const int not_match = 0;
const int match = 2;
const int partial_match = 1;
const int num_of_guesses = 8;

void toUpperCase(std::string &input){

    std::transform(input.begin(),input.end(), input.begin(), [](unsigned char c){return std::toupper(c);});
}



std::string getBibleWord(){

    //TODO get a ramdon word from the bible
    return "ready"; 

}

bool isValidWord(std::string word) //function to check if the word is valid
{
    return word.length() == word_lenght && word.find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos;
//find_first_not_of returns std::string::npos if no character is found outside the range of the alphabet
//if there is character outside the range of the alphabet, the function returns the position of the first character that is not in the range of the alphabet

}

int main (){

    //vector named guesses
    std::vector<std::string> guesses(num_of_guesses); //vector takes in the number of guesses
    std::vector<std::vector<int>> matches(num_of_guesses);//vector holds a collection of vectors where the inner vector holds the matches for each guess
    std::string secret_word = getBibleWord();

    std::string input;
    int currentGuessNumber = 0;

    while (currentGuessNumber < num_of_guesses){

        do{ //the do-while loops executes the code block at least once and then it will repeat the loop as long as the condition is true
            
    
        } while (input != "Q" && !isValid(input))
       
        currentGuessNumber++;

    }


    return 0;
}