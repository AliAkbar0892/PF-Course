/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 9
Description: To calculate exact Age in days, months, and years from DOB  .*/

### // SORRY FOR THIS LONG PSUEDOCODE. IT COULD BE SMALLER BUT I COUDL'NT FIGURE OUT HOW. THIS ONE IS CORRECT AND WORK LIKES A CHARM BUT IS LENGHTLY. FOR ANY QUERY REGARDING THIS CODE CHECK OUT THE HEADING OF IPO AND UNDERSTANDING AT THE END OF THE CODE.//
## Psuedocode
### START
 INPUT date of birth 'd', number of month of birth 'm', year of birth 'y';
 INPUT current date 'cd', number of current month 'cm', current year 'cy';

 IF ( cy % 400 == 0 || (cy % 100 != 0 && cy % 4 == 0)) THEN
     sum = sum + 366;
 ELSE 
     sum = sum + 365;                      
 IF (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
    IF ( (m==1 && d<=31) || (m==2 && d>=29) || (m==3 && d<=31) || (m==4 && d<=30) || (m==5 && d<=31) || (m==6 && d<=30) || (m==7 && d<=31) || (m==8 && d<=31) || (m==9      && d<=30) || (m==10 && d<=31) || (m==11 && d<=30) || (m==12 && d<=31) ) THEN
       {
        age in year 'ty' = current year - year in birth;
        age in month 'tm' = 12 - number of month of birth;
        i=1;
        WHILE( i < ty )
            age in month = age in month + 12;
            i++;
        END WHILE
        y = number of current month - 12;
        age in month = age in month + y;
        IF (m==1) THEN
           sum= 31 - d;
           sum = sum +335;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "         
        ELSE IF (m==2) THEN
           sum= 29 - d;
           sum= sum + 306 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==3) THEN
           sum= 31 - d;
           sum= sum + 275 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==4) THEN
           sum= 30 - d;
           sum= sum + 245 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==5) THEN
           sum= 31 - d;
           sum= sum + 214 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==6) THEN
           sum= 31 - d;
           sum= sum + 184 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==7) THEN
           sum= 31 - d;
           sum= sum + 153 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==8) THEN
           sum= 31 - d;
           sum= sum + 122 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==9) THEN
           sum= 30 - d;
           sum= sum + 92 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==10) THEN
           sum= 31 - d;
           sum= sum + 61 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==11) THEN 
           sum= 30 - d;
           sum= sum + 31 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==12) THEN
           sum= 31 - d;
           sum= sum + 0 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE
           PRINT "invalid date"        
    ELSE 
        PRINT " Date is invalid"    
       }
 ELSE  
     IF ( (m==1 && d<=31) || (m==2 && d>=28) || (m==3 && d<=31) || (m==4 && d<=30) || (m==5 && d<=31) || (m==6 && d<=30) || (m==7 && d<=31) || (m==8 && d<=31) || (m==9      && d<=30) || (m==10 && d<=31) || (m==11 && d<=30) || (m==12 && d<=31) ) THEN
       {
        age in year 'ty' = current year - year in birth;
        age in month 'tm' = 12 - number of month of birth;
        i=1;
        WHILE( i < ty )
            age in month = age in month + 12;
            i++;
        END WHILE
        y = number of current month - 12;
        age in month = age in month + y;
        IF (m==1) THEN
           sum= 31 - d;
           sum = sum +334;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "         
        ELSE IF (m==2) THEN
           sum= 28 - d;
           sum= sum + 305 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==3) THEN
           sum= 31 - d;
           sum= sum + 274 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==4) THEN
           sum= 30 - d;
           sum= sum + 244 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==5) THEN
           sum= 31 - d;
           sum= sum + 213 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==6) THEN
           sum= 31 - d;
           sum= sum + 183 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==7) THEN
           sum= 31 - d;
           sum= sum + 152 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==8) THEN
           sum= 31 - d;
           sum= sum + 121 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==9) THEN
           sum= 30 - d;
           sum= sum + 91 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==10) THEN
           sum= 31 - d;
           sum= sum + 60 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==11) THEN 
           sum= 30 - d;
           sum= sum + 30 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE IF (m==12) THEN
           sum= 31 - d;
           sum= sum + 0 ;
           WHILE ( y < cy )
                  IF ( y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) THEN
                      sum = sum + 366;
                      y++;
                  ELSE 
                      sum = sum + 365;
                      y++;
           END WHILE
           sum = sum + cd;
           PRINT " You are 'sum' days, 'tm' months and  'ty' years old "
        ELSE
           PRINT "invalid date"  
    ELSE 
        PRINT " Date is invalid"    
       }
 END IF
### END    

## IPO 
  ### INPUT:
  take date of birth, number of month and year of month from user. also take present date, month and year.
### PROCESSING:
first the main if statement is checked to see if the year user is born is leap or not. all code next to it depends on this if condition for leap year. THIS CODE CAN GIVE YOU AGE IN DAYS KEEPING LEAP YEAR IN MIND.  Next if statement is a validation To check if the entered date is correct or not. program continuous if the date is correct otherwise an error is displayed. after that age is year is calculated. it was easy. after year, we have while loop that calculates you age in months. each irritation in the loop will add 12 months in the age until current year is approached . After that control will check how many months have passed in the current year and add those months in the calculated loop. this will give you your total number of months i.e. your age in month. 
 After this we have the " Days Calculation" The part of the code that made it this huge. This part consist of IF ELSE IF statements. Each condition checks the month.  When the correct month is found it calculates the days that have passed in this month. and add them in the sum variable. this variable is used to store the age in days. first statement in each condition calculates number of days after date of birth. and ass them in sum variable. next condition in each condition adds remaining number of days in the year of birth. Each condition have a loop that irritates until year of birth is one less than current year
 Furthermore, each of these loops have further a if-else condition inside. these conditions check whether that each year after year of birth is leap or not. if it is leap it adds 366 in it and it not leap it will add 365 in it. when condition of loop fails control exits the loops body and add number of days of the current year into sum. and display the output. 
If year of birth is not leap then control skips the IF and enters ELSE pert in which it adds days according to non leap year. It is same as the upper if it is just for non leap year.
### OUTPUT:
when every condition is checked and control reach the end of the if or else statement if output all the data it have calculated.

## UNDERSTANDING AND APPROCH
 only thing i  understood from this code is that making logic takes eternity and gives you backpain. 
my approach was to calculate leap year and non leap years separately. all logic is made according to leapyears

     
        
   

 
