// Camila Castro Diaz camilacastro2
// This program calculates at theater's gross and net box office profit for a night.

#include <iostream>
using namespace std;

int main() {

    // Displaying the purpose of this program
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl;

    // Variable that are going to be used in the program.
    int movie_name, adult_tickets, child_tickets;

    // Asking the user what is the name of the movie they are watching.
    cout << "Enter the name of the movie: ";
    cin >> movie_name;

    // Asking the user how many adult tickets were sold.
    cout << "Enter the amount of adult tickets sold: ";
    cin >> adult_tickets;

    // Asking the user how many children tickets were sold.
    cout << "Enter the amount of child tickets sold: ";
    cin >> child_tickets;

    // Displaying the name of the movie.
    cout << "Movie Name: " << "" << movie_name << endl;

}
