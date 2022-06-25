#include <iostream>
#include <string>
using namespace std;

//make code to allow user to input a string of characters to which then would checked to see if the numbers are repeating?

int main() {
  //create variables for input and for checking
  string str1;
  string half;
  int length;
  cin>>str1;
  length = str1.length();
  length = length/2;
  int i = 0;
  int j = str1.length()-1;
  //make while loop to check and maybe add a for loop inside the while loop
  while(i<length){
    //make variable to check...
    if(str1[i]==str1[j]){
      i++;
      j=j-1;
    }

    else if(char(str1[i]-str1[j])==32){
      i++;
      j=j-1;
    }

    else if(char(str1[i]-str1[j])==-32){
      i++;
      j=j-1;
    }
    // else if();
    else{
      cout<<"\nno";
      break;
    }
  }
  if(i==length){
    cout<<"\nyes";
  }
}