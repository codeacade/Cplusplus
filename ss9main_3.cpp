#include <iostream>

int i;
std::string n1,n2;

int main (){ //find last string character and check if it is a "a"
  // new challenge - reverse letters in string given
  
  std::cout << "Enter name: ";
  std::cin >> n1;
  std::cout << "\nYou have entered >" << n1 << " / " << n2 << "< name.\n";
  for(i=0; i<n1.size(); i++){
    n2+= n1[(n1.size()) - i -1];
    std::cout << "\n - " << i << " - " << n1[i] << " / " << n2;
  }
  std::cout << "\n = " << n2;
}
