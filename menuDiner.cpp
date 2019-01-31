#include <iostream>
#include <iomanip>
using namespace std;

//var
//declare an array of structs
struct menuData
{
	string name;
	double price;
	int counter = 0;
};
menuData menuItem[8];

int selectionArray [100];



//prototypes
void printMenu();
void menu();



int main()
{
	
	//print menu to the screen
	menu();
	printMenu();


}




//functions

//print menu
void printMenu()
{
	//for loop to print menu to screen
	//i for array point, j for numbered list
	//used setw to give it a clean and neat look and structure
	//split line for readability
	for (int i = 0, j = 1; i < 8; i++, j++)
	{
		cout << "[" << j << "] " << left << setw(30) << menuItem[i].name << right << setw(10) 
		<< "$ " << menuItem[i].price << endl;

	}
}

//fill the array with data using structs
void menu()
{
	menuItem[0].name = "Plain Egg";
	menuItem[1].name = "Bacon and Cheese";
	menuItem[2].name = "Muffin";
	menuItem[3].name = "French Toast";
	menuItem[4].name = "Fruit Basket";
	menuItem[5].name = "Cereal";
	menuItem[6].name = "Coffee";
	menuItem[7].name = "Tea";

	menuItem[0].price = 1.45;
	menuItem[1].price = 2.45;
	menuItem[2].price = 0.99;
	menuItem[3].price = 1.99;
	menuItem[4].price = 2.49;
	menuItem[5].price = 0.69;
	menuItem[6].price = 0.50;
	menuItem[7].price = 0.75;
}


int 
