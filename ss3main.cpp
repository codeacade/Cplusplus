#include <iostream>
#include <fstream>
#include <conio.h>

int i=0,row=0,key1;
std::string sarr[100];
std::string ss1;
char ch1;

int main(){ // read a.txt file and make array of strings made of file line
  std::fstream ff1;
  ff1.open("a.txt", std::ios::in);
  do{
    getline(ff1, ss1);
    sarr[i] = ss1;
    std::cout << "\nl." << i++ << "-" <<  ss1;
  }
  while(!ff1.eof());
  ff1.close();

  do{ // reading top/bottom arow keys and adjusting ROW number accordingly
    key1 = getch();
    if(key1 == 224) continue;
    if(key1 == 72) row -=1;
    if(key1 == 80) row +=1;
    std::cout <<"\n" << key1 << " - " << row;
    contin:;
  }
  while(key1!=27); // break if Esc key pressed

}
