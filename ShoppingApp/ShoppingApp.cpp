#include <iostream>
#include <string>
#include <iomanip>
#include "CItem.h"

using namespace std;
CItem itemList[5]; //before modifying array
int numItems = 0;

//////////////////////////////
//// Callback Function Prototypes ////
/////////////////////////////

// Done by Jamie O'Carroll

void DoInitializePriceList(void);   // Creates and initializes the item list
void DoDisplayFullPriceList(void);  // Displays all items currently in the list
void DoAddItemToList(void);        // Adds a new item to the list
void DoSetItemPrice(void);  // Sets the price of an item in the list
void DoSetItemDiscountRate(void);  // Sets the discount rate of an item in the list
void DoDisplayItem(void);   // Displays a specific item from the list
void DoOrderCost(void);    // Calculates the cost of an order
void DoTotalInvoice(void);  // Calculates the total invoice amount
void DoRemoveItemFromList(void); // Removes an item from the list
void DoQuit(void); // Quits the application 
int ShowMenu(void); //Lists the menu content

int main()
{


}


//Dan Allen
int ShowMenu(void)
{
	int option;

	cout << "\t 1. Initialize Price List\n";
	cout << "\t 2. Display Full Price List\n";
	cout << "\t 3. Add Item to List\n";
	cout << "\t 4. Set Item Price\n";
	cout << "\t 5. Set Item Discount Rate\n";
	cout << "\t 6. Display Item\n";
	cout << "\t 7. Order Cost\n";
	cout << "\t 8. Total Invoice\n";
	cout << "\t 9. Remove Item from List\n";
	cout << "\t 0. Quit\n";
	cout << "\t\t Select an Option:";
	cin >> option;

	return option;
}



void DoInitializePriceList(void)
{

}

void DoDisplayFullPriceList(void) //Dan Allen
{
	if (numItems == 0)
	{
		cout << "The item list is empty" << endl;
	}
	else
	{
		Displayheader();
		for (int i = 0; i < numItems; i++)
		{
			itemList[i].display();
		}
	}
}

void DoAddItemToList(void)
{

}

void DoSetItemPrice(void)
{

}

void DoSetItemDiscountRate(void)
{

}

void DoDisplayItem(void) //Dan Allen
{
	int code;
	cout << "Please enter item code: " << endl;
	cin >> code;
	for (int i = 0; i < numItems; i++)
	{
		if (itemList[i].HasCode(code))
		{
			Displayheader();
			itemList[i].display();
		}
	}
	
}

void DoOrderCost(void)
{

}

void DoTotalInvoice(void)
{

}

void DoRemoveItemFromList(void)
{

}

void DoQuit(void)
{

}

//in order to avoid writing the code multiple times
void Displayheader(void)
{
	cout << left << setw(8) << "Code" << setw(25) << "Description"
		<< right << setw(10) << "Price" << setw(13) << "Discount" << endl;
}
