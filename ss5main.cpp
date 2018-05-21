#include <iostream>
int i; // declare 'i' for loop before main !!
       // this way save memory from error !!

int main(){ //sizes of types
  std::cout << "Variable types and sizes:\n";
  std::cout << "\n- int : " << sizeof(int);
  std::cout << "\n- short int : " << sizeof(short int);
  std::cout << "\n- long int ; " << sizeof(long int);
  std::cout << "\n- char : " << sizeof(char);
  std::cout << "\n- float : " << sizeof(float);
  std::cout << "\n- double : " << sizeof(double);

  int* arr;// = new int [10000];

  for(i=0; i<30; i++){
      std::cout << "\n" << i << " - " << &arr[i] << " - " << arr[i];
  }

  return i;
}
// page 83



