/*
Palindrome
Ashley Saliasi
03/07/2022
*/
/* 
 * palindrome: checks a string to see if it is a pallindrome.
 *  
 *  First, create a clean version of the string. 
 *  	- convert all characters to lower case.
 *  	- remove all punctuation.
 * 
 *  Second, create a reverse version of the string
 *
 *  Third, compare the two strings 
 *  	- if they are the same, palindrome.
 *  	- else, not palindrome.
 *
 *  Alternate, skip Second step and compare characters on the
 *  left to characters on the right.
 *  	- if they are the same, palindrome.
 *  	- else, not palindrome.
 *  	
 */ 
#include <iostream>
// ToDo: Add include files.
#include <string>
#include <vector>
#include <cctype>
using namespace std;

// ToDo: Declare your functions and provide good comments on the prototypes.
// Function Prototypes: 
bool isPalindrome(string palindrome);
// isPalindrome passed the input string and calls all of the other functions to prepare the string.
// Once the string is cleaned, it tests if it's a palindrome.
// @param string the string to check.
// @returns true if it's a palindrome and false if not.
string removePunctuation(string sentence);
// Create a copy of the string and remove punctuation from the copy leaving the original alone.
// Use the cctype functions such as bool ispunct(char) and bool isspace(char)
// @param sentence is the string to clean
// @returns string is the cleaned string.
string convertToLower(string mixedcase);
// Returns a lowercase version of the mixedcase string.
// @param mixedcase is the string to convert.
// @returns a lowercase string.
string reverse(string input);
// Returns a reverse version of the input string.
// @param input is the string to reverse
// @returns a string with the contents that's the reverse of the input.
void display(vector<string> vstrings);
// Display the strings. Use a tab character to create the space seen on Mimir.
// @param a vector of strings to display
// Precondition: a string to be tested

bool isPalindrome (string palindrome)
{
	string noPunc = removePunctuation (palindrome); // remove punctuations
	string lowercase= convertToLower (noPunc); // turn string all lowercase
	string reverseSentence =reverse (lowercase); // reverse order of letters
	if (lowercase==reverseSentence) // check if palindrome
	{
		return true;
	}
	else 
		return false;
}

string removePunctuation (string sentence)
{
	string noPunc=""; //empty string to fill
	for (int i=0; i<sentence.length();i++)
	{
		char letter= sentence.at(i);
		if (( ispunct (letter)==false) && ( isspace(letter)==false))//built in functions
		{
			noPunc+=sentence.at(i);
		}
	}
	return noPunc;
}

string convertToLower (string mixedcase)
{
	string lowercase=""; //empty string to fill
	for (int i=0; i<mixedcase.length();i++)
	{
		lowercase+= tolower (mixedcase.at(i)); //built in function
	}
	return lowercase;
}

string reverse(string input)
{
	string reverse="";// empty string to fill
	for (int i=input.length()-1;i>=0;i--)// loop that reverses
	{
		reverse+= input.at (i);
	}
	return reverse;
}

void display(vector<string> vstrings)
{
	for (int i=0; i<vstrings.size();i++)
	{
		cout<<"\t"<< vstrings.at(i)<<endl;// display using tab
	}
}


int main() {

   // ToDo: Declare two vectors of strings to save the input strings: 
   // 1. for those that are palindromes,
   // 2. for those that are not palindromes.
vector <string> palindrome;
vector <string> notPalindrome;
string sentence;
   // ToDo: Implement a loop to read in the palindrome strings using getline
   // until the user quits. The user will enter the word "quit" to exit the 
   // loop.
 // ToDo: In the loop, call the isPalindrome function on the input string
   // and store it in the palindromes vector if true and the not palindromes
   // vector if false.
 do { // loop to get sentence and then run program to figure out if palindrome

	cout<<"Enter your palindrome or type quit:"<<endl;
	getline(cin,sentence);
	if( sentence == "quit" )
	{
		break;
	}

	if (isPalindrome(sentence)==true)
	{
		palindrome.push_back(sentence);
	}
	else 
	{
		notPalindrome.push_back(sentence);
	}

} while (sentence!="quit");

 // ToDo: After exiting the loop, print the list of palindromes under a
   // Palindromes:
   //         heading and the list that are not palindromes under a
   // Not Palindrome:
   //         heading.


   // The display function should print a tab or 8 spaces before printing
   // the string.
// display for palindrome and not palindrome

cout<< "Palindromes:"<<endl;
display(palindrome);
cout<<endl<<"NOT Palindromes:"<<endl;
display (notPalindrome);

	return 0;
}

// ToDo: Implement your functions. Remember to provide good comments on them. 
