//Neel Madala
//9/6/2023
// This code takes in a string and checks if it is a palindrome (same backwards and forwards), able to run multiple times.
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
  //intialize arrays
  char iarr[80];
  char farr[80];
  char barr[80];
  char input;
  bool stillPlaying = true;
  cout << "This program takes in a string and checks if it is a palindrome(same backwards and forwards)." <<endl;
  while (stillPlaying == true) {//Allows for multiple runs
    //clears arrays
    for (int i = 0; i < 80; i++) {
      iarr[i] = '\0';
      farr[i] = '\0';
      barr[i] = '\0';
    }
    //takes in the input
    cout << "Please input a string:" << endl;
    cin.getline(iarr, 80);
    
    cout <<iarr << endl;
    int j = 0;
    //cleans input of punctuation and spaces
    for (int i = 0; i < 80; i++) {
      if (isalnum(iarr[i])) {
	farr[j] = iarr[i];
	if (isalpha(farr[j])) {
	  tolower(farr[j]);
	}
	j++;
      }
    }
    cout <<farr<< endl;
    //enters forward string backwards
    int k = 0;
    for (int i = 79; i >= 0; i--) {
      if (isalnum(farr[i])) {
	barr[k] = farr[i];
	cout << barr[k] << endl;
	k++;
      }
    }
    cout <<barr<<endl;
    //checks if forward and backward array are the same
    if (strcmp(farr, barr) == 0) {
      cout << "Palindrome" << endl;
    }

    if (strcmp(farr, barr) !=0) {
      cout << "Not a Palindrome" << endl;
    }
    //Restart the code
    cout << "Do you wish to go again (y/n)?" <<endl;
    cin >> input;
    cin.ignore();
    //continue using
    if (input == 'y') {
      stillPlaying = true;
    }
    //Stop using
    if (input == 'n') {
      stillPlaying = false;
    }
  }
  cout << "Thanks for Using" << endl;
}
