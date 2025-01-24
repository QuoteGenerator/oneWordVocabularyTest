#include <iostream> // Input and output
#include <string>
using namespace std; // No need for std::cout

void menu(); // Prototype
void menuProcessor(string input); // Prototype
void vocabularyTest(); // Prototype

string german_word;
string serbian_word;

int main() {
    menu();    
    return 0;
}       

void menu() {
    cout << "Vocabulary Trainer\n\n";
    cout << "Please make a selection:\n";
    cout << "(1) Add a new word\n";
    cout << "(2) Start vocabulary test\n";

    string input;
    cin >> input;
    cout << "\nYour choice: " + input + "\n";
    menuProcessor(input);
} 

void menuProcessor(string input) {
    if (input == "1") {
        cout << "\nWhich language?\n";
        cout << "(1) German\n";

        input = "0";
        cin >> input;

        if (input == "1") {
            cout << "Enter the GERMAN word you want to learn:\n";
            cin >> german_word;
            cout << "\nEnter the translation in Serbian:\n";
            cin >> serbian_word;
            cout << "\nPerfect! A new word has been added to the vocabulary!\n";
            menu();
        }
    } else if (input == "2") {
        cout << "\nThe vocabulary test is starting...\n";
        vocabularyTest();
    }
}

void vocabularyTest() {
    string answer = "";

    cout << "\nThe vocabulary test has started!!!\n";
    cout << "\n\nWhat is the correct translation for... (" + german_word + ")\n";

    cin >> answer;
    

    if (answer == serbian_word) {
        cout << "\n\nYOUR ANSWER: " + answer;
        cout << "\n\nCorrect!\nYou have passed the test!!!\n";
    } else {
        cout << "\n\nYOUR ANSWER: " + answer;
        cout << "\n\nYou have failed. :O(\n";
        cout << "\nCorrect answer: " + serbian_word;
    }
    main();
}
