#include <iostream>
#include <time.h>
//#include <cstdlib>

int ile, i;
double ttime;
float ftime;
clock_t start, stop;


int main(){
  std::cout << "Enter array size: ";
  std::cin >> ile;
  int* tabs = new int [ile];
  start = clock();
  for(i=0; i < ile; i++){
    *tabs = i;
    *tabs += 50;
    tabs++;
  }
  stop = clock();
  ftime = (double)(stop - start);
  std::cout << "\nTIME = " << ftime << " - END";
  delete [] tabs;

  int arra[ile];
  for(i=0; i < ile; i++){
    arra[i] = i;
    arra[i] += 50;
  }

}
