/*
* COMPRO1 Machine Problem Part III
* LASTNAME, FIRSTNAME
* ID Number
* SECTION
*
* Give a short description of what this source code is all about.
*
*                                                                          
* NOTES:                                                                     
* 1. Change the word "lastname" in the filename to your own last name.       
*    For example, if your last name is SANTOS, then this file should be      
*    named as santos_mp3_main.c                                               
*
* 2. Your main task for this file is to fill-up the body of main() function.               
*
* 3. You are NOT ALLOWED to add new codes other than the implementation      
*    of the body of the main() function.                                      
* 
* 4. You have to compile and link this file with the object files corresponding   
*    to your lastname_mp3_robot.o (object file) and lastname_mp2_math.o (object file)
*    in order to produce the executable file.   
*
*
*    COMPILE STEPS:
*       gcc -Wall -c -m32 lastname_mp2_math.c
*       gcc -Wall -c -m32 lastname_mp3_robot.c
*       gcc -Wall -c -m32 lastname_mp3_main.c
*
*
*       The output of the compile steps above are the 3 object files (.o) to be
*       used in the link step below.
*
*   LINK STEP:
*       gcc -Wall -m32 lastname_mp3_main.o lastname_mp2_math.o lastname_mp3_robot.o
*
*       The output of the link step is the a.exe file.
*/


#include <stdio.h>
#include "mp3_robot.h"
#include "Lastname_mp3_robot"

/* 
* main function for Robby simulation 
*
*/
int 
main(void)
{
  /* 
     NOTE #1:
     You are allowed to declare only SIX variables corresponding to:
     - robot's position, i.e. x and y coordinates  (2 variables)
     - robot's orientation (1 variable)
     - translation distance (1 variable)
     - rotation angle (1 variable)
     - command code (1 variable)
   
     NOTE #2:
     Write the C statements corresponding to the following steps:
     1. First and foremost, call the function InitializeReset() to initialize
        the robot's position and orientation.
     2. Ask the user to input the command code.  If the command requires
        additional data (for example: translate command requires a translation
        distance; the rotate command requires a rotation angle), 
        ask the user to input the appropriate data value using scanf().
     3. Call the function that corresponds to the command code.
     4. If the command code is not yet for the Quit() function, repeat again
        from step 2.  If the command code is for quit, terminate the program
        execution.

    
     NOTE #3: 
     Make sure that you use the macro names which were defined in  
     mp3_robot.h file.  They can be used with if-else statement or with
     switch-case statement.
  
   
     NOTE #4: (VERY IMPORTANT!)
     The main() function that you are implementing here is actually for your use;
     i.e., so that you can check and verify the correctness of your solution.

     For the actual black box test, I will use my own main() function and link it 
     with your lastname_mp3_robot and lastname_mp2_math object files.  The resulting 
     executable file should also be 100% semantically correct for you to earn a 
     perfect grade.   


    
         PLEASE REMOVE THIS COMMENT FROM YOUR SOURCE CODE
         TO SAVE ON INK (WHEN YOU PRINT YOUR HARDCOPY).

  */
	 float fRobotX, fRobotY;   /* Robby’s position */
     double dRobotAngle;       /* Robby’s orientation (in degrees) */
     float fDistance;          /* translation distance */
     double dTheta;            /* rotation angle */  
     int ncmd_code;            /* command code */         
   

     InitializeReset(&fRobotX, &fRobotY, &dRobotAngle);
     do 
     {
        scanf("%d", &ncmd_code);
        switch(ncmd_code)
	{
        case DISPLAY_STATUS         : DisplayStatus(fRobotX, fRobotY, dRobotAngle);
                                      break;

        case TRANSLATE_FORWARD      : printf("Input translation distance: ");
                                      scanf("%f", &fDistance);
                                      TranslateForward(fDistance, &fRobotX, &fRobotY, dRobotAngle);
                                      break;

        case TRANSLATE_BACKWARD     : printf("Input translation distance: ");
                                      scanf("%f", &fDistance);
                                      TranslateBackward(fDistance, &fRobotX, &fRobotY, dRobotAngle);
                                      break;

        case ROTATE_COUNTERCLOCKWISE: printf("Input rotation angle (degrees): ");
                                      scanf("%lf", &dTheta);
                                      RotateCounterClockwise(dTheta, &dRobotAngle);
                                      break;

        case ROTATE_CLOCKWISE       : printf("Input rotation angle (degrees): ");
                                      scanf("%lf", &dTheta);
                                      RotateClockwise(dTheta, &dRobotAngle);
                                      break;

        case RESET                  : InitializeReset(&fRobotX, &fRobotY, &dRobotAngle);
                                      break;

        case QUIT                   : Quit();
                                      break;
        default                     : printf("Invalid command, try again.\n");
     
        } /* switch-case */
     } while (ncmd_code != QUIT);



	return 0;

}




