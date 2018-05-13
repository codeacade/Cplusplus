#include <iostream>
#include <time.h>

int arrs;

int main(){
  std::cout << "Enter array size (arrs): ";
  std::cin >> arrs;

  int* tab;
  tab = new int[arrs];
  *tab = 666;

  for(int i=0; i<arrs; i++){
    tab[i] = 77+(i*i);
  }

  for(int i=0; i<arrs; i++){
    std::cout << i <<" : " << tab[i] << "\n";
  }

  for(int i=0; i<arrs; i++){
    std::cout << i <<" : " << (int)tab << " - " << *tab << " - " << tab[i] <<"\n";
    tab++;  //this rises starting address for tab array, so readings tab[i] screw!
  }

  delete [] tab;
}
