#include <iostream>

int i;
std::string n1;

int main (){ //find last string character and check if it is a "a"
  std::cout << "Enter name: ";
  std::cin >> n1;
  std::cout << "You entered " << n1 << " name.\n";
  for(i=0; i< 26; i++){
    std::cout << "\n" << i << " - " << n1[i];
  }
}
