#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
  int randomNumber, guess, chanceLimit, endNum, startNum;
  char numChoice, chanceChoice, yesNo;
  startNum = 1;

    cout << "Welcome to the Number Guessing Game (v1.0.2)!" <<endl;
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
    cout << "[e] Custom" <<endl;
    cout << "Enter your choice (eg: a, b): ";
    cin >> numChoice;

    if (numChoice=='a')
    {
      startNum=1;
      endNum=5;
    }
    else if (numChoice=='b')
    {
      startNum=1;
      endNum=10;
    }
    else if (numChoice=='c')
    {
      startNum=1;
      endNum=20;
    }
    else if (numChoice=='d')
    {
      startNum=1;
      endNum=69;
    }
    else if (numChoice=='e')
    {
      cout << "Enter the starting number of your custom range: ";
      cin >> startNum;
      cout << "Enter the ending number of your custom range: ";
      cin >> endNum;
    }
    
    else {
      cout << "Invalid input, please re-run the game with a valid choice" << endl;
      cout << "Press enter to exit (if you are on a Windows machine)" << endl;
      return 0;
    }
    
    cout << endl << "Chances for the game" <<endl <<endl;
    cout << "[a] 1" <<endl;
    cout << "[b] 2" <<endl;
    cout << "[c] 3" <<endl;
    cout << "[d] 4" <<endl;
    cout << "[e] Custom" <<endl;
    cout << "Enter your choice (eg: a, b): ";
    cin >>chanceChoice;

    if (chanceChoice=='a')
    {
      chanceLimit=1;
    }
    else if (chanceChoice=='b')
    {
      chanceLimit=2;
    }
    else if (chanceChoice=='c')
    {
      chanceLimit=3;
    }
    else if (chanceChoice=='d')
    {
      chanceLimit=4;
    }
    else if (chanceChoice=='e')
    {
      cout << "Enter your custom chance limit: ";
      cin >> chanceLimit;
    }
    else {
      cout << "Invalid input, please re-run the game with a valid choice" << endl;
      cout << "Press enter to exit (if you are on a Windows machine)" << endl;
      return 0;
    }

    srand((unsigned) time(0));
    randomNumber = (rand() % endNum) + startNum;

    cout << endl << "Now the game starts!" <<endl;

    for ( int chances = 1; chances <= chanceLimit; chances++ )
    {
        cout<<endl<<"Enter your guess: ";
        cin>>guess;

        if (guess>endNum || guess<startNum)
        {
            cout<<"Invalid input, please enter a valid guess in the range you chose"<<endl<<"Please re-run the game"<<endl;
            break;
        }

        if (guess==randomNumber && chances<=chanceLimit)
        {
            cout<<"That was correct! You won! (Chances used: "<<chances<<"/"<<chanceLimit<<")"<<endl;
            break;
        }
        else if (guess!=randomNumber && chances<chanceLimit)
        {
            cout<<"Wrong, please retry (Chances used: "<<chances<<"/"<<chanceLimit<<")"<<endl;
        }
        else if (guess!=randomNumber && chances<=chanceLimit)
        {
            cout<<"Sorry, out of chances! You Lost! The number was: "<<randomNumber<<endl;
        }

    }
  }
  else if (yesNo=='n') {
    cout << "Closed game" <<endl;
  }
  else {
    cout << "Invalid input, please retry with 'y' or 'n'" <<endl;
  }
  cout << "Press enter to exit (if you are on a Windows machine)" << endl;
getch();
}
