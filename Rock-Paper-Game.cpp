#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSOR 3

using namespace std;

int main()
{
    srand((unsigned int) time(NULL));

    int player_throw = 0;
    int ai_throw = 0;
    bool draw = false;

    do
    {
        cout<<"Slect your throw."<<endl;
        cout<<"1) Rock"<<endl;
        cout<<"2) Paper"<<endl;
        cout<<"3) Scissor"<<endl;
        cout<<"Selection <<:>> ";
        cin>>player_throw;

        cout<< endl;

        ai_throw = (rand() % 3) + 1;

        if (ai_throw == ROCK)
        {
            cout<<"AI throws ROCK."<<endl;
        }
        else if (ai_throw == PAPER)
        {
            cout<<"AI throws PAPER."<<endl;
        }
        else if (ai_throw == SCISSOR)
        {
            cout<<"AI throws SCISSOR"<<endl;
        }
        
        draw = false;

        if (player_throw == ai_throw)
        {
            draw = true;
            cout<<"Draw! Play again!"<<endl;
        }
        else if (player_throw == ROCK && ai_throw == SCISSOR)
        {
            cout<<"ROCK beats SCISSOR! YOU WIN."<<endl;
        }
        else if (player_throw == ROCK && ai_throw ==PAPER)
        {
            cout<<"PAPER beats ROCK! YOU LOSE."<< endl;
        }
        else if (player_throw == PAPER && ai_throw == ROCK)
        {
            cout<<"PAPER beats ROCK! YOU WIN."<<endl;
        }
        else if (player_throw == PAPER && ai_throw == SCISSOR)
        {
            cout<<"SCISSOR beats PAPER! YOU LOSE."<<endl;
        }
        else if (player_throw == SCISSOR && ai_throw == PAPER)
        {
            cout<<"SCISSOR beats PAPER! YOU WIN."<<endl;
        }
        else if (player_throw == SCISSOR && ai_throw==ROCK)
        {
            cout<<"ROCK beats SCISSOR! YOU LOSE."<<endl;
        }
        cout<<endl;
        
        
        
        
        


    } while (draw);
    


    // rock beats scissors
    // scissor beats paper
    // paper beats rock

    return 0;
}