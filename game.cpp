#include <iostream>
#include <ctime>
#include <string>
#include <cctype>

using namespace std;

void printIntro();
void getGameNumber(string &);
void getPlayerGuess(string &);
bool compairAndCheckAnswer(const string, const string);
void playGame ();

int main(int argc, const char * argv[]) {
    
    printIntro();
    playGame ();
    cout<<endl;
    return 0;
}

//Prints Game Intro
void printIntro(){
    cout << "Welcome to my game program\n";
    cout << "I am thinking of a 3-digit number. Try to guess what it is. Here are some clues:\n\n";
    cout << "When I say: \t It means:\n\n";
    cout << "\tB \t\t\t No digit is correct\n";
    cout << "\tP \t\t\t One digit is correct but in the wrong position\n";
    cout << "\tF \t\t\t One digit is correct and in the right position\n\n";
    cout << "I have thought up a number. You have 10 guesses to get it.\n\n";
}

//Generates A Random Non-Repeating 3-Digit Number
void getGameNumber(string &gameNumber){
    srand(time(0));
    char numberHolder[10] {'0','1','2','3','4','5','6','7','8','9'};
    gameNumber.assign({numberHolder[rand ()%9 + 1], numberHolder[rand ()%9], numberHolder[rand ()%9]});
    while (gameNumber[0] == gameNumber[1] || gameNumber[0] == gameNumber[2] || gameNumber[1] == gameNumber[2]){
        gameNumber.assign({numberHolder[rand ()%9 + 1], numberHolder[rand ()%9], numberHolder[rand ()%9]});
    }
}

void getPlayerGuess(string &playerGuess){
    cin >> playerGuess;
    while(playerGuess[0] == playerGuess[1] || playerGuess[0] == playerGuess[2] || playerGuess[1] == playerGuess[2] || isalpha(playerGuess[0]) || isalpha(playerGuess[1]) || isalpha(playerGuess[2]) || playerGuess.length() < 3 || playerGuess.length() > 3){
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "INVALID INPUT! Please enter a non-repeating 3-digit number: ";
        cin >> playerGuess;
    }
}

