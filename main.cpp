#include <iostream>
#include <windows.h>
#include <cstdlib>

bool devMode = false;

// this function basically sums up to numbers that are inputed by a user
void sum(int numb1, int numb2)
{
	system("CLS");
	int result = numb1 + numb2;

	// create new pointers for developer mode
	int* ptrResult = &result;
	int* ptrNumb1 = &numb1;
	int* ptrNumb2 = &numb2;

	// devmode gives you access to see the address memory of the variables
	if (devMode)
	{
		// prints out the address memory of the first number, second number and the result address memory
		std::cout << "ADDRESS MEMORY:\n1. First number: " << ptrNumb1 << "\n2. Second number: " << ptrNumb2 << "\n3. Result: " << ptrResult << std::endl << std::endl;
		// prints out the values of the first nubmer, second number and the result of the sum of those numbers
		std::cout << "VALUES:\n1. First number: " << numb1 << "\n2. Second number: " << numb2 << "\n3. Result: " << result << std::endl;
	}
	else
	{
		// prints out the values of the first nubmer, second number and the result of the sum of those numbers
		std::cout << "VALUES:\n1. First number: " << numb1 << "\n2. Second number: " << numb2 << "\n3. Result: " << result << std::endl;
	}
}

// this function basically substracts the numbers that are inputed by a user
void substract(int numb1, int numb2)
{
	system("CLS");
	int result = numb1 + numb2;

	// create new pointers for developer mode
	int* ptrResult = &result;
	int* ptrNumb1 = &numb1;
	int* ptrNumb2 = &numb2;

	// devmode gives you access to see the address memory of the variables
	if (devMode)
	{
		// prints out the address memory of the first number, second number and the result address memory
		std::cout << "ADDRESS MEMORY:\n1. First number: " << ptrNumb1 << "\n2. Second number: " << ptrNumb2 << "\n3. Result: " << ptrResult << std::endl << std::endl;
		// prints out the values of the first nubmer, second number and the result of the substraction of those numbers
		std::cout << "VALUES:\n1. First number: " << numb1 << "\n2. Second number: " << numb2 << "\n3. Result: " << result << std::endl;
	}
	else
	{
		// prints out the values of the first nubmer, second number and the result of the substraction of those numbers
		std::cout << "VALUES:\n1. First number: " << numb1 << "\n2. Second number: " << numb2 << "\n3. Result: " << result << std::endl;
	}
}

// this function basically multiplicates the numbers that are inputed by a user
void multiply(int numb1, int numb2)
{
	system("CLS");
	int result = numb1 + numb2;

	// create new pointers for developer mode
	int* ptrResult = &result;
	int* ptrNumb1 = &numb1;
	int* ptrNumb2 = &numb2;

	// devmode gives you access to see the address memory of the variables
	if (devMode)
	{
		// prints out the address memory of the first number, second number and the result address memory
		std::cout << "ADDRESS MEMORY:\n1. First number: " << ptrNumb1 << "\n2. Second number: " << ptrNumb2 << "\n3. Result: " << ptrResult << std::endl << std::endl;
		// prints out the values of the first nubmer, second number and the result of the multiplication of those numbers
		std::cout << "VALUES:\n1. First number: " << numb1 << "\n2. Second number: " << numb2 << "\n3. Result: " << result << std::endl;
	}
	else
	{
		// prints out the values of the first nubmer, second number and the result of the multiplication of those numbers
		std::cout << "VALUES:\n1. First number: " << numb1 << "\n2. Second number: " << numb2 << "\n3. Result: " << result << std::endl;
	}
}

// this function basically divides the numbers and prints out the result
void divide(int numb1, int numb2)
{
	system("CLS");
	if (numb2 != 0)
	{
		int result = numb1 + numb2;

		// create new pointers for developer mode
		int* ptrResult = &result;
		int* ptrNumb1 = &numb1;
		int* ptrNumb2 = &numb2;

		// devmode gives you access to see the address memory of the variables
		if (devMode)
		{
			// prints out the address memory of the first number, second number and the result address memory
			std::cout << "ADDRESS MEMORY:\n1. First number: " << ptrNumb1 << "\n2. Second number: " << ptrNumb2 << "\n3. Result: " << ptrResult << std::endl << std::endl;
			// prints out the values of the first nubmer, second number and the result of the division of those numbers
			std::cout << "VALUES:\n1. First number: " << numb1 << "\n2. Second number: " << numb2 << "\n3. Result: " << result << std::endl;
		}
		else
		{
			// prints out the values of the first nubmer, second number and the result of the division of those numbers
			std::cout << "VALUES:\n1. First number: " << numb1 << "\n2. Second number: " << numb2 << "\n3. Result: " << result << std::endl;
		}
	}
	else
	{
		std::cout << R"(YOU CANT DIVIDE BY "0")";

	}
}

void developerMode()
{
	// if the developer mode is true(on) the "if" instruction executes, if it doesnt the "else" instruction executes
	if (devMode)
	{
		devMode = false;
		std::cout << "DEVELOPER MODE: DEACTIVATED";
		Sleep(5000);
	}
	else
	{
		devMode = true;
		std::cout << "DEVELOPER MODE: ACTIVATED";
		Sleep(5000);
	}
}

void choose()
{
	std::string choice;

	// clears out the terminal window from any text
	system("CLS");
	printf("COMMANDS:\n- commands ~ prints out this list of commands\n- sum ~ sums up two numbers that you choose\n- substract ~ substracts two number that you choose \n- multiply ~ multiplies two numbers that you choose\n- divide ~ divides two numbers that you choose\n- devmode ~ activates or deactivates developer mode");
	printf("\nWhat do you want to do: ");
	std::cin >> choice;

	if (choice == "commands")
	{
		choose();
	}
	else if (choice == "sum")
	{
		int x, y;

		std::cout << "Type in the first number: ";
		std::cin >> x;
		std::cout << "Type in the second number: ";
		std::cin >> y;

		sum(x, y);
	}
	else if (choice == "substract")
	{
		int x, y;

		std::cout << "Type in the first number: ";
		std::cin >> x;
		std::cout << "Type in the second number: ";
		std::cin >> y;

		substract(x, y);
	}
	else if (choice == "multiply")
	{
		int x, y;

		std::cout << "Type in the first number: ";
		std::cin >> x;
		std::cout << "Type in the second number: ";
		std::cin >> y;

		multiply(x, y);
	}
	else if (choice == "divide")
	{
		int x, y;

		std::cout << "Type in the first number: ";
		std::cin >> x;
		std::cout << "Type in the second number: ";
		std::cin >> y;

		divide(x, y);
	}
	else if (choice == "devmode")
	{
		developerMode();
		choose();
	}
	else
	{
		std::cout << "There is no such command!";
		Sleep(5000);
		choose();
	}
}

int main()
{
	system("Color 0A");

	choose();
}
