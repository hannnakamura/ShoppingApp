//////////////////////////////
///Done By Jamie O'Carroll////
/////////k00328703///////////
#pragma once
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class CItem // Stores information about an item including  
			//code, description, price and discount rate
{
private:
	int m_Code; // unique identifier for the item
	string m_Description; // item description
	double m_Price; // item price
	double m_DiscountRate; // discount rate in decimal form in % 

public:
	// Constructors 
	// used to greate and initialise an item object
	CItem(void);
	CItem(int code, string description);
	CItem(int code, string description, double price, double discountRate);

	// setters
	// Used to update item information
	void SetPrice(double price);
	void SetDiscountRate(double discountRate);

	//Getters 
	// Used to retrieve item information
	int GetCode();
	string GetDescription();
	double GetPrice();
	double GetDiscountRate();

	// checks if the code matches an items code 
	bool HasCode(int searchCode);

	//Implementors
	void display(void); // displays all items in the prompt 
	
	double GetDiscountedPrice(void); // calculates and returns the items discounted 
									 //price based on the discounted price 

};