/* Instructions:
 *
 *
 1. Write a program to assign a grade to Student. 
	Get the number of assignmnets from user.
  Get the students score out of how many points for each assignmnet.
	Calculate percentage and return the grade associated with a range of marks.
 2. The overall score range and the associated grades are as follows:
     a. [97-100] = A+
     b. [90-97] = A
     c. [80-90] = B
     d. [70-80] = C
     e. less than 70 is a failing grade and should be given an F
     e. greater than 100 or less than 0 is invalid and your code should print "Invalid"
 3. Use the skeleton code provided below to create a new function "printGrade" to assign a grade based on the score ranges.
 4. Use print statements in your function to display the grade. For example, if the input marks is 77, the output should read:
        "Your grade is : C"
 5. Please adhere to standard C syntax conventions and use comments to explain your code. Failure to do so will result in a penalty.
 *
 *
 * */
#include<stdio.h> //had to add this
void printGrade(int score){
	//print the students grade based on their score in the class
  if(score > 100 || score < 0) //if the score is over or under the allowed then it will print invalid
    printf("Invalid");
  else if(score > 96) //if the score is above 96 then it will be an A+
    printf("Your grade is : A+");
  else if(score > 89) //if the score is above a 89 but less than a 97 it will b an A
    printf("Your grade is : A");
  else if(score > 79) //if you have scored less than a 90 but more than a 79 it will be a B
    printf("Your grade is : B");
  else if(score > 69) //if you have scored less than a 80 but more than a 69 it will be a C
    printf("Your grade is : C");
  else //if you have score 69 or below you are failing with an F
    printf("Your grade is : F"); 
}
int main(void){
	char ch;
	float score, totalscore = 0.0, maxscore = 0.0;; //added two new variables set to 0.0 because it is a float. This is for the totalscore entered and the maxscore total.
	int assignments, x = 0; //set x to 0 so i can use it in the for loops
	do {
		printf("How many assignmnets did you have ? ");
		scanf(" %d", &assignments); //scan for the input
    //get the number of assignmnets from the student

		printf("Enter your score for all assignments : \n" );
		for(x=0;x<assignments;x++) //created a for loop that keeps it going for the amount of assignments the person has
		  {
		    scanf(" %f", &score); //scan for the input
		    totalscore = totalscore + score; //total is the score entered + the score
		  }
		printf("Enter the max score for all assignments : \n");
		for(x=0;x<assignments;x++) //for loop that keep it going for the amount of assignments the person had
		  {
		    scanf(" %f", &score); //scan for input
		    maxscore = maxscore + score; //added this math 
		  }
    //get the student's score and the max score for each assignment
		
    //calculate the student's percentage in the class using the information you've gathered.
		int percent;
		percent=(totalscore*1.0/maxscore)*100; //this is calculating the percentage to be used in the print geade function
		printGrade(percent);

		printf(" \n Do you want to continue? (Y/N) ");
		scanf(" %c",&ch);
	} while(ch == 'y'|| ch == 'Y');
}
