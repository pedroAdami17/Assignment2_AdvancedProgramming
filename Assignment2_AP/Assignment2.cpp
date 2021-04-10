#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void fileReader(ifstream &someFile);

int main()
{
	int menuChoice = 0;
	int answer3 = 0, answer4 = 0; 
	int chances = 3; //set number of chances to 3.
	int lineCounter = 0; // counter for the lines in the text folder
	string answer1, answer2;
	string line;
	string command;
	ifstream inputFile;

	inputFile.open("assignment2GameTextFile.txt"); //open the text file

	if(!inputFile)
	{
		cout << "Error opening the file" << endl;
	}
	while ((lineCounter < 3) && inputFile.good())
	{
		getline(inputFile, line);
		cout << line << endl;
		lineCounter++;
	}
	//inputFile.close(); *****put it into the end of main
	
	getline(cin, command);
	if (command == "play game" && lineCounter >= 3)
	{
		inputFile.ignore();
		while ((lineCounter <= 9) && inputFile.good())
		{			
			getline(inputFile, line);
			cout << line << endl;
			lineCounter++;
		}
		
	}
	else if (command == "exit game")
	{
		cout << "ok bye" << endl;
		exit(0);
	}

	do
	{
		cin >> answer1;
		if (answer1 == "umbrella" && lineCounter >= 9)
		{
			inputFile.ignore();
			while ((lineCounter <= 16) && inputFile.good())
			{
				getline(inputFile, line);
				cout << line << endl;
				lineCounter++;
			}
		}
		else
		{
			cout << "Wrong answer! Try again" << endl;
		}
	} while(answer1 != "umbrella");

	do
	{
		cin >> answer2;
		if (answer2 == "password" && lineCounter >= 16)
		{
			inputFile.ignore();
			while ((lineCounter <= 22) && inputFile.good())
			{
				getline(inputFile, line);
				cout << line << endl;
				lineCounter++;
			}
		}
		else
		{
			cout << "Try again" << endl;
		}
	} while (answer2 != "password");

	do
	{
		cin >> answer3;
		if (answer3 == 96 && lineCounter >= 22)
		{
			inputFile.ignore();
			while ((lineCounter <= 29) && inputFile.good())
			{
				getline(inputFile, line);
				cout << line << endl;
				lineCounter++;
			}
			
		}
		else
		{
			--chances;
			cout << "Wrong answer, you have " << chances << " more chances!" << endl;
		}
	} while (answer3 != 96 && chances > 0);

	if(chances == 0)
	{
		cout << "The alarm went off and dozens of guards surrounded the room. You were captured." << endl;
		cout << "---------------------Game-Over---------------------" << endl << endl;
		exit(0);
	}

	chances = 3;
	
	do
	{
		cin >> answer4;
		if (answer4 == 143547 && lineCounter >= 26)
		{
			inputFile.ignore();
			while ((lineCounter <= 33) && inputFile.good())
			{
				getline(inputFile, line);
				cout << line << endl;
				lineCounter++;
			}
		}
		else
		{
			--chances;
			cout << "Try again. you have " << chances << " more chance(s)" << endl;
		}
	} while (chances > 0);


	
	if (chances == 0)
	{
		cout << "The alarm went off and dozens of guards surrounded the room. You were captured." << endl;
		cout << "---------------------Game-Over---------------------" << endl << endl;
		exit(0);
	}
	
	inputFile.close();
	
	return 0;
}

void fileReader(ifstream &someFile)
{
	string textRead;

	while(getline(someFile, textRead))
	{
		cout << textRead << endl;
	}
	cout << endl;
};



