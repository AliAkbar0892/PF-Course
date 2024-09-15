/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 10
Description: To correct the output of the number by replacing 90 with 9*/
## Psuedocode
### START
  INPUT number 'n'
  m = n;
  i = 1;
  DO 
    m = m / 10;
    i++;
  WHILE (m >= 10) 
  j = 1;
  WHILE ( j<i )
    a = n % 10;
    n = n / 10; 
    b = n % 10;
    IF ( a==0 && b==9 ) THEN
       ignore a from n
       'n'
    END IF
  END WHILE
  PRINT " corrected number 'n' "
### END


## IPO:
 ### INPUT:
 the number with error
### PROCESSING:
code will first check the number of digits of the given code. after that code will irritate for one less than total number of digits in code. there is a nested if inside while that will check if the digits are forming 90. if yes then 0 will be ignored and remaining code will run. 
### OUTPUT:
the corrected number after removing 0 after 9 will be given as output.


## understanding & approach
 i used the do while to first check how many digits does the number have. after that loop run one less then digit times. in each loop the digits will be checked if they are forming 0 and 9 separately. if yes then the inner if condition will remove 0 and store the remaining result in n and i will be outpted.

 ## Flowchart
 ![IMG-20240915-WA0020](https://github.com/user-attachments/assets/5944bc9e-a48f-45db-8e97-80b071108929)


       
