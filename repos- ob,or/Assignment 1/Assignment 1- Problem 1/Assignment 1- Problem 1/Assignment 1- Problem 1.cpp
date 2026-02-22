// Assignment 1- Problem 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//Problem 1

/*Write a value - returning function, isVowel, that returns the value true if a given
character is a vowel and otherwise returns false. Write a program that prompts the
user to input a sequence of characters and outputs the numbers of vowels using
the function, isVowel, created in the step above.*/

//define bool function

bool isVowel(char ch) //is this a vowel?
{
	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y' ||
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'Y')
		return true;
	else
		return false; //if the character is a vowel it will be marked as such
}

int main()
{

	//declare and initialize variables
	string input;
	int count = 0; //need for looping through text

	//Prompt user input
	cout << "Please enter a word or sequence of characters: ";
	cin >> input;

	//run loop
	for (int i = 0; i < input.length(); i++) /*looping function where int i grows until
												reaches amount of characters in input by adding 1 */

	{
		if (isVowel(input[i]))
		{
			count++;
		}
	}

	//display results
	cout << "Total Vowels: " << count << endl;

	return 0;

}