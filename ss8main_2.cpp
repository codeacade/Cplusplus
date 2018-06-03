#include <iostream>
#include <cmath>

int i, twos, sum;

int avearra(int brra[], int c){
  std::cout << "Average of: ";
  for(i=0; i<c ; i++){
      sum += brra[i];
      std::cout << brra[i] << ", ";
  }
  return sum / c;
}

int main(){
  std::cout << "Enter number ot Two's: ";
  std::cin >> twos;
  int arra[twos];
  for(i=0; i< twos; i++){
    arra[i] = pow(2, i); //power function 2^i, requires <cmath>
  }
  std::cout << " equals:  " << avearra(arra,twos);

}
