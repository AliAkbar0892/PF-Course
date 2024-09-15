/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 2
Description: To check whether a number is even or odd */
## Psuedocode
START
    INPUT n
    IF n is an integer THEN
       IF n>0 THEN 
           IF n % 2 == 0 THEN
                PRINT "Number is even"
           ELSE
                PRINT "Number is odd"
           END IF
       ELSE
           PRINT Invalid Input"
       END IF
    ELSE
        PRINT "Invalid input"
    END IF
END
## IPO
### INPUT:
  Take a integer 'n' as input from user.
### PROCESSING:
  check that if 'n' is a integer if true then check condition if n>2 if yes then check condition if n%2==o if this condition is true then n is a even number but if this condition is false then n is not a integer.
###OUTPUT:
  print value of 'n' from condition it is in. if even display "number is even" if odd display "number is odd". If not both display "invalid input".s

## Approach to solution:
 I understand that even number are divisible by two and gave remainder 2. so i first checked if the given number is positive and negative from condition n>0. Then i used operator % to check if answer is zero or not. 
