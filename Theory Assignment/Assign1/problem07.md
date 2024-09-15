/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 7
Description: To output floor number using given binary string*/
## Psuedocode
### START
  INPUT binary-string;
  SWITCH (binary-string)
    CASE "1111110":
     PRINT "floor = 0"
      BREAK
    CASE "0110000":
     PRINT "floor = 1"
      BREAK
    CASE "1101101":
     PRINT "floor = 2"
      BREAK
    CASE "1111001":
     PRINT "floor = 3"
      BREAK
    CASE "0110011":
     PRINT "floor = 4"
      BREAK
    CASE "1011011":
     PRINT "floor = 5"
      BREAK
    CASE "1011111":
     PRINT "floor = 6"
      BREAK
    CASE "1110000":
     PRINT "floor = 7"
      BREAK
    CASE "1111111":
     PRINT "floor = 8"
      BREAK
    CASE "1111011":
     PRINT "floor = 9"
      BREAK
    DEFAULT:
      PRINT "Invalid input"
      BREAK
  END SWITCH
### END

## IPO:
### INPUT:
take binary-string as input from user.
### PROCESSING:
switch statement will match the given binary code with the floor number. it will execute the case with the matching code.
### OUTPUT:
floor number corresponding to the given binary digit will get executed.
## Understanding ad approach:
i used switch for this problem because it by far most convenient and easy-to-use method for this code. i first wrote the binary digit for each floor using the given diagram and inserted them into this switch conditions 
