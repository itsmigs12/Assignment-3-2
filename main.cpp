#include <iostream>
using namespace std;
void getinput(int &a, int &b, int &c); //Defining the function getinput, will recieve the address of three variables. 
//Address needed to be able to read the values stored at num1, num2, and num3

void swapvalues(int &swap1, int &swap2, int &swap3); //Defining the function swapvalues, will recieve the address of three variables.
//Will be using the same values stored in num1, num2, and num3

int main()
{
	int num1 = 0, num2 = 0, num3 = 0; //Declare and Set = 0 to initialize 3 variables
	getinput(num1, num2, num3); //Send all 3 variables to function getinput
	cout << "\nValues before swap: " << num1 << " " << num2 << " " << num3; //Displays values chosen by user
	swapvalues(num1, num2, num3); //Passes these values into the function swapvalues
	cout << "\nValues after swap: " << num1 << " " << num2 << " " << num3; //Lastly, dispalys the values of the swapped variables
	return 0;
}

void getinput(int &a, int &b, int &c) //The values of num1, num2, and num3 are passed into getinput by passing the values by address
{
	cout << "Enter 3 values to swap around: \n";
	cin >> a >> b >> c;
	//User inputs the values of num1, num2, and num3. Since we used the address of these variables, we are able to store the values directly into num1, num2, and num3
}

void swapvalues(int &swap1, int &swap2, int &swap3) //Again, the values of num are used by passing the variables by their address
{ //This allows us to continue to use the same values determined by the user
	int swapper = swap1; //Create a separate variable, swapper, to prevent duplication of values when we swap values
	swap1 = swap3; //Here, values of num1, num2, and num3 become => num3, num1, num2
	swap3 = swap2;
	swap2 = swapper;
	}