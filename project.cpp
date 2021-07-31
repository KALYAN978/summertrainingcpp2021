#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>

using namespace std;

void rules()
{
    system("cls");
    
    cout << "\t-----------------------------------------------------------------\n" << endl;
    cout << "\t\t\tRULES OF THE GAME\n";
    cout << "\t 1. Guess a number between 1 to 10 \t" << endl;
    cout << "\t 2. If you win you will get 10 times of your money that you placed for bet \t" << endl;
    cout << "\t 3. If you Guess the wrong number you lose all the betting amount that u placed\n" << endl;
    cout << "\t-------------------------------------------------------------------\n" << endl;
}

int main()
{
    int balance;
    int betamount;
    int guess;
    int dice;
    char choice;
    string playername;
    
    srand(time(0));
    cout << "\n\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
    cout << "\t\t#################                                    ######################" << endl;
    cout << "\t\t=================    CASINO NUMBER GUESSING GAME     ======================" << endl;
    cout << "\t\t#################                                    ######################" << endl;
    cout << "\t\t*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n" << endl;


    cout<<"\n\nEnter your name :";
    getline(cin, playername);
    cout<<"\n\nEnter your Deposit amount to play the game : Rs";
    cin>>balance;

    do
    {
        system("cls");
        rules();
        cout<<"\n\nWelcome!!! " << playername <<", Now you can start the game"<<"\n\n";
            cout<<"\n\nYour current balance is : Rs"<<balance<<"\n";
        do
        {
            cout<<playername<<", Please enter your betting amount that you want to bet : Rs";
            cin>>betamount;
            if(betamount > balance)
                cout<<"PLease check!!! your betamount cannot be more than your current balance\n"
                    <<"\nRe-enter your data\n";
        } while (betamount > balance);

        do
        {
            cout<<"now guess your number between 1 to 10 : ";
            cin>>guess; 
            if(guess <=0 || guess > 10)
                cout<<"Please check the number!!! It must be in between  1 to 10\n"
                    <<"\nRe-enter data\n ";  
        } while (guess <= 0 || guess > 10);

        dice = rand()%10 + 1;

        if(dice == guess)
        {
            cout<<"\n\nGreat!!! You won Rs "<<betamount * 10;
            balance = balance + betamount * 10;
        }
        else{
            cout<<"Oops!!! Sorry you Lost Rs "<<betamount<<"\n";
            balance = balance - betamount;
        }

        cout<<"\nThe winning number was :"<<dice<<"\n";
        cout<<"\n"<<playername<<", Your Remaining balance is : Rs "<<balance<<"\n";
        if(balance == 0)
        {
            cout<<"\nSorry you dont have enough balance to play the game \n";
            break;
        }
        cout<<"\nDo you want to play the game again Press(y/n)";
        cin>>choice;
    }while(choice == 'Y' || choice == 'y');

    cout<<"\n\n\n";
    cout<<"\n\t================================================================================";
    cout<<"\n\t       Thankyou for playing the game. Your balance amount is : Rs "<<balance<<"\n";
    cout<<"\n\t================================================================================";


    return 0;
}


