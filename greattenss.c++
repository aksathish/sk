#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() 
{
int counter = 1;
int num;
int largest = 0;
int seclargest = 0;

while ( counter <= 10 ) // Begin 1st while loop
{
	 cout << "Please enter a number from the keyboard.\n" << endl; // Prompt user to enter a number from the keyboard
	
	 cin >> num; // Read in number entered by user
	
	 cout << "\n"; // Insert blank line
	
	 if ( num > largest ) // Begin loop to determine the largest of 10 numbers entered by user from the keyboard
		  {
	largest = num;
		  }	
	 else 
		  {
					while ( counter <= 8 )
	{	
	if ( num > seclargest )
	
						 seclargest = num;

	} // End if/else
		  } // End 2nd while
} // End 1st while

cout << "\nThe largest of the numbers entered is " << largest << ".\n" << endl; // Display the second largest number entered by user
	
cout << "\nThe second largest of the numbers entered is " << seclargest << ".\n" << endl; // Display the second largest number entered by user
	
counter++; // Advance counter by 1 for each loop
	
return 0; // Terminate program successfully

} // End main and program execution


