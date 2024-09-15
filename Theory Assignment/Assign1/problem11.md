/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 11
Description: To check if two numbers are co primes are not*/

## Psuedocode
### START
  INPUT 'a' as a small number, 'b' as a large number;
  c = a+1;
  IF ( c == b ) THEN
     PRINT "'a' and 'b' are consecutive and therefore coprime"
  ELSE
     i = 2;
     WHILE ( i <= a && i <= b ) 
        IF ( a % i == 0 && b % i == 0 ) THEN
           PRINT "'a' and 'b' are not coprime"
           RETURN 0;
        END IF
        i++;
     END WHILE
     PRINT "'a' and 'b' are coprime"
  END IF
### END
 

## IPO
## INPUT:
take a as a small number and b as a larger number 
## PROCESSIONG:
c will increment a and will compare it with b if both are equal that means a and b are consecutive and are co prime. if not then in else condition of the loop will be checked. in while if i is multiple of both a and b then a and b are not co prime and program ends. if IF condition is not true  then loops continuous until i becomes larger than a or b. then since we haven't found any multiple greater than 1 then a and b are co prime and program ends
## OUTPUT:
if the a and b are co prime or not according to condition will be outputted. 

## understanding and approach
 since for the number to be co prime either they should be consective or they should have 1 as their GCD. i have conditions that will check both.
