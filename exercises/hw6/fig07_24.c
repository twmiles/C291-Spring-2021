// Fig. 7.24: fig07_24.c
// Card shuffling and dealing.
//tracy miles
//03/12/21
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

// prototypes
void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck
void deal(unsigned int wDeck[][FACES], const char *wFace[], 
	  const char *wSuit[], unsigned int wHand[][2]); // dealing doesn't modify the arrays
void highcard(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);
void pairs(unsigned int wHand[][2], const char *wSuit[], const char *wFace[]);
void threeofakind(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);
void straight(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);
void fullhouse(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);
void fourofakind(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);

int main(void)
{
  // initialize deck array
  unsigned int deck[SUITS][FACES] = { 0 };

  //hand array
  unsigned int hand[5][2];

  srand(time(NULL)); // seed random-number generator

  shuffle(deck); // shuffle the deck

  // initialize suit array                       
   const char *suit[SUITS] =            
     {"Hearts", "Diamonds", "Clubs", "Spades"};
   
   // initialize face array                   
   const char *face[FACES] =
     {"Ace", "Deuce", "Three", "Four",         
      "Five", "Six", "Seven", "Eight",         
      "Nine", "Ten", "Jack", "Queen", "King", "Ace"};

   deal(deck, face, suit, hand); // deal the deck
} 

// shuffle cards in deck
void shuffle(unsigned int wDeck[][FACES])
{
  // for each of the cards, choose slot of deck randomly
  for (size_t card = 1; card <= CARDS; ++card) {
    size_t row; // row number
    size_t column; // column number

    // choose new random location until unoccupied slot found
    do {                                                        
      row = rand() % SUITS;                                   
      column = rand() % FACES;                             
    } while(wDeck[row][column] != 0); // end do...while

    // place card number in chosen slot of deck
    wDeck[row][column] = card;
  } 
}

// deal cards in deck
void deal(unsigned int wDeck[][FACES], const char *wFace[],
	  const char *wSuit[], unsigned int wHand[][2])
{
  //this is for the counter for the hand
  int i = 0;
  // deal each of the cards
  for (size_t card = 1; card <= 5; ++card) {
    // loop through rows of wDeck
    for (size_t row = 0; row < SUITS; ++row) {
      // loop through columns of wDeck for current row
      for (size_t column = 0; column < FACES; ++column) {
	// if slot contains current card, display card
	if (wDeck[row][column] == card) {
	  printf("%5s of %-8s%c", wFace[column], wSuit[row],
		 card % 2 == 0 ? '\n' : '\t'); // 2-column format
	  i++;
	} 
      } 
    } 
  } 
  printf("\n");
}


void highcard(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);
{
  //hand copy
  int copyhand[5] = {0};

  //make placeholder
  int temp;

  //loop counters
  size_t j, i, k;

  //copy columns
  for(j = 0; j < 5; j++) {
    copyhand[j] = wHand[j][1];
  }

  //
  for(i = 1; i < 5; i++) {
    for(k = 0; k<4; k++) {
      if (copyhand[k] > copyhand[k+1]) {
	temp = copyhand[k];
	copyhand[k] = copyhand[k+1];
	copyhand[k+1] = temp;
      }
    }
  }

  //high card
  printf("High card for the hand is: %s \n", wFace[copyHand[4]]);

  void pairs(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);

  int i[FACES] = {0};

  size_t j,k;

  for(j = 0; j < 5; j++)
    {
      i++[wHand[j][1]];
    }
  for(k = 0; k < FACES; k++) {
    if (i[k] == 2) {
      printf("this hand has a pair of: %ss \n", wFace[k]);
    }
  }
}

//straight
void straight(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);
int copyhand[5]= {0};

//make placeholder                                                                                                                                                                                                                          
int temp;

size_t j, i, k;

//copy columns                                                                                                                                                                                                                              
for(j = 0; j < 5; j++) {
  copyhand[j] = wHand[j][1];
 }

//                                                                                                                                                                                                                                          
for(i = 1; i < 5; i++) {
  for(k = 0; k<4; k++) {
    if (copyhand[k] >copyhand[k+1]) {
      temp = copyhand[k];
      copyhand[k] = copyhand[k+1];
      copyhand[k+1] =temp;
    } 
  }
 }
if ((copyHand[4]-1) == copyhand[3] && (copyhand[3]-1) == copyhand[2] && (copyhand[2]-1) == copyhand[1] && (copyhand[1]-1) == copyhand[0]) {
  printf("this hand has a straight of cards from %s to %s \n", wFace[copyhand[0]], wFace[copyhand[4]]);
 }
}

//full house
void fullhouse(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);
{
  {
    int i[FACES] = {0};

    size_t j,k;

    for(j = 0; j <5; j++)
      {
	i++[wHand[j][1]];
      }
    for(k = 0; k<FACES; k++) {
      if (i[k] == 2 && i[k] == 3) {
	printf("This hand does have a fullhouse \n"
	       }
      }
    }
    //four of a kind
    void fourofakind(unsigned int wHand[][2], cont char *wSuit[], const char *wFace[]);
    {
      int i[FACES] = {0};

      size_t j,k;

      for(j = 0; j <5; j++)
	{ 
	  i++[wHand[j][1]];
	} 
      for(k = 0; k<FACES; k++) {
	if(i[k] == 4) {
	  printf("This hand has a four of a kind of %s \n", wFace[k]);
	}
      }
    }

    //end
