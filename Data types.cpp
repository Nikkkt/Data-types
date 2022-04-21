#include <iostream>
using namespace std;

int main()
{
    //int; - Integer numbers (rus. целые числа)
    //double; - Fractional numbers (rus. дробные (вещественные) числа)
    //string; - Text (rus. текст)


    //INT
    //INT approximately from -2 * 10^9 to 2 * 10^9
    //LONG LONG INT approximately from -10^18 to 10^18
    int age = 14;
    cout << age << "\n"; // age is a variable
    cout << "age" << "\n"; // age is not a variable, it is text
    age++; // increase value by one
    cout << age << "\n"; // output of the overwritten variable


    //CONST
    const int days_in_week = 7; // variable cannot be overwritten


    //DOUBLE
    //ROUND() - rouding a number
    double cost = 123456.95;
    cout << cost << "\n";
    printf("%6.2lf\n", cost); // rouding a number or displaing the number in the form the user needs


    //STRING
    string name = "Nikita";
    cout << name << "\n\n";


    //PRACTICE 1. Calculate how many milliseconds in a year

    int days = 365; // set the number of days
    int hours = 24; // set the number of hours
    int minutes = 60; // set the number of minutes
    int secs = 60; // set the number of seconds
    long long int ml_secs = 1000; // set the number of milliseconds (with "long long int" because resutl > 2.000.000.000)

    long long int result = days * hours * minutes * secs * ml_secs; // counting the number of milliseconds 

    cout << "Result: " << result << "\n\n"; // resolt output


    //PRACTICE 2. Calculate how much money is spent on food for your animals per day/month/year

    int quantity, grams, price; // creating variables

    cout << "How many animals do you have? ";
    cin >> quantity; // entering the number of animals 

    cout << "How many grams do animals eat on average? ";
    cin >> grams; // entering the number of GRAMS the animals eat

    cout << "How much does 1 kg of feed cost? (on hryvnia) ";
    cin >> price; // entering the price per kilogram of feed

    cout << "For the day you spend: " << quantity * grams * price / 1000.0 << "\n"; // spending per day
    cout << "For the mounth you spend: from " << quantity * grams * price * 28 / 1000.0 << " to " << quantity * grams * price * 31 / 1000.0 << "\n"; // spending per month
    cout << "For the year you spend: " << quantity * grams * price * 365 / 1000.0 << "\n\n"; // spending per year


    //PRACTICE 3. Convert hryvnia to dollar, euro, bitcoin

    int hryvnia; // creating variables

    cout << "How much hryvnias do you have? ";
    cin >> hryvnia; // entering the amount of hryvnia

    cout << "it is " << hryvnia / 32.45 << " dollar\n"; // convert hryvnia to dollar 
    cout << "it is " << hryvnia / 35.65 << " euro\n"; // convert hryvnia to euro
    cout << "it is " << hryvnia / (41800 * 32.45) << " bitcoin\n"; // convert hryvnia to bitcoin
}
