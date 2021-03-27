//tracy miles
//03/25/21

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#define CALCBMI
#define CALCAGE
//undefined
//double calcbmi(double weight, double height);
//int calcage(int day, int month, int year);

struct Healthpro {
  char first_name[20];
  char last_name[20];
  char gender[2];
  struct {
    int month;
    int day;
    int year;
  } dob;
  double height;
  double weight;
  struct {
    bool heartiss;
    bool bloodpressiss;
    bool canceriss;
  } fam_hist;
};

int main(void) {
  double averageage;

  struct Healthpro *patients = (struct Healthpro*)malloc(10 * sizeof(struct Healthpro));

  int i = 0;

  for(i=0;i<1;i++) {

    struct Healthpro *temp = (patients + i);

    printf("Enter the patient's first name:\n");
    scanf(" %s", temp->first_name);
    printf("Enter the patient's last name:\n");
    scanf(" %s", temp->last_name);
    printf("Enter the patient's gender m = male f = female o = other/not listed\n");
    scanf(" %s", temp->gender);
    printf("Enter the patient's birthdate (mm/dd/yyyy):\n");
    scanf(" %d/%d/%d", &temp->dob.month, &temp->dob.day, &temp->dob.year);
    printf("Enter the patient's height (inches):\n");
    scanf(" %lf", &temp->height);
    printf("Enter patient weight (lbs):\n");
    scanf(" %lf", &temp->weight);
    printf("Family History Section (1 for Yes, 0 for No");
    printf("Do you have FH of Heart Issues?");
    scanf(" %d", &temp->fam_hist.heartiss);
    printf("Do you have FH of blood pressure issues?");
    scanf(" %d", &temp->fam_hist.bloodpressiss);
    printf("Do you have FH of blood pressure issues?");
    scanf(" %d", &temp->fam_hist.canceriss);

    averageage = averageage + calcage(temp->dob.day, temp->dob.month, temp->dob.year);
  }
  averageage = averageage/10;

  char * highRisk = (char*)malloc(200 * sizeof(char));
  strcpy(highRisk, " ");

  for(i = 0; i < 10; i++){
    struct Healthpro *temp = (patients + i);
    double bmi = calcbmi(temp->weight, temp->height);
    int age = calcage(temp->dob.day, temp->dob.month, temp->dob.year);

    //patients with 2 or more FH issues
    if(temp->fam_hist.heartiss + temp->fam_hist.bloodpressiss + temp->fam_hist.canceriss >= 2) {
      strcat(highRisk, temp->first_name);
    }

    //high BMI and 2 or more FH issues and high avg age
    if((bmi < 18.5 || bmi > 30) && temp->fam_hist.heartiss + temp->fam_hist.bloodpressiss + temp->fam_hist.canceriss >= 2 && age > averageage)
      {
      if(temp->fam_hist.canceriss)
	{
	  printf("It is advised to see your physican");
	}
      printf("BMI: %lf\n Age: %d\n", bmi, age);
    }
  }
    return 0;
  }
