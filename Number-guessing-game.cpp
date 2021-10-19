#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
  int randomNumber, Guess, Chances, chanceLimit, endNum, startNum;
  char numChoice, chanceChoice, yesNo;
  startNum = 1;

    cout << "Welcome to the Number Guessing Game!" <<endl;
    cout << "Guess a random number between your selected range within the chances you select to win the game!" <<endl;
    cout << endl << "Project by Sampreet Roy (I use Arch Linux BTW)" <<endl <<endl;

    cout << "Are you ready to play (y/n): ";
    cin >> yesNo;
    if (yesNo=='y') {
    cout << endl << "Game settings:" <<endl <<endl;
    cout << "Number ranges for the game" <<endl <<endl;
    cout << "[a] 1 to 5" <<endl;
    cout << "[b] 1 to 10" <<endl;
    cout << "[c] 1 to 20" <<endl;
    cout << "[d] 1 to 69" <<endl;
    cout << "Enter your choice (eg: a, b): ";
    cin >> numChoice;

    switch (numChoice) {
      case 'a':
       endNum=5;
       break;
      case 'b':
       endNum=10;
       break;
      case 'c':
       endNum=20;
       break;
      case 'd':
       endNum=69;
       break;
      default:
       cout << "Invalid input" <<endl;
       return 0;
    }

    cout << endl << "Chances for the game" <<endl <<endl;
    cout << "[a] 1" <<endl;
    cout << "[b] 2" <<endl;
    cout << "[c] 3" <<endl;
    cout << "[d] 4" <<endl;
    cout << "[e] 5" <<endl;
    cout << "Enter your choice (eg: a, b): ";
    cin >>chanceChoice;

    switch (chanceChoice) {
      case 'a':
       chanceLimit=1;
       break;
      case 'b':
       chanceLimit=2;
       break;
      case 'c':
       chanceLimit=3;
       break;
      case 'd':
       chanceLimit=4;
       break;
      case 'e':
       chanceLimit=5;
       break;
      default:
       cout << "Invalid input" <<endl;
       return 0;
    }

    srand((unsigned) time(0));
    randomNumber = (rand() % endNum) + startNum;

    cout << endl << "Now the game starts!" <<endl;

    for ( Chances = 1; Chances <= chanceLimit; Chances++ )
    {
        cout<<endl<<"Enter your guess: ";
        cin>>Guess;

        if (Guess>endNum || Guess<startNum)
        {
            cout<<"Invalid input, please enter a valid guess in the range you chose"<<endl<<"Please re-run the game"<<endl;
            break;
        }

        if (Guess==randomNumber && Chances<=chanceLimit)
        {
            cout<<"That was correct! You won!"<<endl;
            break;
        }
        else if (Guess!=randomNumber && Chances<chanceLimit)
        {
            cout<<"Wrong, please retry"<<endl;
        }
        else if (Guess!=randomNumber && Chances<=chanceLimit)
        {
            cout<<"Sorry, out of guesses. You Lost. The number was "<<randomNumber<<endl;
        }

    }
  }
  else if (yesNo=='n') {
    cout << "Closed game" <<endl;
  }
  else {
    cout << "Invalid input, please retry with 'y' or 'n'" <<endl;
  }
}
