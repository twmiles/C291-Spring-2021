/*
TODO:
Write a Program that does the following: Spam Checker
Research online some of the most common spam e-mail messages and words, and check your own
junk e-mail folder. Create a list of 30 words and phrases commonly found in spam messages. Write
a program in which the user enters an e-mail message. Read the message into a large character array
and ensure that the program does not attempt to insert characters past the end of the array. Then
scan the message for each of the 30 keywords or phrases. For each occurrence of one of these within
the message, add a point to the message’s “spam score.” Next, rate the likelihood that the message
is spam, based on the number of points it received. Print your results in a tabulator format showing 
the words (highest likelihood first)
*/

#include <stdio.h>
#include <string.h>
int main(void) {
  //arrays
  char spam[30][10] = {"trap", "fake", "credit", "loan", "easy", "fast", "free", "borrow", "quick", "ready", "card", "money", "now", "sample", "royalty", "limited", "luxury", "investment", "junk", "check", "medicine", "instant", "reduced", "simple", "name", "spam", "large", "big", "best", "great"};
  char message[10000];
  char check = strstr(spam, message);
  int score = 0;
  int i = 0;
  char c;
  char spamf[10000];
  printf("please enter a message then press enter: \n");

  for(i = 0; c != '\n'; i++) {
    scanf("%s%c", &message[i], &c);
  }


  for (i = 0; i<= message[i]; i++) {
    if(check != "NULL") {
      score++;
      spamf[i] = check;
    }
  }
  printf("%s", spamf);
  if (score > 50) {
    printf("%d spam keywords found, this is most likely spam. beware.", score);
  }
  if (score <= 50 && score > 20) {

  printf("%d spam keywords found, there is a chance of spam here", score); 
  }
  else {
    printf("%d spam keywords found, this probably is alright", score);
  } 

	return 0;
}
