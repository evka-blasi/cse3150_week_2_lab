#include "parser.h"

namespace StringUtils {
	
   void parseName(const std::string& fullName, std::string* firstName, std::string* lastName) {
      size_t space = fullName.find(' ');
      if (space != std::string::npos) {
         *firstName = fullName.substr(0, space);
         *lastName = fullName.substr(space+1);
      } 
      else {
         *firstName = fullName;
         *lastName = "";
      }
   }
   std::string getUsername(const std::string& email) {
      size_t user = email.find('@');
      if (user != std::string::npos) {
         return email.substr(0, user);
      }
      else {
	 return email;
      }
   }
}
