#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void fileReader(ifstream &someFile);

int main()
{
	int menuChoice = 0;
	int answer3 = 0, answer4 = 0;

	ifstream inputFile;
	inputFile.open("assignment2GameTextFile.txt");

	if(inputFile.fail())
	{
		cout << "Error opening the file" << endl;
	}
	else
	{
		fileReader(inputFile);
		inputFile.close();
	}

	
	//output the menu and the welcome
	cin >> menuChoice;

	if(menuChoice == 1)
	{
		//output all the text until the 1st user choice.
		//get user input "go right" or "go left"
		//keep outputting lines to the screen
		/*if(answer1 == "umbrella")
		{
			//keep going with the story
			//get user answer
			if(anwer2 == "password")
			{
				//continue the story
				//cin user answer
				if(answer3 == 96)
				{
					//continue the story
					//get answer
					if(answer4 == 143547)
					{
						congratulate for winning the game and go to main menu again
					}
					else
					{
						cout << "The alarm went off and you were captured by the enemies" << endl;
						go to main menu again
				}
				else
				{
					//make the user try again
				}
			}
			else
			{
				cout << "Try again" << endl;
				//make the user try again
			}
			
		}*/
		/*else
		{
			cout << "try again" << endl;
			make the user try again
		}*/
	}
	else if(menuChoice == 2)
	{
		//close the game.
	}
	else
	{
		cout << "Please enter 1 or 2!" << endl;
	}

	
	return 0;
}

void fileReader(ifstream &someFile)
{
	int numRead;

	while(someFile >> numRead)
	{
		cout << numRead << endl;
	}
	cout << endl;
};