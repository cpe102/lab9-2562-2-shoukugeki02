#include<iostream>
#include<fstream>
#include <string>
using namespace std;

int main (){
    ifstream source;
    ofstream dest;
    string textline;
     source.open("cheerbook.txt");
     dest.open("cheerbook_copy.txt" );
    dest << "-------------------- SOTUS ---------------------" << "\n";
   while(getline(source,textline))
   {
      dest << textline << endl ;
              
   
   }
      dest << "-------------------- SOTUS ---------------------";
      source.close();
      dest.close();
      return 0;

}
