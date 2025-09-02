#include <iostream>
#include <cstdlib>
using namespace std;
/*
  program ranomly chooses a number
  user guesses a number
  program prints out if number is too big/small
  if it is the number, program asks player if they want to play again
*/


int main()
{
  srand(time(NULL));
  int answer = rand() % 101;
  int guess = 101;
  while (guess != answer){
    cout<< "what is your guess? ";
    cin>>guess;
    if (guess < answer){
       cout << "Too low!" << endl;
     }
    if (guess > answer){
      cout << "Too high!" <<endl;
    }
  }
  cout << "YAY!!! You gessed correctly!" << endl;
  char play;
  cout<< "Do you want to play agian?( y or n) ";
  cin>>play;
  if (play == 'y'){
    main();
  } else{
    cout << "Bye!!" << endl;
  }
  
  return 0;
}
