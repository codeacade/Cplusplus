#include <iostream>
#include <fstream>
#include <conio.h>

int i=0,row=0,col=0,key1, rows=0;
std::string sarr[100];
std::string ss1,ss2;
char ch1;

int main(){ // read a.txt file and make array of strings made of file line
  std::fstream ff1;
  ff1.open("a.txt", std::ios::in);
  do{
    getline(ff1, ss1);
    sarr[i++] = ss1;
    //std::cout << "\nl." << i++ << "-" <<  ss1;
  }
  while(!ff1.eof());
  ff1.close();
  rows=i;

  do{  // text editing mockup HERE
    system("cls");
    for(i=0; i<rows; i++){
      ss2 = sarr[i];

      if(i == row){
          if(col > ss2.length()) col = ss2.length();
      ss2.insert(col,"_");
      }
      std::cout << i << ". " << ss2 <<"\n";
    }
    std::cout << key1 << " - " << col;
    key1 = getch(); // reading top/bottom arrow keys and adjusting ROW number

    if(key1 == 224) continue;
    if((key1 == 72)&&(row>0)) row -=1;
    if((key1 == 80)&&(row<i)) row +=1;
    if(key1 == 77) col +=1;
    if(key1 == 75) col -=1;
    contin:;
  }
  while(key1!=27); // break if Esc key pressed

}
