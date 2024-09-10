// Camila Castro Diaz camilacastro2
// This program calculates at theater's gross and net box office profit for a night.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() 
{
    // Constant variables that will be used in the program.
    double adultTicketPrice = 10.00;
    double childTicketPrice = 6.00;
    double theaterPercentage = 0.20;

    // Variable that are going to be used in the program.
    string movieName;
    double adult_tickets, child_tickets;

    // Displaying the purpose of this program
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl;

    // Asking the user what is the name of the movie they are watching.
    cout << "Enter the name of the movie: ";
    getline(cin, movieName);

    // Asking the user how many adult tickets were sold; sold at $10.00.
    cout << "Enter the amount of adult tickets sold: ";
    cin >> adult_tickets;

    // Asking the user how many children tickets were sold; sold at $6.00.
    cout << "Enter the amount of child tickets sold: ";
    cin >> child_tickets;

    // Calculate the total tickets sold.
    double adultTotal = adultTicketPrice * adult_tickets; // Total adult tickets sold
    double childTotal = childTicketPrice * child_tickets; // Total child tickets sold

    // Calculate the Gross Box Office Profit.
    double grossprofit = adultTotal + childTotal;

    // Calculate the Net Box Office Profit.
    double netProfit = grossprofit * theaterPercentage;

    // Calculate the Amount Paid to the Distributor.
    double amountDistributor = grossprofit - netProfit;

    // Displaying the information and results.
    cout << "Movie Name: " << "" << movieName << "" << endl;
    cout << "\nName of the Movie: " << "" << movieName << "" << endl;
    cout << "Adult Tickets Sold: " << adult_tickets << endl;
    cout << "Child Tickets Sold: " << child_tickets << endl;
    cout << setprecision(2) << fixed << showpoint;
    cout << setw(10) << "Gross Box Office Profit: $" << grossprofit << endl;
    cout << setw(10) << "Net Box Office Profit: $" << netProfit << endl;
    cout << setw(10) << "Amount Paid to Distributor: $" << amountDistributor << endl;

    return 0;

}
