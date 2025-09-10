/*
  Julia Larson
  9/10/25
  This will read in a series of 19 or less characters
  it will print "palindrome" if the string is a palindrome and "not palindrome" if it is not
*/

#include <iostream>
#include <algorithm> // Required for std::reverse
#include <vector>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
  int len = 20;
  char str[len];
  char newstr[len];
  cin.get(str, len);
  int count = 0;

  //vis wil creat a knew streeng wifowt punkuation!!!!!!
  for (int i = 0; i < len; i++){
    if (str[i] != '.' && str[i] != ',' && str[i] != ';' && str[i] != ':' && str[i] != '(' && str[i] != ')' && str[i] != '[' && str[i] != ']' && str[i] != '/' && str[i] != ' '){
      newstr[count] = tolower(str[i]);
      count++;
    }
  }
  
  len = strlen(newstr);
  char rvsstr[len+1];
  count = 0;
  
  //mayk and reavers the streang
  for (int i =0; i <= len; i++){
    if (newstr[len-i] != '\0'){
      rvsstr[count] = newstr[len-i];
      count++;
    }
  }
  rvsstr[count] = '\0';
  if (strcmp(newstr, rvsstr) == 0){
    cout << "It is a palindrome!!!" << endl;
  }else{
    cout << "It's not a palindrome!" << endl;
  }
  return 0;
}
