#include <iostream>

int i,s1;
std::string n1,n2;

int main (){ //find last string character and check if it is a "a"
  std::cout << "Enter name: ";
  std::cin >> n1;
  std::cout << "You entered " << n1 << " name.\n";
  
  #there is below compartsion usinf both strings instead od char 'a'
  #bot use last string letter plus closing element (two elements alltogether)
  
  if(n1.substr(n1.length()-1,2) == "a") std::cout << "!!!";

}
