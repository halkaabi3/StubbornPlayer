#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;

int num;
int win;

cout<<"How many rounds do you want to play?"<<endl;

cin>>num;

for(int index=0; index<num; index++){

game.newGame();
game.guessDoorC();
game.guessDoorC();

if(game.isWinner()==true)
{
win++;
}}

cout<<"You have won"<<win<<endl;






  return 0;
}
