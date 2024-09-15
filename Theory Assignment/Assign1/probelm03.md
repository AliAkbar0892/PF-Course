/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 3
Description: To check whether age is appropriate for marriage or not in given province */
## Psuedocode
### START
  INPUT province
    IF province is Sindh THEN
        INPUT age of boy and girl
             IF age of boy age is greater then 18 AND age of girl age is greater then 18 THEN
                     PRINT "It is legal to marry 
             ELSE 
                     PRINT "It is illegal to marry"
    ELSE INPUT age of boy and girl                                                                                   
             IF age of boy is 18 or greater and age of girl is 16 or greater THEN
                     PRINT "It is legal to marry"
             ELSE  
                     PRINT "It is illegal to marry"
### END
## IPO
 ### INPUT:
 Take province, age of boy and girl from user as input.
### PROCESSING:
First, check if province is Sindh if TRUE then take input of age for both genders. after that check if both age of boy and girl is over 18 using AND operator. IF province is not Sindh then check if age of boy is 18 or greater AND age of girl is 16 or greater.
### OUTPUT:
If in first the condition is true THEN PRINT "It is legal to marry" If condition is false then PRINT "It is illegal to marry". If the first condition is false then then check condition for boy and girl. If condition is true then PRINT " it is legal to marry" ELSE " it is illegal to marry"       

## Understanding and approach:
 Legal age for marriage was given. i used if condition to first check what province we are talking about and then i checked what age both gender are and is it legal to marry in that age in that province                                                                                            
