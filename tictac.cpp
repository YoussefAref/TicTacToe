#include <iostream>
using namespace std;

bool repeating[10];

char tictac[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void game();

char checker();

int ContinueX=0;

int ContinueO=0;

int main()
{
    int PlayerX;

    int PlayerO;

    while (checker()==-1)
    {

        while (ContinueX==0)
        {
            cout << "Player X: which square number (1-9)? " << endl;

            cin >> PlayerX;

            if (PlayerX<0)
            {
                cout<<"GAME ENDED BY USER!"<<endl;

                return 0;

            }

            else if (PlayerX>9 || PlayerX<1)
            {

                cout <<"Invalid square selected, please try again. "<<endl;

            }

            else if (repeating[PlayerX]==false)
            {
                repeating[PlayerX]=true;

                switch (PlayerX)
                {
                case 1:
                    tictac[0][0] = 'X';
                    break;
                case 2:
                    tictac[0][1] = 'X';
                    break;
                case 3:
                    tictac[0][2] = 'X';
                    break;
                case 4:
                    tictac[1][0] = 'X';
                    break;
                case 5:
                    tictac[1][1] = 'X';
                    break;
                case 6:
                    tictac[1][2] = 'X';
                    break;
                case 7:
                    tictac[2][0] = 'X';
                    break;
                case 8:
                    tictac[2][1] = 'X';
                    break;
                case 9:
                    tictac[2][2] = 'X';
                    break;
                }
                ContinueX+=1;
            }
            else
            {
                cout <<"Square already chosen, please try again. "<<endl;
            }
        }

        ContinueX*=0;

        if (checker()=='X' || checker()=='O')
        {
            cout<<"PLAYER " << checker() << " WINS!"<<endl;

            return 0;

        }
        else if (checker()==0)
        {

            cout<<"DRAW"<<endl;

            return 0;
        }

        while (ContinueO==0)
        {
            cout << "Player O: which square number (1-9)? " << endl;

            cin >> PlayerO;

            if (PlayerO<0)
            {

                cout<<"GAME ENDED BY USER!"<<endl;

                return 0;

            }

            else if (PlayerO>9 || PlayerO<1)
            {

                cout <<"Invalid square selected, please try again. "<<endl;

            }

            else if (repeating[PlayerO]==false)
            {
                repeating[PlayerO]=true;

                switch (PlayerO)
                {

                case 1:
                    tictac[0][0] = 'O';
                    break;
                case 2:
                    tictac[0][1] = 'O';
                    break;
                case 3:
                    tictac[0][2] = 'O';
                    break;
                case 4:
                    tictac[1][0] = 'O';
                    break;
                case 5:
                    tictac[1][1] = 'O';
                    break;
                case 6:
                    tictac[1][2] = 'O';
                    break;
                case 7:
                    tictac[2][0] = 'O';
                    break;
                case 8:
                    tictac[2][1] = 'O';
                    break;
                case 9:
                    tictac[2][2] = 'O';
                    break;
                }
                ContinueO+=1;
            }
            else
            {
                cout <<"Square already chosen, please try again. "<<endl;
            }
        }

        ContinueO*=0;

        if (checker()=='X' || checker()=='O')
        {
            cout<<"PLAYER " << checker() << " WINS!"<<endl;
            return 0;
        }
        else if (checker()==0)
        {
            cout<<"DRAW"<<endl;
            return 0;
        }
    }
}

char checker()
{
    if (tictac[0][0] == tictac[0][1] && tictac[0][1] == tictac[0][2])

        return tictac[0][0];
    else if (tictac[1][0] == tictac[1][1] && tictac[1][1] == tictac[1][2])

        return tictac[1][0];
    else if (tictac[2][0] == tictac[2][1] && tictac[2][1] == tictac[2][2])

        return tictac[2][0];
    else if (tictac[0][0] == tictac[1][0] && tictac[1][0] == tictac[2][0])

        return tictac[0][0];
    else if (tictac[0][1] == tictac[1][1] && tictac[1][1] == tictac[2][1])

        return tictac[0][1];
    else if (tictac[0][2] == tictac[1][2] && tictac[1][2] == tictac[2][2])

        return tictac[0][2];
    else if (tictac[0][0] == tictac[1][1] && tictac[1][1] == tictac[2][2])

        return tictac[0][0];
    else if (tictac[0][2] == tictac[1][1] && tictac[1][1] == tictac[2][0])

        return tictac[0][2];
    else if ((tictac[0][0] == 'X' || tictac[0][0] == 'O') && (tictac[0][1] == 'X' || tictac[0][1] == 'O')
             && (tictac[0][2] == 'X' || tictac[0][2] == 'O') && (tictac[1][0] == 'X' || tictac[1][0] == 'O')
             && (tictac[1][1] == 'X' || tictac[1][1] == 'O') && (tictac[1][2] == 'X' || tictac[1][2] == 'O')
             && (tictac[2][0] == 'X' || tictac[2][0] == 'O') && (tictac[2][1] == 'X' || tictac[2][1] == 'O')
             && (tictac[2][2] == 'X' || tictac[2][2] == 'O'))

        return 0;
    else
        return -1;
}
