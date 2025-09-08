#include <iostream>
#include <algorithm> // Required for std::reverse
#include <vector>
#include <cstring>
using namespace std;

int main()
{
  int len = 20;
  char str[len];
  char newstr[len];
  cin.get(str, len);
  int count = 0;
  for (int i = 0; i < len; i++){
    if (str[i] != '.' && str[i] != ',' && str[i] != ';' && str[i] != ':' && str[i] != '\0' && str[i] != ' '){
      newstr[count] = str[i];
      count++;
    }
  }
  char rvsstr[len];
  
  //for (int i =0; i<len; i++){
    
    //}
  cout<< str <<endl;
  cout << "new string: " << rvsstr << endl;
  return 0;
}
