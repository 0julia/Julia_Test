/*
  Julia Larson
  11/2/25
  This will make a vector of students. It will ask for the student, thier name, id, and gpa. You can add, delete or read all the students by using the commands 'ADD','DELETE', or 'PRINT' respectivly. Also, you can quit with the command "quit"
  used: https://www.geeksforgeeks.org/cpp/cpp-vector-of-structs/ to learn how to transverse vector
*/

#include <iostream>
#include <cstring>    // For strcmp()
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

//Student info
struct student{
  char firstname[40];
  char lastname[40];
  int studentid;
  float gpa;
};

int main(){
  char command[20] = "";

  //define vector
  vector<student*> bigstruct;

  //while the user hasn't quit the loop...
  while(strcmp(command, "QUIT") != 0)
    {
      //figure out what they want to do
      cout << "What would you like to do?" << endl;
      cin >> command;

      //asks the user the student info when 
    if(strcmp(command, "ADD") == 0){

      student* littlestruct = new student();

      cout << "What is the student's first name?" << endl;
      cin >> littlestruct->firstname;

      cout << "What is the student's last name?" << endl;
      cin >> littlestruct->lastname;

      cout << "What is the student's ID?" << endl;
      cin >> littlestruct->studentid;

      cout << "What is the student's GPA?" << endl;
      cin >> littlestruct->gpa;

      bigstruct.push_back(littlestruct);

      //prints out the student info
    }else if(strcmp(command, "PRINT") == 0){
        for (size_t i = 0; i < bigstruct.size(); ++i) {
  	  cout << "Name: " << bigstruct[i]->firstname << " " << bigstruct[i]->lastname << ", Student ID: " << bigstruct[i]->studentid << ", Student's GPA: " << fixed << setprecision(2) << bigstruct[i]->gpa << endl;
	}
	//deletes student info
    }else if(strcmp(command, "DELETE") == 0){
      int id;
      cout << "What is the ID of the student you would like to delete?" << endl;
      cin >> id;
      auto it = bigstruct.begin();
    while (it != bigstruct.end()) {
      if ((*it)->studentid == id) {
            it = bigstruct.erase(it); // Erase the element and get a new iterator
            break; // Assuming only one element needs to be removed
        } else {
            ++it;
        }
    }
    //if the user didn't imput a valid command...
    }else if(strcmp(command, "QUIT") != 0) {
	cout << "That is not a valid command" << endl << "The valid commands are: ADD, DELETE, PRINT, or QUIT" << endl;
    }
    }
  cout << "Bye bye!";
  return 0;
}


