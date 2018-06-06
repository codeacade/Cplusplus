#include <iostream>
#include <fstream>
int i;
std::fstream ff1;
std::string ss1;
std::string sarr[2]; // array of strings to copy file lines

int main(){ //sizes of types
  std::cout << "\n\nVariable types and sizes:\n";
  std::cout << "\n- int : " << sizeof(int);
  std::cout << "\n- short int : " << sizeof(short int);
  std::cout << "\n- long int ; " << sizeof(long int);
  std::cout << "\n- char : " << sizeof(char);
  std::cout << "\n- float : " << sizeof(float);
  std::cout << "\n- double : " << sizeof(double);// page 83
  std::cout << "\n- fstream : " << sizeof(ff1);

  ff1.open("a.txt", std::ios::in);  // this reads a.txt content to be shown
    std::cout << "\n\nThis is content of a.txt: ";
    while(getline(ff1, ss1)){
      std::cout << "\n" << ss1;
    }
  ff1.close();

  ff1.open("a.txt", std::ios::app);  // this allows new lines to be added
    std::cout << "\n\nMake new a.txt content:\n";
    do{
      getline(std::cin, ss1);
      std::cout << "Added to a.txt: " << ss1 << "\n";
      ff1 << "\n" << ss1;
    }
    while(!ss1.empty());
    std::cout << "\nDONE!";
  ff1.close();

}


