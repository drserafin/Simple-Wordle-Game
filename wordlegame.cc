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

    std::transform(input.begin(),input.end(), input.begin(), [](unsigned char c)
    {return std::toupper(c);}); 
    //the function takes in a character and returns the uppercase version of the character
}



std::string getBibleWord(){

//TODO get a ramdon word from the bible
    return "ready"; 

}

bool isValidWord(std::string word) //function to check if the word is valid
{
    return word.length() == word_lenght && word.find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos;
}

void markMatches(std::vector<std::vector<int>> &matches, std::string guess, std::string secret_word){


    for (int =0;i < guess.word(); i++
    {

        matches[currentGuessNumber][i] = not_match;

    } 
    
    for 

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
            
            std::cout << "Please enter your guess (word length should only be 5 words)"
            std::getline(std::cin,input)
            toUpperCase(input);
    
        } while (input != "Q" && !isValid(input)) //the loop will continue to execute as long as the input is not equal to Q and the input is not valid
        
        if (input == "Q"){
            std::cout << "Quit game" std::endl;
            break;
        
        }
       
        guesses[currentGuessNumber] = input;


    }


    return 0;
}