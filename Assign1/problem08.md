/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 8
Description: To prints out the sum of the digits of the given number.*/
## Psuedocode
### START
 INPUT integer number 'n'.
 s = 0
 do {
    a = n % 10   
    s = s + a    
    n = n / 10   
   } 
 while (n > 0)
 PRINT "The digit after adding are s"
### END

  
## IPO:
 ### INPUT:
 take the number whose digit you want to sum. beware the digits should not be floating.
### PROCESSING:
the loop will first execute the body. in which first statement will take the last part of the number and store it in 'a'. then it will be added in 's' which is initialized at'0'. then statement 3 of the body will be executed. in which 'n' will take remainng digit from the given number. condition will be checked until n becomes 0.
### OUTPUT:
after calculating sum it will be displayed in screen using print.

## understanding & approch:
 i used % and / operators to take the number apart. the % operator will take last digit and store it in sum. then from the number the the remining digits will be taken apart and stored in n. loop  will run until the number is 0. 
 ## Flowchart
![IMG-20240915-WA0031](https://github.com/user-attachments/assets/a61fc424-b750-4b05-b737-ca9fb568928d)

     
