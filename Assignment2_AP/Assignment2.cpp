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
	int chances = 3;
	string answer1, answer2;
	string line;
	string command;
	string leftOrRightPuzzle;
	ifstream inputFile;
	
	//two-line commands use this model.
	/*getline(cin, command);
	if(command == "go right")
	{
		cout << "hello" << endl;
		do
		{
			cout << "noice" << endl;
			chances--;
		} while (chances > 0);
	}
	else if (command == "go left")
	{
		cout << "oops" << endl;
		return main();
	}*/

	do
	{
		cout << "Enter 1 to play or 2 to if you want to leave." << endl;
		cin >> menuChoice;

		if (menuChoice == 1)
		{
			//ifstream inputFile;  ***Use a while loop to run until the line that I want***
			//if (!inputFile)
			//{
			//	cout << "Error opening the file" << endl;
			//}
			//else
			//{
			//	fileReader(inputFile);
			//	cout << fileReader;
			//	inputFile.close();
			//} //use maybe getline to print it line by line

			cout << "You are Agent Robert, an elite agent who works for a secret organization." << endl;
			cout << "Your objective is to get inside a building and hack a computer with dangerous informations." << endl;
			cout << "Ok, you just got inside of the building and you have two options, go right or go left. \nWhich do you choose? (Enter go right or go left)" << endl;
			cin >> command;
			if (command == "go right")
			{
				cout << "Woosh, you were almost caught by a guard, but you entered a room." << endl;
				cout << "The door locked and now you're stuck, but you see in a control panel: What is full of holes but still holds water?" << endl;
				do
				{
					cin >> leftOrRightPuzzle;
					if (leftOrRightPuzzle == "sponge")
					{
						cout << "Hello" << endl;
						chances--;
					}

				} while (chances > 0);
			}
		}
		else if (menuChoice == 2)
		{
			exit(0);
		}
		else
		{
			cout << "Invalid number. Please enter either 1 or 2!" << endl;
		}
	} while (menuChoice > 2);

	cout << "Ok, now enter answer1" << endl;
	do
	{
		cin >> answer1;
		if (answer1 == "umbrella")
		{
			cout << "Nice job, you leaved the room and you are now in a hall and there is a guard coming into your way. Do you want to attack him or hide? Enter either attack him or go hide." << endl;
			cout << "Ok, you knocked him out, hid his body into a locker and got inside another room." << endl;
			cout << "You hid inside a room and was able to scape without anyone seeing you." << endl;
			cout << "But it looks like you entered the wrong one and now have to scape." << endl;
			cout << "You found a touch pad with the letters: sapsdorw. As an elite agent, you see that it is an anagram. Now you need to decode it and enter the correct secret word." << endl;
		}
		else
		{
			cout << "try again" << endl;
		}
	} while(answer1 != "umbrella");

	do
	{
		cin >> answer2;
		if (answer2 == "password")
		{
			cout << "Great job. Now you can see your final objective, the main computer. But in your way you see powerful lasers." << endl;
			cout << "You were able to hack into the terminal with your phone and need to solve another puzzle to get access to the computer." << endl;
			cout << "It seems that you need to find the missing number. It says: 1+4=5, 2+5=12, 3+6=21, 8+11=?." << "\nEnter the missing number now: " << endl;
		}
		else
		{
			cout << "Try again" << endl;

		}
	} while (answer2 != "password");

	do
	{
		cin >> answer3;
		if (answer3 == 96)
		{
			cout << "Nice job, now you need to get inside the computer, but it will not be easy. You will need to decode the final puzzle now." << endl;
			cout << "You only have 3 chances here. If you exceed this number, alarms will go off and you will be captured" << endl;
			cout << "The computer says: 5+3+2=151022, 9+2+4=183652, 8+6+3=482466, 5+4+5=202541, 7+2+5=?" << endl;
			cout << "Enter your answer now: ";
			
		}
		else
		{
			--chances;
			cout << "Wrong answer, you have " << chances << " more chances!" << endl;
		}
	} while (chances > 0);

	if(chances <= 0)
	{
		do
		{
			cout << "Would you like to go back to the main menu or close the game? (Enter 1 to go back or 2 to close the game) " << endl << endl;
			cin >> menuChoice;

			if (menuChoice == 1)
			{
				return main();
			}
			else if (menuChoice == 2)
			{
				exit(0);
			}
			else
			{
				cout << "Invalid number. Please enter either 1 or 2!" << endl;
			}
		} while (menuChoice > 2);
	}

	chances = 3;
	do
	{
		cin >> answer4;
		if (answer4 == 143547)
		{
			cout << "Amazing job, you were able to hack into it and extract all the information we needed. Thank you Agent." << endl;
		}
		else
		{
			cout << "The alarm went off and you were captured by the enemies" << endl;
			cout << "------------------GAME-OVER------------------" << endl;
			/*cout << "Would you like to try again? \nEnter 1 for yes, and 2 for no." << endl;
			cin >> menuChoice;*/
		}
	} while (chances > 0);

	if (chances <= 0)
	{
		do
		{
			cout << "Would you like to go back to the main menu or close the game? (Enter 1 to go back or 2 to close the game) " << endl << endl;
			cin >> menuChoice;

			if (menuChoice == 1)
			{
				return main();
			}
			else if (menuChoice == 2)
			{
				exit(0);
			}
			else
			{
				cout << "Invalid number. Please enter either 1 or 2!" << endl;
			}
		} while (menuChoice > 2);
	}
	
	return 0;
}

void fileReader(ifstream &someFile)
{
	string numRead;

	while(someFile >> numRead)
	{
		cout << numRead;
	}
	cout << endl;
};