#include <iostream>
#include <time.h>

int arrsize;

int main(){
  std::cout << "Enter array size: \n";
  std::cin >> arrsize;
  int* arrayp;
  arrayp = new int [arrsize+1];

  std::cout << "First array address: " << arrayp << " ??\n";

  for(int i=0; i<arrsize; i++){
    std::cout << i << " - " << arrayp++ << "\n";
  }

  std::cout << "First array address: " << arrayp << " ??\n";

  delete [] arrayp;
}
