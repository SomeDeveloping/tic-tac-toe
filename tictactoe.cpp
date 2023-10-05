#include <iostream>
using namespace std;
int main () {

    int won=0;
    char a ='1', b='2', c='3', d='4', e='5', f='6', g='7', h='8', i='9';
    int rounds=0;
    char chosenCase='0';
    bool taken,endLoop=false;

    while (won==0) {
        //PLAYER1
        //display grid
        cout << a << " | " << b << " | " << c << endl;
        cout << "----------"<<endl;
        cout << d << " | " << e << " | " << f << endl;
        cout << "----------"<<endl;
        cout << g << " | " << h << " | " << i << endl;
        //ask to choose a case
        cout << "Player 1, type the number corresponding to the case you want to tick: ";
        //input and check the chosen case:
        //If the chosen case doesn't exist, inform and loop back to input
        //If the case has already been played, inform and loop back to input
        //If case correct and not played already, play it and break from the loop
        while (true) {
            cin >> chosenCase;
            switch (chosenCase) {
                case '1':
                    if (a=='X' || a=='O'){taken=true;}
                    else {a='X';endLoop=true;}
                    break;
                case '2':
                    if (b=='X' || b=='O'){taken=true;}
                    else {b='X';endLoop=true;}
                    break;
                case '3':
                    if (c=='X' || c=='O'){taken=true;}
                    else {c='X';endLoop=true;}
                    break;
                case '4':
                    if (d=='X' || d=='O'){taken=true;}
                    else {d='X';endLoop=true;}
                    break;
                case '5':
                    if (e=='X' || e=='O'){taken=true;}
                    else {e='X';endLoop=true;}
                    break;
                case '6':
                    if (f=='X' || f=='O'){taken=true;}
                    else {f='X';endLoop=true;}
                    break;
                case '7':
                    if (g=='X' || g=='O'){taken=true;}
                    else {g='X';endLoop=true;}
                    break;
                case '8':
                    if (h=='X' || h=='O'){taken=true;}
                    else {h='X';endLoop=true;}
                    break;
                case '9':
                    if (i=='X' || i=='O'){taken=true;}
                    else {i='X';endLoop=true;}
                    break;
                default:
                    cout << "The number you chose doesn't correspond to any case from the grid.\nPlease choose another number: ";
                    break;
            }
            if (endLoop==true) {
                endLoop=false;
                break;
            }
            else if (taken==true) {
                taken=false;
                cout << "The number you chose corresponds to a case that is already taken.\nPlease choose another number: ";
            }
        }

        //check win after 2 rounds
        if (rounds>=2 &&
            ((a==b&& b==c) || (d==e&& e==f) || (g==h&& h==i) ||
            (a==d&& d==g) || (b==e&& e==h) || (c==f&& f==i) ||
            (a==e&& e==i) || (g==e&& e==c))) {
        won=1;
        break;
        }

    //PLAYER2
    //display grid
    cout << a << " | " << b << " | " << c << endl;
        cout << "----------"<<endl;
        cout << d << " | " << e << " | " << f << endl;
        cout << "----------"<<endl;
        cout << g << " | " << h << " | " << i << endl;
        //ask to choose a case
        cout << "Player 2, type the number corresponding to the case you want to tick: ";
        //input and check the chosen case:
        //If the chosen case doesn't exist, inform and loop back to input
        //If the case has already been played, inform and loop back to input
        //If case correct and not played already, play it and break from the loop
        while (true) {
            cin >> chosenCase;
            switch (chosenCase) {
                case '1':
                    if (a=='X' || a=='O'){taken=true;}
                    else {a='O';endLoop=true;}
                    break;
                case '2':
                    if (b=='X' || b=='O'){taken=true;}
                    else {b='O';endLoop=true;}
                    break;
                case '3':
                    if (c=='X' || c=='O'){taken=true;}
                    else {c='O';endLoop=true;}
                    break;
                case '4':
                    if (d=='X' || d=='O'){taken=true;}
                    else {d='O';endLoop=true;}
                    break;
                case '5':
                    if (e=='X' || e=='O'){taken=true;}
                    else {e='O';endLoop=true;}
                    break;
                case '6':
                    if (f=='X' || f=='O'){taken=true;}
                    else {f='O';endLoop=true;}
                    break;
                case '7':
                    if (g=='X' || g=='O'){taken=true;}
                    else {g='O';endLoop=true;}
                    break;
                case '8':
                    if (h=='X' || h=='O'){taken=true;}
                    else {h='O';endLoop=true;}
                    break;
                case '9':
                    if (i=='X' || i=='O'){taken=true;}
                    else {i='O';endLoop=true;}
                    break;
                default:
                    cout << "The number you chose doesn't correspond to any case from the grid.\nPlease choose another number: ";
                    break;
            }
            if (endLoop==true) {
                endLoop=false;
                break;
            }
            else if (taken==true) {
                taken=false;
                cout << "The number you chose corresponds to a case that is already taken.\nPlease choose another number: ";
            }
        }
        //check win after 2 rounds
        if (rounds>=2 &&
            ((a==b&& b==c) || (d==e&& e==f) || (g==h&& h==i) ||
            (a==d&& d==g) || (b==e&& e==h) || (c==f&& f==i) ||
            (a==e&& e==i) || (g==e&& e==c))) {
        won=2;
        break;
        }


        //add 1 round
        rounds=++rounds;
    }

    if (won==1)cout<<"Player 1 won!";
    if (won==2)cout<<"Player 2 won!";
    return 0;
}
