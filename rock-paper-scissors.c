#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayWelcome()
{
  printf("\n\n\n\n\n\n\t\t\t\tWelcome to the game of Rock, Paper, Scissors ... OF DOOM!\n");
  printf("\t\t\t\tInstructions: Enter R for Rock, P for Paper, and S for Scissors\n\n\n\n\n\n\n");
}

char computerChoice()
{
  int randomNumber;
  randomNumber = rand() % 3;
  if (randomNumber == 0) {
    return 'R'; // return Rock
  } else if (randomNumber == 1) {
    return 'P'; // return Paper
  } else {
    return 'S'; // return Scissors
  }
}

char playerChoice()
{
  char player;
  printf("\t\t\t\tRock, Paper, Scissors?: ");
  scanf(" %c", &player);
  return player;
}

int validateUser(char playerChoice)
{
  char possibleChoices[] = { 'R', 'P', 'S' };
  for (int i = 0; i < 3; i++) {
    if (playerChoice == possibleChoices[i]) {
      return 1;
    }
  }
  return 0;
}

const char* game(char computer, char player)
{
  if (computer == player) {
    return "Draw";
  } else if ((computer == 'R' && player == 'S') ||
             (computer == 'P' && player == 'R') ||
             (computer == 'S' && player == 'P')) {
    return "COMPUTER WINS";
  } else {
    return "PLAYER WINS";
  }
}

int main(int argc, char const *argv[])
{
  displayWelcome();
  // Choose a random number every time
  srand(time(NULL));
  char player, computer;
  int validate;
  const char* result;
  computer = computerChoice();
  player = playerChoice();
  validate = validateUser(player);
  if (validate == 0) {
    printf("\t\t\t\tExiting because you don't know how to play the game.\n");
    return 1;
  }
  result = game(computer, player);
  printf("\t\t\t\tPlayer's choice: %c | Computer's choice: %c\n\n\n\n\n", player, computer);
  printf("\t\t\t\tResult: %s\n\n\n\n\n", result);
  return 0;
}