bool compairAndCheckAnswer(const string gameNumber, const string playerNumber){
    if ((gameNumber[0]) == (playerNumber[0]) && (gameNumber[1]) == (playerNumber[1]) && (gameNumber[2]) == (playerNumber[2])){
        return true;
    }
    else if ((gameNumber[0]) == (playerNumber[0])){
        cout << "F";
        if ((gameNumber[1]) == (playerNumber[0])){
            cout << "P";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else if ((gameNumber[1]) == (playerNumber[1])){
            cout << "F";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else if ((gameNumber[1]) == (playerNumber[2])){
            cout << "P";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else {
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
    }
    else if ((gameNumber[0]) == (playerNumber[1])){
        cout << "P";
        if ((gameNumber[1]) == (playerNumber[0])){
            cout << "P";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else if ((gameNumber[1]) == (playerNumber[1])){
            cout << "F";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else if ((gameNumber[1]) == (playerNumber[2])){
            cout << "P";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else {
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
    }
    else if ((gameNumber[0]) == (playerNumber[2])){
        cout << "P";
        if ((gameNumber[1]) == (playerNumber[0])){
            cout << "P";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else if ((gameNumber[1]) == (playerNumber[1])){
            cout << "F";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else if ((gameNumber[1]) == (playerNumber[2])){
            cout << "P";
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
        else {
            if ((gameNumber[2]) == (playerNumber[0])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[1])){
                cout << "P";
            }
            else if ((gameNumber[2]) == (playerNumber[2])){
                cout << "F";
            }
        }
    }
    else if ((gameNumber[1]) == (playerNumber[0])){
        cout << "P";
        if ((gameNumber[2]) == (playerNumber[0])){
            cout << "P";
        }
        else if ((gameNumber[2]) == (playerNumber[1])){
            cout << "P";
        }
        else if ((gameNumber[2]) == (playerNumber[2])){
            cout << "F";
        }
    }
    else if ((gameNumber[1]) == (playerNumber[1])){
        cout << "F";
        if ((gameNumber[2]) == (playerNumber[0])){
            cout << "P";
        }
        else if ((gameNumber[2]) == (playerNumber[1])){
            cout << "P";
        }
        else if ((gameNumber[2]) == (playerNumber[2])){
            cout << "F";
        }
    }
    else if ((gameNumber[1]) == (playerNumber[2])){
        cout << "P";
        if ((gameNumber[2]) == (playerNumber[0])){
            cout << "P";
        }
        else if ((gameNumber[2]) == (playerNumber[1])){
            cout << "P";
        }
        else if ((gameNumber[2]) == (playerNumber[2])){
            cout << "F";
        }
    }
    else if ((gameNumber[2]) == (playerNumber[0])){
        cout << "P";
    }
    else if ((gameNumber[2]) == (playerNumber[1])){
        cout << "P";
    }
    else if ((gameNumber[2]) == (playerNumber[2])){
        cout << "F";
    }
    else{
        cout << "B";
    }
    return false;
}

void playGame (){
    string playerGuess;
    string gameNumber;
    const int maxTurns {10};
    bool isPlayingAgain {false};
    bool isGameWon {false};
    do{
        char playerAnswer{'N'};
        isPlayingAgain = false;
        getGameNumber(gameNumber);
        for(int turnCounter{1}; turnCounter<=maxTurns; turnCounter++){
            cout << endl << "Turn# " << turnCounter << " Enter your guess here: ";
            getPlayerGuess(playerGuess);
            if((compairAndCheckAnswer(gameNumber, playerGuess))){
                isGameWon = true;
                cout << "\nYou Win!" << endl;
                cout << "Would you like to play again (Y/N)?: ";
                cin >> playerAnswer;
                if (playerAnswer == 'y'  || playerAnswer == 'Y'){
                    isPlayingAgain = true;
                }
                else if (playerAnswer == 'n'  || playerAnswer == 'N'){
                    isPlayingAgain = false;
                }
                else {
                    while (playerAnswer != 'Y' || playerAnswer != 'y' || playerAnswer != 'N' || playerAnswer != 'n'){
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        cout << "INVALID INPUT! PLEASE ENTER (Y/N) OR (y/n): ";
                        cin >> playerAnswer;
                        if (playerAnswer == 'Y' || playerAnswer == 'y'){
                            isPlayingAgain = true;
                            break;
                        }
                        else if (playerAnswer == 'N' || playerAnswer == 'n'){
                            isPlayingAgain = false;
                            break;
                        }
                        else {
                            cin.clear();
                            cin.ignore(INT_MAX, '\n');
                            cout << "INVALID INPUT! PLEASE ENTER (Y/N) OR (y/n): ";
                            cin >> playerAnswer;
                            if (playerAnswer == 'Y' || playerAnswer == 'y'){
                                isPlayingAgain = true;
                                break;
                            }
                            else if (playerAnswer == 'N' || playerAnswer == 'n'){
                                isPlayingAgain = false;
                                break;
                            }
                        }
                    }
                }
                break;
            }
        }
        if (!isGameWon){
            cout << "\n\nGame Over!" << endl;
            cout << "Would you like to play again (Y/N)?: ";
            cin >> playerAnswer;
            if (playerAnswer == 'y'  || playerAnswer == 'Y'){
                isPlayingAgain = true;
            }
            else if (playerAnswer == 'n'  || playerAnswer == 'N'){
                isPlayingAgain = false;
            }
            else{
                while (playerAnswer != 'Y' || playerAnswer != 'y' || playerAnswer != 'N' || playerAnswer != 'n'){
                    cin.clear();
                    cin.ignore(INT_MAX, '\n');
                    cout << "INVALID INPUT! PLEASE ENTER (Y/N) OR (y/n): ";
                    cin >> playerAnswer;
                    if (playerAnswer == 'Y' || playerAnswer == 'y'){
                        isPlayingAgain = true;
                        break;
                    }
                    else if (playerAnswer == 'N' || playerAnswer == 'n'){
                        isPlayingAgain = false;
                        break;
                    }
                    else {
                        cin.clear();
                        cin.ignore(INT_MAX, '\n');
                        cout << "INVALID INPUT! PLEASE ENTER (Y/N) OR (y/n): ";
                        cin >> playerAnswer;
                        if (playerAnswer == 'Y' || playerAnswer == 'y'){
                            isPlayingAgain = true;
                            break;
                        }
                        else if (playerAnswer == 'N' || playerAnswer == 'n'){
                            isPlayingAgain = false;
                            break;
                        }
                    }
                }
            }
        }
    }while(isPlayingAgain);
}
