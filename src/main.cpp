#include <iostream>
#include <string>
#include "parser.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
   cout << "Enter full name: " << endl;
   string fullName;
   std::getline(cin, fullName);

   cout << "Enter email address: " << endl;
   string email;
   std::getline(cin, email);

   string* firstName = new string;
   string* lastName = new string;

   StringUtils::parseName(fullName, firstName, lastName);
   string username = StringUtils::getUsername(email);

   cout << "First Name: " << *firstName << endl;
   cout << "Last Name: " << *lastName << endl;
   cout << "Username : " << username << endl;

   delete firstName;
   delete lastName;

}


