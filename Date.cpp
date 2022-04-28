/*
Date
Ashley Saliasi
03/08/2022
*/
#include <iostream>

using namespace std;

// Date class 
// 		Contains a date using the 
// 		All integers.
class Date {
	public:
		void output();
		// Outputs a date to cout as M/D/YYYY

		Date() { };
		// TODO: What is this?  __Default Constructor______________________
			

		Date(int mm, int dd, int yy);
		// TODO: Add comment here
		// constructor with 3 parameters
		//
		//

		bool isBefore(const Date& date);
		// TODO: Add comment here
		// checks if the date is before the expired date
		//
		//

		void set(int mm, int dd, int yy);
		// Sets the month, day and year to the given parameters

		bool is_valid();
		// Returns true if the date is valid.
	private:
		int month; 		// Month expressed as 1=JAN, 12=DEC
		int day;		// Day is 1-31
		int year;		// Year is YYYY e.g., 2018
		bool is_valid(int mm, int dd, int yyyy);
						// Returns true if the date is valid.
};

int main() {
	Date today, expires;
	int month, day, year;
	char c;

	cout << "Checking if today is past expiration date" << endl;
	cout << "Enter today's date (mm/dd/yyyy): ";
	cin >> month >> c >> day >> c >> year;

	today = Date(month, day, year);

	cout << "Enter expiration date (mm/dd/yyyy): ";
	cin >> month >> c >> day >> c >> year;

	expires.set(month, day, year); // identify invoking object	__expiration date______________

	// TODO: Tell user if the item is expired. 
    	if ( expires.isBefore(today)){
		cout << "Expired! Don't use it!" << endl;	
	}
	else 
	{
		cout << "Not Expired! It's safe to use." << endl;
	}

}

// Check date is valid
// NOTICE: validating input parameters
// @returns true if date is valid, false if it is invalid.
bool Date::is_valid(int mm, int dd, int yyyy)
{
	return mm >= 1 && mm <= 12 && dd >= 1 && dd <= 31 && yyyy > 1000;
}

// Check date is valid
// NOTICE: validating data members (instance variables)
// @returns true if date is valid, false if it is invalid.
bool Date::is_valid()
{
	return month >= 1 && month <= 12 && day >= 1 && day <= 31 && year > 1000;
}


// TODO: Implement Constructor - FINISH CODE
//
// Construct an instrance of Date
// @param - month as int is 0 - 12 
// @param - day as int is 0 - 31
// @param - year as 4 digit int: 2010
Date::Date(int mm, int dd, int yy )
{
	// TODO: Verify Date
	if (is_valid (mm,dd,yy))
	{
		month=mm;
		day=dd;
		year=yy;
	}

}

// TODO: Implement isBefore function
//
//
bool Date::isBefore(const Date& date)
{

	if ( date.year>year)
	{
		return true;
	}
	else if (date.month>month)
	{
		return true;
	}
	else if (date.day>day)
	{
		return true;
	}
	else 
	{
		return false;
	}

}

// TODO: Implement set function
void Date::set(int mm, int dd, int yy)
{

	if (is_valid (mm,dd,yy))
	{
		month=mm;
		day=dd;
		year=yy;
	}
}

// Output a date to standard out (cout) as M/D/YYY
void Date::output()
{
	cout << month << "/" << day << "/" << year;
}

