/* 
Student ID: @00194989
Filename: palindrome.cpp
Assignment: HW11: Pali           
Description: A program that examines a user-entered string to determine if it's a palindrome.  
*/ 

#include <iostream>
#include <cstring> 
using namespace std;

// Function header: checks wheather each pair of characters in the word are the same.
// If they are the same, it returns true. If not, it returns false. 
bool word_check(char str[])
{
  int len = strlen(str); 
  
  for (int i = 0; i < len; i++)
  {
    if (str[i] != str[len-i-1]) 
      return false; // returns false (if the first and the last letter of the word are not the same)  
  }
  return true; 
}
 
int main()
{
  const int SIZE = 10;
  char str[SIZE];
  
  cout << "\n\nPlease enter a word: ";
  cin >> str;
  cout << "The word you entered, '" << str;
  
  // Function call: calls the function that checks each pair of characters in the word 
  word_check(str); 
   
  if (word_check(str))
    cout << "' is a palindrome.\n";
  else 
    cout << "' is not a palindrome.\n"; 
  return 0; 
}

/*
[vtsarkov@hills cs110a]$ g++ palindrome.cpp
[vtsarkov@hills cs110a]$ ./a.out


Please enter a word: radar
The word you entered, 'radar' is a palindrome.
[vtsarkov@hills cs110a]$ ./a.out


Please enter a word: abccba
The word you entered, 'abccba' is a palindrome.
[vtsarkov@hills cs110a]$ ./a.out


Please enter a word: abcddxba
The word you entered, 'abcddxba' is not a palindrome.
[vtsarkov@hills cs110a]$
*/ 
  