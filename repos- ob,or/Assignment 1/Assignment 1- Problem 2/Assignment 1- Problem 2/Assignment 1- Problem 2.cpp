// Assignment 1- Problem 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//problem 2
  /*
        Write a program that prompts the user to input a string.The program then uses
        the function substr to remove all the vowels from the string.For example, if str
        = "There", then after removing all the vowels, str = "Thr". After removing all the
        vowels, output the string.Your program must contain a function to remove all the
        vowels and a function to determine whether a character is a vowel */


//BEGIN CODE

// Declare bool- function to check if a character is a vowel
bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
        return true;//if the character is a vowel it will be marked as TRUE
    else
        return false; //if the character is NOT a vowel it will be marked as FALSE
}

// Begin for loop- function to remove vowels from a string
string removeVowels(string Input)
{
    for (int i = 0; i < Input.length(); i++)/*Start with an index of 0
												 add 1 and move to each character
												 stop before i becomes greater than input length*/
    {
        if (isVowel(Input[i]))//locate character at position and check if Input is a vowel
        {
            Input = Input.substr(0, i) + Input.substr(i + 1); // Remove the character at position i if vowel
            i--; // adjust index because string got shorter
        }
    }
    return Input; //return NEW Input
}

int main()
{
    //Declare variables
    string Input;

    //Prompt user input
    cout << "Please enter a word or sequence of characters: ";
    cin>>Input;   

    Input = removeVowels(Input); //Transform into Input without vowels

    //Display results
    cout << "This is your Input without vowels: " << Input << endl;

    return 0;
}

