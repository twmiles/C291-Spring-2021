// Program to read integers into a 3X3 matrix and display them
// Todo: Fix bugs and makesure program works as intended.
// for each bug fix, add a comments specifying what you fixed.
// Number of errors/bugs = 12


#include <stdio.h>
void display(int Matrix[3][3],int i,int j); //passed it to matrix[3][3] instead of size = 3, int i and int j

int main(void) {
       
  int Matrix[3][3],i,j; //made in [3][3] and i and j
  printf("Enter 9 elements of the matrix:\n");
  for (i = 0; i < 3; i++) //made it i=0 i<3 i++
    {
      for (j = 0; j < 3; j++){ //made it j = 0 j<3 j++
        scanf("%d", &Matrix[i][j]); //scan for matrix[i][j]
      }
    }
  display(Matrix,i,j); //displaying the function
	return 0;
}

void display(int Matrix[3][3],int i,int j) { //function passed to [3][3], i, and j
  for (i = 0; i < 3; i++) { //i = 0, i < 3, i++
	  printf("\n");
	  for (j = 0; j < 3; j++) // j<3
            printf("%d\t", Matrix[i][j]); //tabbing over and matrix[i][j]
        }
        printf("\n");
	}
    

