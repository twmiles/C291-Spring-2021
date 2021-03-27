//tracy miles
//03/26/21

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

int main(void) {
struct patientinformation { 
char patient_name[ 20 ]; 
char* abbreviated_name; 
unsigned int age; 

struct { 
char phone_number[ 11 ]; 
char address[ 60 ]; 
char city[ 20]; 
char state[ 3 ]; 
int zipCode;
} physical_address; 

bool istested; 

struct { 
char*test_date; 
bool istested_positive; 
} covid_results; 
} healthrecord, *healthrecord_ptr;
 healthrecord_ptr = &healthrecord;

//a
 strcpy(healthrecord.patient_name, "Tracy");
 printf("%s\n", healthrecord.patient_name);

 //b
 strcpy(healthrecord_ptr->patient_name, "Jake");
 printf("%s\n", healthrecord_ptr->patient_name);

 //c
 healthrecord.abbreviated_name = (char*)malloc(5*sizeof(char));
 strcpy(healthrecord.abbreviated_name, "T");
 printf("%s\n", healthrecord.abbreviated_name);

 //d
 strcpy(healthrecord_ptr->abbreviated_name, "J");
 printf("%s\n", healthrecord_ptr->abbreviated_name);

 //e
 char* newchar = (char*)malloc(10 * sizeof(char));
 strcpy(newchar, "Q1E");
 healthrecord_ptr->abbreviated_name = newchar;
 printf("%s\n", healthrecord_ptr->abbreviated_name);

 //f
 healthrecord.physical_address.zipCode = 47403;
 printf("%d\n", healthrecord.physical_address.zipCode);

 //g
 healthrecord_ptr->physical_address.zipCode = 47403;
 printf("%d\n", healthrecord_ptr->physical_address.zipCode);

 //h
 healthrecord.istested = true;
 printf("%d\n", healthrecord.istested);

 //i
 printf("%d\n", healthrecord_ptr->istested);

 //j
 healthrecord_ptr->covid_results.test_date = (char*)malloc(50 * sizeof(char));
 strcpy(healthrecord_ptr->covid_results.test_date, "3/24/2021");
 printf("%s\n", healthrecord_ptr->covid_results.test_date);

 //k
 struct patientinformation *patients = (struct patientinformation*) malloc(5 * sizeof(struct patientinformation));

 int i = 0;

 for(i = 0; i < 5; i++) {
   strcpy(patients[i].patient_name, "JD");
   patients[i].physical_address.zipCode = i;
 }
 
 //l
 struct patientinformation *patients_ptr;
 patients_ptr = &patients;
 
 for(i = 0; i < 5; i++){
   (patients_ptr + i)->istested = true;
   printf("%d\n", (patients_ptr + i)->istested);
 }
 return 0;
}
