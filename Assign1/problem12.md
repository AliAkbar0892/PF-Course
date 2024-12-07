/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 12
Description: To check if you can get 4 liter water using one 3L and one 5L jug */

## Psuedocode
### START
 INPUT L3 , L5
 FILL L3;
 L5 = L3;
 FILL L3;
 L5 = L3;
 EMPTY L5;
 L5 = L3;
 FILL L3;
 L5 = L3;
 PRINT " L5 ";
### END

## IPO
 ### INPUT:
 Take two jugs of five and 3 liters
### PROCESSIONG:
fill l3 jug. empty it in l5. now l3 is empty and l5 have 3 liters of water. fill l3 jug to full, pour it in l5 jug leaving you behind with 1 liter in l3.
Now, l3 have 1 liter water and l5 have 5 liter. Empty l5, pour 1 liter from l3 into l5. fill l3 to full, pour that 3 liter water in l5.
### OUTPUT: Now, you have empty 3 liter jug and in 5 liter you have 4 liters of water. 


## understanding & approach:
my approach was to just pour whole water from one jug into the other without leaving half in one. this solution is the closest to that. i tried to fill one jug with one liter water and because then 3 litter jug can fill it to 4 liters

 ## Flowchart
 ![IMG-20240915-WA0025](https://github.com/user-attachments/assets/13712eb0-00d7-4120-9ada-393ff504dcb9)


