//covid
//tracy miles
//04/09/21

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 30

int new = SIZE;

struct covidData {

  int isCovidPositive;
  char testDate[20];
};

typedef struct patient{
  char lastName[20];
  char firstName[20];
  char gender;
  struct covidData *covidInfo;
} Patient;

void patientMenu();
void search(Patient* data);
void newPatient(Patient* data);
void readData(FILE *fPtr, Patient* data);
void writeData(FILE *fPtr, struct patient data[30]);
 
int main(void) {

  printf("%d\n", strcmp("2020", "2021"));
  printf("%d\n", strcmp("2021", "2020"));
  FILE *fPtr;
  Patient* data = malloc(sizeof(Patient) * 30);


  readData(fPtr, data);

  bool menuup = true;
  while(menuup){
    char menuChoice;
    patientMenu();

    scanf(" %c", &menuChoice);

    switch(menuChoice) {
    case 'N' :
      printf("---New User---\n\n");
      newPatient(data);
      break;
    case 'S' :
      printf("---Search for a user---\n\n");
      search(data);
      break;
    case 'Q' :
      menuup = false;
      writeData(fPtr, data);
      free(data);
      break;
    default :
      printf("Please type in uppercase, thank you.\n\n\n");
    }
  }
}

void patientMenu() {
  printf("What action are you trying to perform? \n\tN - Input New User Data:\n\tS - Search Dataset:\n\tQ - Quit:\n");
}

void search(Patient* data){
  int i;
  int choice;
  int covid;
  char lName[20];
  char gender;
  bool resultFound = false; //no covid found

  printf("Please choose an option to search by:\n\t1 - Last Name Only\n\t2 - Gender Only\n\t3 - Covid Result Only\n\t4 - Last Name and Gender\n\t5 - Last Name and Covid Result\n\t6 - Gender and Covid Result \n");

  scanf(" %d", &choice);

  if(choice == 1){
    printf("Enter last name (in lowercase): \n");
    scanf(" %s", lName);

    for(i = 0; i < new; i++){
      if(strcmp(data[i].lastName, lName) == 0){
	printf("%s %s %c %d %s\n", data[i].lastName, data[i].firstName, data[i].gender, data[i].covidInfo->isCovidPositive, data[i].covidInfo->testDate);
	resultFound = true;
      }
    }
  }
  else if(choice == 2){
    printf("Enter gender (f, m, o): \n");
    scanf(" %c", &gender);

    for(i = 0; i < new; i++){
      if(data[i].gender == gender){
	printf("%s %s %c %d %s\n", data[i].lastName, data[i].firstName, data[i].gender, data[i].covidInfo->isCovidPositive, data[i].covidInfo->testDate);
	resultFound = true;
      }
    }
  }
  else if(choice == 3){
    printf("Enter covid result (1 = positive, 0 = negative): \n");
    scanf(" %d", &covid);

    for(i = 0; i < new; i++){
      if(data[i].covidInfo->isCovidPositive == covid){
	printf("%s %s %c %d %s\n", data[i].lastName, data[i].firstName, data[i].gender, data[i].covidInfo->isCovidPositive, data[i].covidInfo->testDate);
        resultFound = true;
      } 
    }
  }
  else if(choice == 4){
    printf("Enter last name (in lowercase): \n");
    scanf(" %s", lName);

    printf("Enter gender (f, m, o): \n");
    scanf(" %c", &gender);

    for(i = 0; i< new; i++){
      if(strcmp(data[i].lastName, lName) == 0 && data[i].gender == gender){
	printf("%s %s %c %d %s\n", data[i].lastName, data[i].firstName, data[i].gender, data[i].covidInfo->isCovidPositive, data[i].covidInfo->testDate);
        resultFound = true;
      }
    }
  }
  else if(choice == 5){
    printf("Enter last name in lowercase to continue\n");
    scanf(" %s", lName);

    printf("Enter covid result to continue\n");
    scanf(" %d", &covid);

    for(i = 0; i< new; i++){
      if(strcmp(data[i].lastName, lName) == 0 && data[i].covidInfo->isCovidPositive == covid) {
	printf("%s %s %c %d %s\n", data[i].lastName, data[i].firstName, data[i].gender, data[i].covidInfo->isCovidPositive, data[i].covidInfo->testDate);
        resultFound = true;
      }
    }
  }
  else {
    printf("Please enter gender to continue\n");
    scanf(" %c", &gender);

    printf("enter covid result to continue\n");
    scanf(" %d", &covid);

    for(i = 0; i < new; i++){
      if(data[i].covidInfo->isCovidPositive == covid && data[i].gender == gender){
	printf("%s %s %c %d %s\n", data[i].lastName, data[i].firstName, data[i].gender, data[i].covidInfo->isCovidPositive, data[i].covidInfo->testDate);
        resultFound = true;
      }
    }
  }
  if(!resultFound){
    printf("error: no info found\n");
  }
}
void newPatient(Patient* data){
  int i;
  char lName[20], fName[20], date[20];
  char gender;
  bool userAdded = false;
  printf("Enter your first name (lowercase) to continue: \n");
  scanf(" %s", fName);

  printf("Enter your last name (lowercase) to continue: \n");
  scanf(" %s", lName);

  printf("Enter your gender (m,f,o) to continue: \n");
  scanf(" %c", &gender);

  printf("Enter you covid test date (mm-dd-yyyy) to continue: \n");
  scanf(" %s", date);

  for(i=0;i < new;i++){
    if(strcmp(data[i].firstName, "''") == 0 && !userAdded){
      printf("%d\n", i);

      strcpy(data[i].firstName, fName);
      strcpy(data[i].lastName, lName);
      data[i].gender = gender;
      data[i].covidInfo->isCovidPositive = (i % 2 == 0) ? 0 : 1;
      strcpy(data[i].covidInfo->testDate, date);

      userAdded = true;
      break;
    }
  }
}

 void readData(FILE *fPtr, Patient* data){
	if((fPtr = fopen("nameage.dat", "r+")) == NULL){
	  puts("File could not be opened\n");
	}
	else{
	  int temp;
	  int i = 0;
	  while(!feof(fPtr)){
	    if(i+1 > SIZE){
	      data = realloc(data, i * sizeof(Patient));
	      new++;
	    }
	    data[i].covidInfo = malloc(sizeof(struct covidData));
	    fscanf(fPtr, "%s %s %c %d %s", data[i].lastName, data[i].firstName, &data[i].gender, &data[i].covidInfo->isCovidPositive, data[i].covidInfo->testDate);
	    i++;
	  }
	  rewind(fPtr);
	}
 }
      void writeData(FILE *fPtr, struct patient data[30]){
	if((fPtr = fopen("nameage.dat", "w+")) == NULL){
	  puts("error opening...\n");
	}
	else {
	  int temp;
	  int i = 0;
	  for(i = 0; i < new; i++){
	    fprintf(fPtr, "%s %s %c %d %s", data[i].lastName, data[i].firstName, data[i].gender, data[i].covidInfo->isCovidPositive, data[i].covidInfo->testDate);
	    if(i!=new-1){
	      fprintf(fPtr, "\n");
	    }
	  }
	  rewind(fPtr);
	}
      }
