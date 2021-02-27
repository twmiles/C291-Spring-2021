//tracy miles
//02/26/21

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int airplane[20][7];
  char air[20][7];
  char ticket;
  int row[2];
  char seat;
  int i, j;
  char choice;
  char fname[20];
  char lname[20];
  //--------------------------------------------
  for(i = 0; i < 20; i++)
    {
      for(j = 0; j < 7; j++)
	{
	  air[i][j] = '*';
	  airplane[i][j] = 0;
  
	}
    }
  //--------------------------------------------
  do {  
    
      printf("\nRows 1-3 are first class (FC)\n");
      printf("Rows 4 through 7 are business class (BC)\n");
      printf("Rows 8 through 20 are economy class (EC)\n");
      printf("* - Available\n");
      printf("X - Taken\n");
      printf("\n");
      printf(" \tA\tB\t|\tD\tE\tF\t|\tH\tI\n");
      printf("Row 1\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[0][0], air[0][1], air[0][2], air[0][3], air[0][4], air[0][5], air[0][6]);

      printf("Row 2\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[1][0], air[1][1], air[1][2], air[1][3], air[1][4], air[1][5], air[1][6]);

      printf("Row 3\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n\n", air[2][0], air[2][1], air[2][2], air[2][3], air[2][4], air[2][5], air[2][6]);

      printf("Row 4\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[3][0], air[3][1], air[3][2], air[3][3], air[3][4], air[3][5], air[3][6]);

      printf("Row 5\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[4][0], air[4][1], air[4][2], air[4][3], air[4][4], air[4][5], air[4][6]);

      printf("Row 6\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[5][0], air[5][1], air[5][2], air[5][3], air[5][4], air[5][5], air[5][6]);

      printf("Row 7\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n\n", air[6][0], air[6][1], air[6][2], air[6][3], air[6][4], air[6][5], air[6][6]);

      printf("Row 8\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[7][0], air[7][1], air[7][2], air[7][3], air[7][4], air[7][5], air[7][6]);

      printf("Row 9\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[8][0], air[8][1], air[8][2], air[8][3], air[8][4], air[8][5], air[8][6]);

      printf("Row 10\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[9][0], air[9][1], air[9][2], air[9][3], air[9][4], air[9][5], air[9][6]);

      printf("Row 11\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[10][0], air[10][1], air[10][2], air[10][3], air[10][4], air[10][5], air[10][6]);

      printf("Row 12\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[11][0], air[11][1], air[11][2], air[11][3], air[11][4], air[11][5], air[11][6]);

      printf("Row 13\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[12][0], air[12][1], air[12][2], air[12][3], air[12][4], air[12][5], air[12][6]);

      printf("Row 14\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[13][0], air[13][1], air[13][2], air[13][3], air[13][4], air[13][5], air[13][6]);

      printf("Row 15\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[14][0], air[14][1], air[14][2], air[14][3], air[14][4], air[14][5], air[14][6]);

      printf("Row 16\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[15][0], air[15][1], air[15][2], air[15][3], air[15][4], air[15][5], air[15][6]);

      printf("Row 17\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[16][0], air[16][1], air[16][2], air[16][3], air[16][4], air[16][5], air[16][6]);

      printf("Row 18\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[17][0], air[17][1], air[17][2], air[17][3], air[17][4], air[17][5], air[17][6]);

      printf("Row 19\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[18][0], air[18][1], air[18][2], air[18][3], air[18][4], air[18][5], air[18][6]);

      printf("Row 20\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[19][0], air[19][1], air[19][2], air[19][3], air[19][4], air[19][5], air[19][6]);

      //ask for the input for the boarding pass
      printf("Enter First Name: ");
      scanf(" %s", &fname);


      printf("Enter Last Name: ");
      scanf(" %s", &lname);
      //printf("Enter First Name: ");
      //scanf(" %c", &fname);

      //printf("Enter Last Name: ");
      //scanf(" %c", &lname);

      printf("Enter Ticket type (F = First Class, B = Business Class, or E = Economy): ");
      scanf(" %c", &ticket);
  
  
      printf("Pick Row: ");
      scanf(" %d", &row[0]);
  
      printf("Pick Seat (A,B,D,E,F,H and I): ");
      scanf(" %c", &seat);
  
  
      //switch statement to find seat and row
 switch(seat)
   {
   case 'A':
   case 'a':
     row[0] = row[0] - 1;
     row[1] = 1;
     row[1] = row[1] - 1;
     break;
  
   case 'B':
   case 'b':
     row[0] = row[0] - 1;
     row[1] = 2;
     row[1] = row[1] - 1;
     break;
  
   case 'D':
   case 'd':
     row[0] = row[0] - 1;
     row[1] = 3;
     row[1] = row[1] - 1;
     break;
  
   case 'E':
   case 'e':
     row[0] = row[0] - 1;
     row[1] = 4;
     row[1] = row[1] - 1;
     break;
  
   case 'F':
   case 'f':
     row[0] = row[0] - 1;
     row[1] = 5;
     row[1] = row[1] - 1;
     break;
  
   case 'H':
   case 'h':
     row[0] = row[0] - 1;
     row[1] = 6;
     row[1] = row[1] - 1;
     break;

   case 'I':
   case 'i':
     row[0] = row[0] - 1;
     row[1] = 7;
     row[1] = row[1] - 1;
     break;
  
   }
  
  
 if(ticket == 'F')
   {
     if(row[0]+1 == 1 || row[0]+1 == 2 || row[0]+1 == 3)
       {
  
	 if(airplane[row[0]][row[1]] == 0)
	   {
	     airplane[row[0]][row[1]] = 1;
	     air[row[0]][row[1]] = 'X';
	   }
	 else if(airplane[row[0]][row[1]] == 1)
	   {
	     printf("\nMessage: Seat %d%c is already occupied\n", row[0] + 1, seat);
	   }
       }
     else
       {
	 printf("\nSeat not in class\n");
       }
  
   }
 else if(ticket == 'B')
   {
     if(row[0]+1 == 4 || row[0]+1 == 5 || row[0]+1 == 6 || row[0]+1 == 7)
       {
	 if(airplane[row[0]][row[1]] == 0)
	   {
	     airplane[row[0]][row[1]] = 1;
	     air[row[0]][row[1]] = 'X';
	   }
	 else if(airplane[row[0]][row[1]] == 1)
	   {
	     printf("\nMessage: Seat %d%c is already occupied\n", row[0] + 1, seat);
	   }
       }
     else
       {
	 printf("\nSeat not in class\n");
       }
   }
 else if(ticket == 'E')
   {
     if(row[0]+1 == 8 || row[0]+1 == 9 || row[0]+1 == 10 || row[0]+1 == 11 || row[0]+1 == 12 || row[0]+1 == 13 || row[0]+1 == 14 || row[0]+1 == 15 || row[0]+1 == 16 || row[0]+1 == 17 || row[0]+1 == 18 || row[0]+1 == 19 || row[0]+1 == 20)
       {
	 if(airplane[row[0]][row[1]] == 0)

	   {
	     airplane[row[0]][row[1]] = 1;
	     air[row[0]][row[1]] = 'X';
	   }
	 else if(airplane[row[0]][row[1]] == 1)
	   {
	     printf("\nMessage: Seat %d%c is already occupied\n", row[0] + 1, seat);
	   }
       }
     else
       {
	 printf("\nSeat not in class\n");  
       }
   }
 printf("\nHere is your Boarding Pass:\n");
 printf("Name: %s %s\n", fname, lname);
 printf("Ticket Type: %c\n", ticket);
 printf("Row: %d\n", row[0]+1);
 printf("Seat: %c\n", seat);
  
 row[0] = 0;
 row[1] = 0;


 printf("\nDo you want to reserve another?");
   scanf(" %c", &choice);
  } while(choice == 'y');

  printf("\n--------------------------------------------------------\n");
  printf("\nMANIFEST:\n%s %s\n", fname, lname);

  printf("\n--------------------------------------------------------\n");


  printf("\n\nAll seats that were picked are shown below:\n");
  printf("* - Available\n");
  printf("X - Taken\n");
  printf("\n");
  printf(" \tA\tB\t|\tD\tE\tF\t|\tH\tI\n");
  printf("Row 1\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[0][0], air[0][1], air[0][2], air[0][3], air[0][4], air[0][5], air[0][6]);

  printf("Row 2\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[1][0], air[1][1], air[1][2], air[1][3], air[1][4], air[1][5], air[1][6]);

  printf("Row 3\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n\n", air[2][0], air[2][1], air[2][2], air[2][3], air[2][4], air[2][5], air[2][6]);

  printf("Row 4\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[3][0], air[3][1], air[3][2], air[3][3], air[3][4], air[3][5], air[3][6]);

  printf("Row 5\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[4][0], air[4][1], air[4][2], air[4][3], air[4][4], air[4][5], air[4][6]);

  printf("Row 6\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[5][0], air[5][1], air[5][2], air[5][3], air[5][4], air[5][5], air[5][6]);

  printf("Row 7\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n\n", air[6][0], air[6][1], air[6][2], air[6][3], air[6][4], air[6][5], air[6][6]);

  printf("Row 8\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[7][0], air[7][1], air[7][2], air[7][3], air[7][4], air[7][5], air[7][6]);

  printf("Row 9\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[8][0], air[8][1], air[8][2], air[8][3], air[8][4], air[8][5], air[8][6]);

  printf("Row 10\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[9][0], air[9][1], air[9][2], air[9][3], air[9][4], air[9][5], air[9][6]);

  printf("Row 11\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[10][0], air[10][1], air[10][2], air[10][3], air[10][4], air[10][5], air[10][6]);

  printf("Row 12\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[11][0], air[11][1], air[11][2], air[11][3], air[11][4], air[11][5], air[11][6]);

  printf("Row 13\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[12][0], air[12][1], air[12][2], air[12][3], air[12][4], air[12][5], air[12][6]);

  printf("Row 14\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[13][0], air[13][1], air[13][2], air[13][3], air[13][4], air[13][5], air[13][6]);

  printf("Row 15\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[14][0], air[14][1], air[14][2], air[14][3], air[14][4], air[14][5], air[14][6]);

  printf("Row 16\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[15][0], air[15][1], air[15][2], air[15][3], air[15][4], air[15][5], air[15][6]);

  printf("Row 17\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[16][0], air[16][1], air[16][2], air[16][3], air[16][4], air[16][5], air[16][6]);

  printf("Row 18\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[17][0], air[17][1], air[17][2], air[17][3], air[17][4], air[17][5], air[17][6]);

  printf("Row 19\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[18][0], air[18][1], air[18][2], air[18][3], air[18][4], air[18][5], air[18][6]);

  printf("Row 20\t%c\t%c\t|\t%c\t%c\t%c\t|\t%c\t%c\n", air[19][0], air[19][1], air[19][2], air[19][3], air[19][4], air[19][5], air[19][6]);

  return 0;
}

