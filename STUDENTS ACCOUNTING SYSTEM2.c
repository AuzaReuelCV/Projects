#include<stdio.h>

int main ()
{
 
  int id_no, yr_lvl, crse_code, subs_no, totl_u;
  char f_name[30], l_name[30], m_name[30], gndr[10], crse;
  float titun_pr_u, tuition, reg_fee, misc_fee, lab_fee, totl_fee;
  float pre, midA, midB, semiA, semiB, final;
  
  printf("Input the following data:\n");
  
  printf("ID#: ");
  scanf("%d", &id_no);
  
  printf("First Name: ");
  scanf("%s", &f_name);
  
  printf("Last Name: ");
  scanf("%s", &l_name);
  
  printf("Middle Name: ");
  scanf("%s", &m_name);
  
  printf("Course Code(1-8): ");
  scanf("%d", &crse_code);
  
  printf("Gender: ");
  scanf("%s", &gndr);
  
  printf("Year Level: ");
  scanf("%d", &yr_lvl);
  
  printf("# of Subjects: ");
  scanf("%d", &subs_no);
  
  printf("====Students Accounting System====\n");
  
  switch(crse_code)
  {
   case 1:
    tuition = 356.75;
	reg_fee = 545.00;
	misc_fee = 1000.45;
	lab_fee = 1900.75;
    break;
   case 2:
    tuition = 357.75;
	reg_fee = 550.00;
	misc_fee = 1050.35;
	lab_fee = 1920.20;
    break;
   case 3:
    tuition = 345.94;
	reg_fee = 555.00;
	misc_fee = 1100.25;
	lab_fee = 1939.65;
    break;
   case 4:
    tuition = 312.62;
	reg_fee = 560.00;
	misc_fee = 1150.15;
	lab_fee = 1959.10;
    break;
   case 5:
    tuition = 378.44;
	reg_fee = 565.00;
	misc_fee = 1200.05;
	lab_fee = 1978.55;
    break;
   case 6:
    tuition = 326.11;
	reg_fee = 570.00;
	misc_fee = 1249.95;
	lab_fee = 1998.00;
    break;
   case 7:
    tuition = 310.45;
	reg_fee = 610.00;
	misc_fee = 1299.85;
	lab_fee = 2017.45;
    break;
   case 8:
    tuition = 399.79;
	reg_fee = 624.00;
	misc_fee = 1349.75;
	lab_fee = 2036.90;
    break;   	  	      	             
  }
  
 totl_u = 3 * subs_no;
 titun_pr_u = tuition / 3; 
 totl_fee = tuition + reg_fee + misc_fee + lab_fee;
 
 pre = totl_fee * 0.53;
 
 midA = totl_fee * 0.64;
 midB = midA - pre;
 
 semiA = totl_fee * 0.75;
 semiB = semiA - midA;
 
 final = totl_fee;
 
 printf("Total Units: %d\n", totl_u);
 printf("Tuition per Unit: %.2f\n", titun_pr_u);
 printf("Total Tuition: %.2f\n", tuition);
 printf("Registration Fee: %.2f\n", reg_fee);
 printf("Miscellaneous Fee: %.2f\n", misc_fee);
 printf("Laboratory Fee: %.2f\n", lab_fee);
 printf("Total Fees: %.2f\n", totl_fee);
 printf("Prelim Assessment(53 Percent): %.2f\n", pre);
 printf("Midterm Assessment(64 Percent): %.2f\n", midB);
 printf("Semi-Final Assessment(75 Percent): %.2f\n", semiB);
 printf("Final Assessment(Full Payment): %.2f\n", final);  
  
}

