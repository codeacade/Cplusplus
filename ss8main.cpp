#include <iostream>
#include <time.h> //not needed anymore

int siz, s1, s2;
int arr[1000];

int fib(int n){
  return n>1? fib(n-2)+fib(n-1): 1;
}

int main(){
  std::cout << "Enter array size: \n";
  std::cin >> siz;
  s1 = 1;
  s2 = 1;
  for(int i=2; i<=siz ; i++){
    s2 = s1 + s2;
    s1 = s2 - s1;
    std::cout << i << " - " << s2 << "\n";
  }
  std::cout << "\n****" << fib(siz) << "**** \n";    // call for fib() from line8
  std::cout << "\n\n NEW \n\n";


  for(int i=0; i <8; i++){   // test for random function
    arr[i] = rand();
    std::cout << i << " - " << arr[i] << "\n";

  }
  int* w = &arr[0];   // test for pointers (wyznaczniki)
  std::cout << *(w+8) << "\n";
  std::cout << w[8] << "\n";

}
