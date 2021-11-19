/*5. Write a program that inputs several lines of text and uses strtok to count the total 
number of words. Assume that the words are separated either by spaces or newline 
characters.*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){

  int count=0;
  char text[100];

  cout<<"Enter text:  ";
  cin.getline(text, 100);

  char *token;
  token=strtok(text, " ");  

  while(token){
    count++;
    token=strtok(NULL, " ");
  }

  cout<<"\nWord count: "<<count;

}