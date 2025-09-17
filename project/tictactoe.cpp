#include <iostream>
using namespace std;

char possibleMoves(int x, int y, char board[4][4]);
char win(char board[4][4]);

int main()
{
  char done = 'n';
  char allowed = 'n';
  char turn = 'X';
  int locx = 0;
  int locy = 0;
  char board[4][4] =
    {
      {' ','1','2','3'},
      {'a',' ',' ',' '},
      {'b',' ',' ',' '},
      {'c',' ',' ',' '}
    };

  while(done=='n')
    {
      cout << "Here is the board: " << endl << endl ;
  
      for(int i = 0; i <4;i++){
	for(int j = 0; j <4; j++){
	  cout<<board[i][j] << " ";
	}
	cout<<endl;
      }

      while(allowed == 'n')
	{
	  cout << endl << "It is " << turn << "'s turn." << endl;
	  cout << "What row would you like to go into? (a,b,c) " ;
	  char row;
	  cin >> row;
  

	  cout << "What coloumn would you like to go into? (1,2,3) " ;
	  cin >> locy;

	  if(row == 'a'){
	    locx = 1;
	  }else if (row == 'b'){
	    locx = 2;
	  }else if (row == 'c'){
	    locx = 3;
	  }
	  allowed = possibleMoves(locx, locy, board);
	}

      //the new board
      cout << "You placed your piece on " << board[locx][locy] << endl << endl;
      board[locx][locy] = turn;
      for(int i = 0; i <4;i++){
	for(int j = 0; j <4; j++){
	  cout<<board[i][j] << " ";
	}
	cout<<endl;
      }

      done = win(board);
      cout << "Done = " << done << endl;

      
      //switch turns
      if (turn == 'X'){
	turn = 'O';
      }else{
	turn = 'X';
      }
    }
  return 0;
}

char possibleMoves(int x,int y, char board[4][4])
{
  if (board[x][y] == ' ')
  {
    return 'y';
  } else{
    return 'n';
  }
}

char win(char board[4][4])
{
  for(int i=1; i<5; i++)
    {
      if(board[i][1] != ' ' && board[i][1] == board[i][2] && board[i][2] == board[i][3]){
	return 'y';
      }
      if(board[1][i] != ' ' && board[1][i] == board[2][i] && board[2][i] == board[3][i]){
        return 'y';
      }
    }
  return 'n';
}
