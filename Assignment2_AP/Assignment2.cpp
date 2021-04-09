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
	string answer1, answer2;
	string line;
	string command;

	//two-line commands use this model.
	getline(cin, command);
	if(command == "go right")
	{
		cout << "hello" << endl;
	}
	else
	{
		cout << "oops" << endl;
		return main();
	}

	
	

	/*ifstream inputFile;
	inputFile.open("assignment2GameTextFile.txt");

	if(!inputFile)
	{
		cout << "Error opening the file" << endl;
	}
	else
	{
		fileReader(inputFile);
		inputFile.close();
	}*/

	
	cout << "Enter 1 to play or to if you want to leave." << endl;
	cin >> menuChoice;

	if(menuChoice == 1)
	{
		ifstream inputFile;
		inputFile.open("assignment2GameTextFile.txt");
		fileReader(inputFile);
		inputFile.close();
		
		cout << "You are Agent Robert, an elite agent who works for a secret organization." << endl;
		cout << "Your objective is to get inside a building and hack a computer with dangerous informations." << endl;
		cout << "Ok, you just got inside of the building and you have two options, go right or go left. Which do you choose? (Enter move right or move left)" << endl;
		cout << "Woosh, you almost got caught by a guard. Now to move on to the next room, you need to solve a charade to discover the door pasword." << endl;
		cout << "The computer says: What goes up when rain comes down ? " << endl;
		cin >> answer1;
		
		if(answer1 == "umbrella")
		{
			cout << "Nice job, you leaved the room and you are now in a hall and there is a guard coming into your way. Do you want to attack him or hide? Enter either attack him or go hide." << endl;
			cout << "Ok, you knocked him out, hid his body into a locker and got inside another room." << endl;
			cout << "You hid inside a room and was able to scape without anyone seeing you." << endl;
			cout << "But it looks like you entered the wrong one and now have to scape." << endl;
			cout << "You found a touch pad with the letters: sapsdorw. As an elite agent, you see that it is an anagram. Now you need to decode it and enter the correct secret word." << endl;
			cin >> answer2;
			
			if(answer2 == "password")
			{
				cout << "Great job. Now you can see your final objective, the main computer. But in your way you see powerful lasers." << endl;
				cout << "You were able to hack into the terminal with your phone and need to solve another puzzle to get access to the computer." << endl;
				cout << "It seems that you need to find the missing number. It says: 1+4=5, 2+5=12, 3+6=21, 8+11=?." << "\nEnter the missing number now: " << endl;
				cin >> answer3;
				
				if(answer3 == 96)
				{
					cout << "Nice job, now you need to get inside the computer, but it will not be easy. You will need to decode the final puzzle now." << endl;
					cout << "The computer says: 5+3+2=151022, 9+2+4=183652, 8+6+3=482466, 5+4+5=202541, 7+2+5=?" << endl;
					cout << "Enter your answer now: ";
					cin >> answer4;

					if(answer4 == 143547)
					{
						cout << "Amazing job, you were able to hack into it and extract all the information we needed. Thank you Agent." << endl;
					}
					else
					{
						cout << "The alarm went off and you were captured by the enemies" << endl;
					}	
				}
				else
				{
					
				}
			}
			else
			{
				cout << "Try again" << endl;
				
			}
			
		}
		else
		{
			cout << "try again" << endl;
		}
	}
	else if(menuChoice == 2)
	{
		
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
		//numRead++;
	}
	cout << endl;
};