#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
string a[3][3];
int no_of_turns=0;
int turn()
{
	if(no_of_turns%2==0)
		return 1;
	else
		return 2;
}
int input()
{
	string pos;
	cout<<"Choose postion number: ";
	cin>>pos;
	if(pos.compare("1")==0||pos.compare("2")==0||pos.compare("3")==0||pos.compare("4")==0||pos.compare("5")==0||pos.compare("6")==0||pos.compare("7")==0||pos.compare("8")==0||pos.compare("9")==0)
	{
		for(int i=0;i<3;++i)
		{
			for(int j=0;j<3;++j)
			{
				if(pos.compare(a[i][j])==0)
				{
					if(turn()==1)
					{
						a[i][j]='X';
						no_of_turns+=1;
						return 0;
					}
					else
					{
						a[i][j]='O';
						no_of_turns+=1;
						return 0;	
					}
				}
			}
		}			
	}
	else
	{
		cout<<"INVALID CHOICE\n";
		return 0;	
	}
}
int display()
{
	cout<<"*****************************************\n";
	cout<<"*\t\tTIC-TAC-TOE\t\t*\n";
	cout<<"*****************************************\n";
	cout<<"* PLAYER 1: X\t\t    PLAYER 2: O *\n";
	cout<<"* CHANCE OF PLAYER "<<turn()<<"\t\t\t*\n";
	cout<<"*\t	|   |\t\t\t*\n";
	cout<<"*\t      "<<a[0][0]<<" | "<<a[0][1]<<" | "<<a[0][2]<<"\t\t\t*\n";
	cout<<"*\t     ---|---|---\t\t*\n";
	cout<<"*\t      "<<a[1][0]<<" | "<<a[1][1]<<" | "<<a[1][2]<<"\t\t\t*\n";
	cout<<"*\t     ---|---|---\t\t*\n";
	cout<<"*\t      "<<a[2][0]<<" | "<<a[2][1]<<" | "<<a[2][2]<<"\t\t\t*\n";
	cout<<"*\t	|   |\t\t\t*\n";
	cout<<"*\t\t\t\t\t*\n";
	cout<<"*****************************************\n";
	return 0;
}
int result()
{
	if(a[0][0].compare("X")==0&&a[0][1].compare("X")==0&&a[0][2].compare("X")==0)
	{
		cout<<"PLAYER 1 WINS";
		return 0;
	}
	else if (a[1][0].compare("X")==0&&a[1][1].compare("X")==0&&a[1][2].compare("X")==0)
	{
			cout<<"PLAYER 1 WINS";
			return 0;
	}
	else if (a[2][0].compare("X")==0&&a[2][1].compare("X")==0&&a[2][2].compare("X")==0)
	{
			cout<<"PLAYER 1 WINS";
			return 0;
	}
	else if (a[0][0].compare("X")==0&&a[1][0].compare("X")==0&&a[2][0].compare("X")==0)
	{
			cout<<"PLAYER 1 WINS";
			return 0;
	}
	else if (a[0][1].compare("X")==0&&a[1][1].compare("X")==0&&a[2][1].compare("X")==0)
	{
			cout<<"PLAYER 1 WINS";
			return 0;
	}
	else if (a[0][2].compare("X")==0&&a[1][2].compare("X")==0&&a[2][2].compare("X")==0)
	{
			cout<<"PLAYER 1 WINS";
			return 0;
	}
	else if (a[0][0].compare("X")==0&&a[1][1].compare("X")==0&&a[2][2].compare("X")==0)
	{
			cout<<"PLAYER 1 WINS";
			return 0;
	}
	else if (a[0][2].compare("X")==0&&a[1][1].compare("X")==0&&a[2][0].compare("X")==0)
	{
			cout<<"PLAYER 1 WINS";
			return 0;
	}
	else if(a[0][0].compare("O")==0&&a[0][1].compare("O")==0&&a[0][2].compare("O")==0)
	{
		cout<<"PLAYER 2 WINS";
		return 0;
	}
	else if (a[1][0].compare("O")==0&&a[1][1].compare("O")==0&&a[1][2].compare("O")==0)
	{
			cout<<"PLAYER 2 WINS";
			return 0;
	}
	else if (a[2][0].compare("O")==0&&a[2][1].compare("O")==0&&a[2][2].compare("O")==0)
	{
			cout<<"PLAYER 2 WINS";
			return 0;
	}
	else if (a[0][0].compare("O")==0&&a[1][0].compare("O")==0&&a[2][0].compare("O")==0)
	{
			cout<<"PLAYER 2 WINS";
			return 0;
	}
	else if (a[0][1].compare("O")==0&&a[1][1].compare("O")==0&&a[2][1].compare("O")==0)
	{
			cout<<"PLAYER 2 WINS";
			return 0;
	}
	else if (a[0][2].compare("O")==0&&a[1][2].compare("O")==0&&a[2][2].compare("O")==0)
	{
			cout<<"PLAYER 2 WINS";
			return 0;
	}
	else if (a[0][0].compare("O")==0&&a[1][1].compare("O")==0&&a[2][2].compare("O")==0)
	{
			cout<<"PLAYER 2 WINS";
			return 0;

	}
	else if (a[0][2].compare("O")==0&&a[1][1].compare("O")==0&&a[2][0].compare("O")==0)
	{
			cout<<"PLAYER 2 WINS";
			return 0;

	}
	else if(no_of_turns<8)
	{
		return 1;
	}
	else
		{
			cout<<"DRAW";
			return 0;
		}
}
int main()
{
	int play_again=1;
	
	while(play_again)
	{
	no_of_turns=0;
	system("clear");
	a[0][0]='1';
	a[0][1]='2';
	a[0][2]='3';
	a[1][0]='4';
	a[1][1]='5';
	a[1][2]='6';
	a[2][0]='7';
	a[2][1]='8';
	a[2][2]='9';
	while(result())
	{
	display();
	turn();
	input();
	system("clear");
	}
	cout<<"\nDO YOU WANT TO PLAY AGAIN?  (YES: 1  NO: 0)   :";
	cin>>play_again;
}
	cin.get();
	return 0;
}
