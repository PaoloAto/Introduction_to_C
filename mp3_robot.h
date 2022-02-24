/* 
*  mp3_robot.h                                               
* 
* This is the header file for Part 3 of the machine problem. 
*
* NOTE: YOU ARE NOT ALLOWED TO MODIFY THIS FILE!!!           
*
*/ 


/* 
*  macro defines for the command codes 
*
*  NOTE: you will need to use these macro defines in your main() function 
*
*/

#define DISPLAY_STATUS             0     
#define TRANSLATE_FORWARD          8
#define TRANSLATE_BACKWARD         2
#define ROTATE_COUNTERCLOCKWISE    9
#define ROTATE_CLOCKWISE           3
#define RESET                      1
#define QUIT                       4
 

/* 
*  the following are the function prototypes related to the robot simulation 
*
*/

void 
InitializeReset(float *pfRobotX, float *pfRobotY, double *pdRobotAngle);

void 
DisplayStatus(float fRobotX, float fRobotY, double dRobotAngle);

void 
TranslateForward(float fDistance, float *pfRobotX, float *pfRobotY, double dRobotAngle);

void 
TranslateBackward(float fDistance, float *pfRobotX, float *pfRobotY, double dRobotAngle);

void 
RotateCounterClockwise(double dTheta, double *pdRobotAngle);

void 
RotateClockwise(double dTheta, double *pdRobotAngle);

void 
Quit(void);


/*************************  END OF THIS FILE  *************************************/



