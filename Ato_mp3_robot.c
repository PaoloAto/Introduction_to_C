/*
* COMPRO1 Machine Problem Part III
* LASTNAME, FIRSTNAME
* ID Number
* SECTION
*
* This code is making the functions that will be responsible for the movement of the robot.
*
*     
* NOTES:                                                                    
* 1. Change the word "lastname" in the filename to your own last name.      
*    For example, if your last name is SANTOS, then this file should be     
*    named as santos_mp3_robot.c   
*                                          
* 2. Your main task is to fill-up the body of the functions given below.                
*                                                                           
* 3. The following are NOT ALLOWED:           
*                              
*    a. calling printf() inside the functions except in DisplayStatus(),    
*       and Quit() functions.                                               
*
*    b. addition of  new codes other than the implementation of the body      
*       of the functions and the entries in this preamble                   


*


*    c. changing the return type, function name and parametrizations        
*/
                                             
#include <stdio.h>
#include "mp2_math.h"  
#include "mp3_robot.h"



// This Function resets the values of pfRobotX,pfRobotY, amd pdRobotAngle to 0
void 
InitializeReset(float *pfRobotX, float *pfRobotY, double *pdRobotAngle)
{
	 *pfRobotX = 0;
	 *pfRobotY = 0;
	 *pdRobotAngle = 0;
	 
}


// This Function shows the current values of pfRobotX,pfRobotY, amd pdRobotAngle
void 
DisplayStatus(float fRobotX, float fRobotY, double dRobotAngle)
{

printf("\n The current position is: (%.4f,%.4f) \n Current orientation is: %.2lf degrees \n",fRobotX,fRobotY,dRobotAngle);     

}   


//This function solves for the new position if forward distance is to be added
void 
TranslateForward(float fDistance, float *pfRobotX, float *pfRobotY, double dRobotAngle)
{
    
     *pfRobotX = *pfRobotX + fDistance * cosine(dRobotAngle*PI/180); 
     
     *pfRobotY = *pfRobotY + fDistance * sine(dRobotAngle*PI/180);
    
}

//This function solves for the new position if backward distance is to be added
void 
TranslateBackward(float fDistance, float *pfRobotX, float *pfRobotY, double dRobotAngle)
{
     
	*pfRobotX = *pfRobotX + fDistance * cosine((dRobotAngle+180)*PI/180);
     
    *pfRobotY = *pfRobotY + fDistance * sine((dRobotAngle+180)*PI/180);
    
}

//This function solves for the new angle if rotated counterclockwise
void 
RotateCounterClockwise(double dTheta, double *pdRobotAngle)
{
     *pdRobotAngle = *pdRobotAngle + dTheta;
     while(*pdRobotAngle>360 || *pdRobotAngle<-360)
      *pdRobotAngle = 360;

}

//This function solves for the new angle if rotated clockwise
void 
RotateClockwise(double dTheta, double *pdRobotAngle)
{
    *pdRobotAngle = *pdRobotAngle - dTheta;
    while(*pdRobotAngle>360 || *pdRobotAngle<-360)
      *pdRobotAngle = 360;

}

//This function ends the simulation
void 
Quit(void)
{
	
printf("\nEND SIMULATION\n");
     
}

  
/***************************  END OF THIS FILE *******************************/


