﻿#include <iostream>
#include <fstream>
#include <array>
#include "lib/words.h"
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <stdio.h> 
using namespace std;

//class Word {
//public:
//    int length;
//    string word;
//    char placeholder = '_';
//    //bool isguessed=false;
//    
//    Word(int length) {
//        //Glossare glossary=Glossary(length);
//        //int randomindex=glossary.getRandomWord();
//        //this length=length;
//        word = readWords(length);
//        srand(time(0));
//        int lengthoffile = countLinesInFile(openFileForWordsWithLenght(length));
//        int randomIndex = rand() % lengthoffile;
//        return word[randomIndex];
//    }
//    string shoutHiddenletters() {
//        for (int i = 0; i < length; i++) {
//            cout << rlaceholder << '\s';
//        }
//    }
//};

class Dictionary
{
public:
    string * content;
    int length;
    int wLength;

    Dictionary(int wLength,string *content,int length)
    {
       this->content = content;
       this->length = length;
       this->wLength = wLength;
    }


    string getRandomWord()
    {
        srand(time(0));
        int randomIndex = rand() % length;
        cout << content[randomIndex];
        return content[randomIndex];
    }

  /*  bool checkWord()
    {
        for (int i = 0; i < length; i++)
        {
            if (content[i] == word)
            {
                return true;
            }
        }
        return false;
    }*/

};


//class Game
//{
//public:
//    void play()
//    {
//        int wLength;
//        cin >> wLength;
//         string *content = readWords(wLength);
//        int length = countLinesInFile(openFileForWordsWithLenght(wLength));
//        Dictionary d = Dictionary(wLength,content,length);
//        cout << wLength;
//        cout << d.getRandomWord();
//    }
//};

int
main()
{   
    string* content = readWords(4);
    int length = countLinesInFile(openFileForWordsWithLenght(4));
    Dictionary d = Dictionary(4, content, length);
    d.getRandomWord();
    cout << d.getRandomWord();

    return 0;
}




//int enterCountOfLetters() {
//    int countOfLetters;
//    while (true) {
//        cout << "\t\t\t\t\t \033[1;34m Enter the NUMBER from 4 to 7 \033[0m" << endl;
//        while (!(cin >> countOfLetters)) {
//            cout << "\t\t\t\t\t \033[1;34m Enter the NUMBER from 4 to 7 \033[0m" << endl;
//            cin.clear();
//            fflush(stdin);
//        }
//        if (countOfLetters < 4 || countOfLetters > 7)
//            cout << " \t\t\t\t\t \033[1;34m Wrong numbers of letters: \033[0m" << endl;
//        else break;
//    }
//
//    return countOfLetters;
//}
//
//
//
//
//bool ifWordIsValid(int length, string* words, string enterWord, int countOfLetters)
//{
//    for (int i = 0; i < length; i++)
//    {
//        if (enterWord == words[i].substr(0, countOfLetters))
//        {
//            return true;
//        }
//    }
//    return false;
//}
//
//string getRandomWord(int countOfLetters, int length, string* words) {
//    string randomWord;
//    srand(time(0));
//    int indexOfWord = rand() % length;
//    randomWord = words[indexOfWord];
//
//    for (int i = 0; i < countOfLetters; i++)
//    {
//        cout << " _ ";
//    }
//    cout << endl;
//    return randomWord;
//}
//
//string enterTheWord(string randomWord, int countOfLetters, int length, string* words)
//{
//    string enterWord;
//
//
//    while (true) {
//        cin >> enterWord;
//        if (ifWordIsValid(length, words, enterWord, countOfLetters))
//        {
//            break;
//        }
//        else {
//            cout << "This Word is not in library of words" << endl;
//        }
//    }
//    return enterWord;
//}
//
//
//
//void game()
//{
//    cout << "\t\t\t\t\t  \033[1;34m   Lets play the game 'HANGMAN'!\033[0m" << endl;
//    cout << " \t\t\t\t\t \033[1;34m Choose, how many letters in the word(4-7): \033[0m" << endl;
//    int countOfLetters = enterCountOfLetters();
//    int length = countLinesInFile(openFileForWordsWithLenght(countOfLetters));
//    string* words = readWords(countOfLetters);
//    string randomWord = getRandomWord(countOfLetters, length, words);
//    cout << "\t\t\t\t\t     \033[1;30m    You have 10 attempts\033[0m " << endl;
//
//
//    string enterWord;
//    for (int chance = 9; chance >= 0; chance--) {
//        enterWord = enterTheWord(randomWord, countOfLetters, length, words);
//        int  rightChars = 0;
//        string wordForChecking = randomWord;
//        for (int i = 0; i < countOfLetters; i++)
//        {
//            if (wordForChecking[i] == enterWord[i]) {
//                cout << "\033[1;32m" << randomWord[i] << "\033[0m";
//                wordForChecking[i] = '1';
//                enterWord[i] = '0';
//                rightChars++;
//            }
//            else {
//                cout << " _ ";
//            }
//        }
//        if (rightChars == countOfLetters) {
//            cout << "\t\t\t\t\t \033[1;32m   You won the Game! Congrats!\033[0m" << endl;
//            break;
//        }
//        
//        for (int i = 0; i < countOfLetters; i++) {
//            for (int j = 0; j < countOfLetters; j++)
//            {
//                if (i != j && wordForChecking[j] == enterWord[i]) {
//                    cout << endl << "\033[1;31m" << randomWord[j] << "\033[0m" << "\033[1;30m in the word on another place!\033[0m";
//                    wordForChecking[j] = '1';
//                    enterWord[i] = '0';
//                    break;
//                }
//
//            }
//        }
//
//        cout << endl << "\t\t\t\t\t    \033[1;30m        Attempts - \033[0m" << "\033[1;31m" << chance << "\033[0m" << endl;
//        if (chance == 0) {
//            cout << "\t\t\t\t\t     \033[1;31m      GAME OVER!\033[0m" << endl;
//            cout << "\t\t\t\t\t\t \033[1;31m Word was - \033[0m" << "\033[1; 30m" << randomWord << "\033[0m" << endl;
//        }
//    }
//}
//
//void startGame() {
//
//    char restartGame;
//    while (true) {
//        cout << "\t\t\t\t\t  \033[1;34m  Do u want to play again?\033[0m" << endl;
//        cout << "\t\t\t\t\t  \033[1;34m     Enter Y/y if u want.\033[0m" << endl;
//        cin >> restartGame;
//        if (restartGame == 'y' || restartGame == 'Y') {
//
//            game();
//
//        }
//        else {
//            cout << "\t\t\t\t\t\033[1;34m           Good buy!\033[0m" << endl;
//            break;
//        }
//    }
//}
//
//int main()
//{
//    game();
//    startGame();
//
//    return 0;
//}