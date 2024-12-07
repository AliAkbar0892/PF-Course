/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 13
Description: To design general m n solution for die hard problem*/
## Psuedocode
### START
  INPUT 'm', 'n'
  gcd = m
  a = n 
  WHILE (a != 0)
    remainder = gcd % a;
    gcd = a
    a = remainder
  END WHILE
  max = m + n - gcd  
  PRINT "Maximum quantity you can measure is max"
  PRINT "Possible quantities (up to maximum):"
  i = 1;
  WHILE (i <= max / gcd)
    PRINT i * gcd
    i = i + 1
  END WHILE
### END


## IPO
 ### INPUT:
 take m and n from user as input;
### PROCESSING:
we first store value of m in a gcd variable and value of n in 'a' variable. The loop will check the condition and find the GCD. we know that any amount of water that is a multiple of the GCD of m and n can be measured. after that the statement will measure the maximum amount of water that can be measured is calculated.
after that all the possible quantities of water will be measured. next loop will calculate all possible water quantities you can get as input from the user.
### OUPUT:
the maximum amount that can be measured and the all possible quantities that can be measured are printed.

## understanding and approach:
i knew that to calculate the possible quantities i needed the GCD so that is calculated.

## Flowchart
![IMG-20240915-WA0027](https://github.com/user-attachments/assets/fd453f01-cced-4e08-81ea-f0b730ed2a84)
