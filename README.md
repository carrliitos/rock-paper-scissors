# Rock-Paper-Scissors

The winner of the game is decided as per the below rules:

- Rock vs Paper -> Paper wins.
- Rock vs Scissor -> Rock wins.
- Paper vs Scissor -> Scissor wins.

In this game, the user will be asked to make a choice. Based on the choices made by both the user and the computer, the 
result will be displayed, along with the choices of both the computer and the user.

## Implementation

- `main()`:
  - Declaration of variables
  - `printf()` and `scanf()` displays the content and takes user inputs. This also contains two predefined functions; 
  `srand()` and `rand()`.
    - `rand()` is used to generate random numbers in the range **[0, RAND_MAX]**.
    - `srand()` will help generate a random number at each time. 
  - Take the modulo of random number generated with 3 to make its range between (0 and 2).
    - If the number is 0 then the choice will be **Rock**.
    - If the number is 1 then the choice will be **Paper**.
    - If the number is 2 then the choice will be **Scissors**.
- `game()`:
  - Compares the choice of the user against the computer. The following outcomes are:
    - If the user wins, then return 1.
    - If the user loses, then return 0.
    - If it is a tie, then retun -1.
