//tracy miles
//2/3/21
#include<stdio.h>

int main(void){
  char input;
  int num1, num2, result, count = 0;
  double salary, wksalary, monsalary, ot, hourlyotsalary, hourlyrate, monsalary1, wksalary1, otmonsalary, otwksalary, othourlysalary, overallhourly, otmonsalary1, otwksalary1, hourlyrate1, othours, hoursworked1, ot1, hmonthpay, hwkpay, hwkpayot, rmonthsalcourse, course, rmonthlysal, rweeklysal, rhourly, hrsalary, extracredits, credithours, numofcourses, hrforcourses, creditpay, avgwk, avgmon, avghour, jsalary, jmonthlypay, jweeklypay, jhourly, salary1, salary2, coursepay1, rweeksalcourse, tsalary, twkpay, thourpay, tmonpay, twpay;
  //salary, weekly salary, monthly salary, over time, hourly over time salary, hourly rate, over time monthly salary, overtime weekly salary
  do {
      printf("Hello! Please select a paycode based on employment type.\n\nPaycode choices:\tAdministrator(A)\n\t\t\tStaff(S)\n\t\t\tRegular Faculty(R)\n\t\t\tAdjunct(J)\n\t\t\tTeaching assistant(T)\n\t\t\tHourly Worker(H)\nEnter choice: ");
      scanf(" %c", &input);

      if(input == 'A' || input == 'S' || input == 'R' || input == 'J' || input == 'T' || input == 'H' ){
	switch(input){
        case 'A': //case for Administrator
	  printf("What is your salary:"); //ask for salary
	  scanf(" %lf", &salary); //scan for input
	  monsalary = salary/12; //monthly salary
	  wksalary = salary/52; //weekly salary
	  hrsalary = salary/2800; //hourly salary
	  printf("Monthly Salary: %.2lf ", monsalary); //prints for salaries
	  printf("Weekly Salary: %.2lf ", wksalary);
	  printf("Hourly Salary: %.2lf ", hrsalary);
	  break;
        case 'S': //case for Staff
	  printf("What is your salary: ");
	  scanf(" %lf", &salary1);
	  printf("Overtime Hours Worked: ");
          scanf(" %lf", &ot); //scan for over time input
	  hourlyrate  = (salary1/2080); //salary divded by 2080 (assuming 40 hour work week)
	  othourlysalary = (hourlyrate * .75); //overtime hourly is 75% of the normal rate.
          monsalary1 = salary1/12; //monthly salary
	  wksalary1 = salary1/52; //weekly salary
	  overallhourly = othourlysalary + hourlyrate; //overall hourly salary with overtime included.
	  if(ot <= 10){ //if over time is over less than or equal to 10 hours.
	    otmonsalary = (otwksalary*4) + ((hourlyrate * .75)*ot); //overtime monthly
	    printf("Monthly Salary: %.2lf ", otmonsalary);
	  } else{ //over time tops out at 10 hours.
	    otmonsalary1 = (otwksalary*4)+ ((hourlyrate * .75)*10);
	    printf("Monthly Salary: %.2lf ", otmonsalary1);
	    }
	  if(ot <= 10){
	    otwksalary = ((ot*(hourlyrate * .75))/4);
          printf("Weekly Salary: %.2lf ", otwksalary);
	  } else{
	    otwksalary1 =((10*(hourlyrate * .75))/4);
	    printf("Weekly Salary: %.2lf ", otwksalary1);
	  }
	  printf("Hourly Salary: %.2lf ", overallhourly);
	  break;
        case 'R':
	  printf("What is your salary: "); //asking for salary input
	  scanf(" %lf", &salary2); //scanning for input
	  printf("How many extra credit did you teach this semester: "); //asking for extra course.
	  scanf(" %lf", &extracredits); //scanning for input
	  rmonthlysal = salary2/10; //this is the salary over a 10 month period
	  course = 8500; //8500 is the pay for the extra 3 credit hour course.
	  rmonthsalcourse = ((salary2/10) + (8500/5)); //monthly salary wih extra course. course is divided by 5 because their are 5 months in a semester.
	  rweeklysal = ((salary2/10)/4); //weekly salary (divided monthly salary by 4)
	  rweeksalcourse = (((salary2/10) + (8500/5))/4); //weekly salary with extra course. divided monthly extra course by 4.
	  rhourly = ((salary2/10)/160); //since it is not annual I just divided salary by the 10 months and assumed 40 hours a week, dividing by 160.
	  if(extracredits < 3){ 
	  printf("Monthly Pay: %.2lf ", rmonthlysal);
	  }else{
	    printf("Monthly Pay: %.2lf ", rmonthsalcourse);
	  }
	  if(extracredits < 3) {
	  printf("Weekly Pay: %.2lf ", rweeklysal);
	  }else{
	    printf("Weekly Pay: %.2lf ", rweeksalcourse);
	  }
	  printf("Hourly Pay: %.2lf ", rhourly);
	  break;
        case 'J':
	  printf("How many credit hours are you teaching this semester: ");
	  scanf(" %lf", &credithours);
	  creditpay = 8500/3; //this would be the pay for 1 credit hour.
	  jsalary = ((8500/3) *credithours); //this is how much they are getting per credit hour for the semester
	  jmonthlypay =(((8500/3) * credithours)/5); //divided by 5 for the 5 month pay period and semester.
	  jweeklypay = ((((8500/3) * credithours)/5)/4); //weekly pay math, dividing credits by 3 (i didn't know if they could teach 1 credit hour courses so i assumed.) then multiplied by number of credit hours. divided by 5 and 4.
	  jhourly = ((((((8500/3) * credithours)/5)/4)/7)/24); //this looks like a lot and im sure there is a better way, but it divides weekly pay by 7 and then 24 hours in a day to get hourly. I didnt know how many hours they worked.
	  printf("Monthly Pay: %.2lf ",jmonthlypay); //monthly pay
	  printf("Weekly Pay: %.2lf ", jweeklypay); //weekly pay
	  printf("Hourly Pay: %.2lf ", jhourly); //hourly pay
	  break;
	case 'T':
          printf("How many 3-credit hour courses are you assisting: ");
	  scanf(" %lf", &numofcourses);
	  printf("How many hours did you work for both combined this week: ");
	  scanf(" %lf", &hrforcourses);
	  coursepay1 = 2500;
	  tsalary = numofcourses * 2500;
	  tmonpay = (numofcourses * 2500)/5;
	  twkpay = ((numofcourses * 2500)/5)/4;
	  thourpay = (((((numofcourses * 2500)/5)/4)/7)/24);
	  printf("Monthly Pay: %.2lf ", tmonpay);
	  if(hrforcourses <= 10) {
	    printf("Weekly Pay: %.2lf ", twkpay);
	  }
	  else if(hrforcourses > 10 && hrforcourses <= 12){
	    printf("Weekly Pay: %.2lf ", twpay);
	  }
	  else{
	    printf("You're over your hours");
	  }
	    printf("Hourly Pay: %.2lf ", thourpay);
          break;
        case 'H': //case for hourly workers 
	  printf("What is your hourly pay: ");
	  scanf(" %lf", &hourlyrate1);
	  printf("How many hours did you work this week: ");
	  scanf(" %lf", &hoursworked1);
	printf("How many of those hours were overtime: ");
	scanf(" %lf", &othours);
	ot1 = othours*1.5; //overtime is the *1.5 of the normal pay.
	hmonthpay=4*(hoursworked1*hourlyrate1); //monthly pay rate
	hwkpay=hoursworked1*hourlyrate1; //weekly pay rate
      
	if (hoursworked1 <= 20) //if hours are equal to or less than 20 than weekly pay is printed without overtime.
	  {
	    printf("Weekly Pay: %.2lf ", hwkpay);
	  }
	else if(hoursworked1 > 20 && hoursworked1 <= 40){ 
	  hwkpayot=((hoursworked1 - othours)*ot);
	printf("Weekly Pay: %.2lf ", hwkpayot);
	}
	else{
	  printf("You're over your hours");
	}
	printf("Monthly Pay: %.2lf ", hmonthpay);
	printf("Hourly Pay: %.2lf ", hourlyrate1);
          break;

	default:
	  printf("Please choose a valid paycode.");
	  break;
      
	}
      }
  }  while(input != 'Q');
  //averages
  avgwk = (hwkpay + wksalary + wksalary1 + rweeklysal + jweeklypay + twkpay)/3;
  avgmon = (monsalary + monsalary1 + hmonthpay + rmonthlysal + tmonpay + jmonthlypay)/3;
  avghour = (hrsalary + hourlyrate + hourlyrate1 + rhourly + thourpay + jhourly)/3;
  printf("Average Weekly: %.2lf ", avgwk);
  printf("Average Monthly: %.2lf ", avgmon);
  printf("Average Hourly: %.2lf ", avghour);
  printf("Quit the menu.\n");
	
  return(0);
}
