/* Name    : Ali Akbar
   ID      : 24k-0892 
Section    : 1C
Problem    : 5
Description: To check moisture of field and should irrigation be initiated*/
## Psuedocode
### START
 INPUT type of field, moisture
 IF (type of crop==wheat)THEN
      IF (moisture<30% && it as not rained in last 24 hour)THEN
            "INITIATE SYSTEM IRRIGATION"
      ELSE
            "DO NOT INITIATE SYSTEM IRRIGATION"
      END IF
 END IF
 IF (type of crop==corn)THEN
      IF (moisture<40%)THEN
            "INITIATE SYSTEM IRRIGATION"
      ELSE
            "DO NOT INITIATE SYSTEM IRRIGATION"
      END IF
 END IF
 IF (type of crop==rice)THEN
      IF (moisture<25% && it as not rained in last 24 hour)THEN
            "INITIATE SYSTEM IRRIGATION"
      ELSE
            "DO NOT INITIATE SYSTEM IRRIGATION"
      END IF
 END IF
### END


## IPO:
### INPUT:
 take type of crop and moisture of the land as input.
###PROCESSIONG:
 Check all if statement. Where crops are same, it will execute the body. In inner IF if the condition is true then the irrigation will be initiated if not then the irrigation will not be initiated. for corn the last rain fall doesn't matter but for wheat and rice it does.
###OUTPUT:
 if desired conditions are met and moisture levels are low then irrigation will be initiated

## understanding and approach:
 I first analyzed the question forming the understanding of what and how this work. then i used the if conditions to check the type of the crop. in each if i used nested if to check moisture levels in each crop. if desired conditions are not met and moiture levels are low and for wheat and rice it haven't been rained then irrigation is started. i didn't used the if else if because using only ifs alone is convenient and gets the job done. 
## Flowchart
![IMG-20240915-WA0023](https://github.com/user-attachments/assets/cdc04655-01d8-446f-a39b-a86e830605f1)


