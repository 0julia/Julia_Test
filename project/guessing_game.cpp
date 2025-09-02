#include <iostream>
#include <cstdlib>
using namespace std;
/*
  Julia Larson
  9/2/25
  program ranomly chooses a number
  user guesses a number
  program prints out if number is too big/small
  if it is the number, program asks player if they want to play again

  Rules
  Treat your teachers and classmates with respect
  Be safe
  Use your class time well
*/


int main()
{
  int guesses = 1;
  srand(time(NULL));
  int answer = rand() % 101;
  int guess = 101;
  
  //While you haven't guesses correctly...
  while (guess != answer){
    cout<< "what is your guess? ";
    cin>>guess;
    if (guess < answer){
       cout << "Too low!" << endl;
     }
    if (guess > answer){
      cout << "Too high!" <<endl;
    }
    guesses++; 
  }
  
  //once you guessed the correct number...
  cout << "YAY!!! You gessed correctly!" << endl;
  cout << "gessed in " << guesses << " gueseses." << endl;
  
  // if you want to play again
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
