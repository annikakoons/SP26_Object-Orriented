// Assignment 1- Problem 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Problem 3
/*Write a C++ function, smallestIndex, that takes as parameters an int array and
its size and returns the index of the first occurrence of the smallest element in
the array.Also, write a program to test your function.
Write a program to create an int array and use the smallestIndex function
created above to return the index value of the smallest value and display it*/



//BEGIN CODE

int smallestIndex(int arr[], int size) //smallestIndex is like the machine that takes into account a given array and its size
{

 int minIndex = 0; //minIndex BOOKMARKS the smallest index

    //Begin for loop
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[minIndex]) /*if the value of the array at position i is
                                    less than the value at position 0*/
        {
            minIndex = i; //replace minimum index with new positon
        }
    }

    return minIndex; //return NEW smallest index to become the value for the smallestIndex
}

int main()
{
    //Declare variables 
    
    // Array example
    int arr[] = { 10, 6, 7, 1, 9 };
    int size = 5;
    int index = smallestIndex(arr, size); 

    //Display results
    cout << "The given array of numbers is: \nPosition 0: 10\nPosition 1: 6\nPosition 2: 7\nPosition 3: 1\nPosition 4: 9" << endl;
    cout << "The index of smallest value is at: Position " << index << endl;

    return 0;
}
