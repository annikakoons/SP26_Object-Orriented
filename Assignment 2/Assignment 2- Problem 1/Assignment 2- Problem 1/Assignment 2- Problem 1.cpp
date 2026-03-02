// Assignment 2- Problem 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

// Assignment 2- Problem 1, BMI calculator

//Declare BMI meaning
string BMIMeaning(double BMI)
{
    if (BMI < 16)
        return "Severe Thinness";
    else if (BMI >= 16 && BMI < 17)
        return "Moderate Thinness";
    else if (BMI >= 17 && BMI < 18.5)
        return "Mild Thinness";
    else if (BMI >= 18.5 && BMI < 25)
        return "Normal";
    else if (BMI >= 25 && BMI < 30)
        return "Overweight";
    else if (BMI >= 30 && BMI < 35)
        return "Obese Class I";
    else if (BMI >= 35 && BMI < 40)
        return "Obese Class II";
    else
        return "Obese Class III";
}
int main()
{
    //define data structure
    struct data
    {
        string name;
        int age;
        char gender;
        int feet;
        int inches;
        int pounds;
    };

    data myperson;
 

    //prompt user input
    cout << "Please enter the following information" << endl;
    
    cout << "Name: ";
    cin >> myperson.name;

    cout << "Age: ";
    cin >> myperson.age;

    cout << "Gender Identity(M/F/NB): ";
    cin >> myperson.gender;

    cout << "Height in Feet: ";
    cin >> myperson.feet;

    cout << "Height in Inches: ";
    cin >> myperson.inches;

    cout << "Weight in Pounds: ";
    cin >> myperson.pounds;
    

    //calculate BMI
    double inches = ((myperson.feet) * 12 + myperson.inches);
    double BMI = ((703 * myperson.pounds) / ((inches)*(inches)));

    //display results
    cout << "\n\nHello " << myperson.name << endl << endl;
    cout << "You are a " << myperson.gender <<" and are " << myperson.age << " years old." << endl;
    cout << "You are currently " << myperson.feet << "'" << myperson.inches << "'' and you currently weigh " << myperson.pounds << " pounds." << endl;
    cout<<"Your BMI is " << BMI << ", which means " << BMIMeaning(BMI) <<"."<< endl;
      
        return 0;
    
}

