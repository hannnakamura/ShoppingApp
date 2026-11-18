//////////////////////////////
///Done By Jamie O'Carroll////
/////////k00328703///////////

#include "CItem.h"

// initialises the item object with default values
CItem::CItem()
{
	m_Code = 0; 
	m_Description = "";
	m_Price = 0.0;
	m_DiscountRate = 0.0;

}
// initialises the item object with a code and description
// price and discount rate are set to default values
CItem::CItem(int code, string description)
{
	m_Code = code; 
	m_Description = description;
	m_Price = 0.0;
	m_DiscountRate = 0.0;
}

//creates an item object with all the information provided
CItem::CItem(int code, string description, double price, double discountRate)
{
		m_Code = code;
		m_Description = description;
		m_Price = price;
		m_DiscountRate = discountRate;
}

// sets the price of the item
void CItem::SetPrice(double price)
{
	m_Price = price;
}

// sets the discount rate of the item 
// in decimal form, e.g., 0.2 for 20%
void CItem::SetDiscountRate(double discountRate) 
{
	m_DiscountRate = discountRate;
}

// returns item code
int CItem::GetCode()
{
	return m_Code;
}

// returns item description
string CItem::GetDescription()
{
	return m_Description;
}

// returns item price before discount is applied
double CItem::GetPrice()
{
	return m_Price;
}

// returns discount rate
double CItem::GetDiscountRate()
{
	return m_DiscountRate; // in decimal form, e.g., 0.2 for 20%
}

// checks if the code matches an items code
bool CItem::HasCode(int searchCode)
{
	if (m_Code == searchCode)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

// displays all items in the prompt
void CItem::display(void)
{
	cout << m_Code << "  " 
		<< m_Description << "  " 
		<< m_Price << "  " 
		<< m_DiscountRate << endl;
	//try to see if the fix below is better for the display : by dan
	/*cout << left << setw(8) << m_Code
		<< setw(25) << m_Description
		<< right << fixed << setprecision(2)
		<< setw(10) << m_Price
		<< setw(12) << m_DiscountRate << "%" << endl;*/
}

// calculates and returns the items discounted price based on the discounted price
double CItem::GetDiscountedPrice(void)
{
	return m_Price * (1 - m_DiscountRate)	;
}
