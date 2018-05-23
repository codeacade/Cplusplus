#include <iostream>
#include <time.h>
//#include <cstdlib>

int ile, i;
double ttime;
clock_t start, stop;

int main(){
  std::cout << "Enter table size: ";
  std::cin >>  ile;  // ---- works up to 400 million :)
  int* tablica;
  tablica = new int [ile];
  start = clock();
  for(i=0; i<ile; i++){
    tablica[i] = i;
    tablica[i] += 50;
  }
  stop = clock();
  ttime = (double)(stop-start);
  std::cout << "\n\nTime = " << ttime << "\n\n";

  delete [] tablica;
  //-------- POINTERS ---------
  tablica = new int [ile];
  start = clock();
  for(i=0; i<ile; i++){
    *tablica = i;
    *tablica += 50;
    tablica++;
  }
  stop = clock();
  ttime = (double)(stop-start);
  std::cout << "\n\nTime = " << ttime << "\n\n";

  delete [] tablica;
}
