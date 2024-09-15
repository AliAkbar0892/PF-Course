/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 6
Description: To check if a visitor meets the criteria to go on a chosen ride based on their height, age, and selected ride.*/
##Psuedocode
### START
 INPUT height, age, ride.
 IF(ride== The Dragon Roller Coaster)THEN
   IF(age>=10 && heigh>=48)THEN
      PRINT "You meet the criteria for The Dragon Roller Coaster"
   ELSE 
      PRINT "Sorry, you do not meet the criteria for The Dragon Roller Coaster."
   END IF
 END IF
 IF(ride== The Sky Swing)THEN
   IF(height>=54)THEN
      PRINT "You meet the criteria for The Sky Swing"
   ELSE 
      PRINT "Sorry, you do not meet the criteria for The Sky Swing."
   END IF
 END IF
 IF(ride== The Carousel)THEN
   IF(age>=5)THEN
      PRINT "You meet the criteria for The Carousel"
   ELSE 
      PRINT "Sorry, you do not meet the criteria for The Carousel."
   END IF
 END IF
### END
      

## IPO:
  ###INPUT:
  Take height age and desired ride as input from user
### PROCESSING:
first conditions are checked to match with the desired ride. when desired ride is found, the conditions for that ride are checked for the dragon roller costar age should be greater than 9 and height should be greater than 47 inches. Same as all conditions are checked and permission for that specific ride is allowed based on that criteria.
### OUTPUT:
if conditions are met then the ride is allowed if not then ride is not allowed.

## Understanding & approach:
i used the same technique as the last time. After analyzing it became clear to chose the ride first and then check the conditions. When ride is selected and conditions are checked. i used the & operator in first because both were required to be true. if anyone is false then the program will not allow the ride. IN later conditions only one condition is required to be true. 
## Flowchart
![IMG-20240915-WA0026](https://github.com/user-attachments/assets/5ecb7044-04e6-4b56-8345-cb2db47add2b)

