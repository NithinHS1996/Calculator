/*****************************************************************************
*
******************************************************************************
*           C++   M O D U L E   S P E C I F I C A T I O N   B L O C K
******************************************************************************
*
*   Module Name:    callback.C
*
*   Project:        calculator
*
*   Author:         Nithin HS
*
*   Description:    main module
*
*   Portability:    None
*
******************************************************************************
*
*   Public
*   Functions:      list of public functions defined by this module
*
*   Public
*   Variables:      list of public variables defined by this module
*
*   External
*   Functions:      list of external functions called by this module
*
*   External
*   Variables:      list of external variables accessed by this module
*
******************************************************************************
*
*   Revision History:
*
*   Date        Rev     By      Description of Revision
*
*   08-01-2022  0.00    NHS     Initiated project
*
*****************************************************************************/

/************************/
/* System Include Files */
/************************/


/*****************************/
/* Application Include Files */
/*****************************/

#include "main.hpp"

/******************/
/* Module Defines */
/******************/

/* Module's private typedefs and defines go here. */
//using namespace callbackCalci;

/********************/
/* Module Variables */
/********************/

/* Module's private (static) variables go here. */


/********************/
/* Module Constants */
/********************/

/* Module's private (static) const variables go here. */


/*************/
/* Functions */
/*************/

/* Module's private (static) functions (FSB.C) go here. */

/* Module's public (non-static) functions (FSB.C) go here. */

/*****************************************************************************
*           C++   F U N C T I O N   S P E C I F I C A T I O N   B L O C K
******************************************************************************
*
*   Function:       addition
*
*   Call:           addition(int , int)
*
*   Input(s):       int and int
*
*   Output(s):      int
*
*   Description:    Used to calculate the addition of ints
*
*   Calls:          None
*
*****************************************************************************/
long int addition(int first, int second)
{
    return (first + second);
}
/*****************************************************************************
*           C++   F U N C T I O N   S P E C I F I C A T I O N   B L O C K
******************************************************************************
*
*   Function:       substraction
*
*   Call:           substraction(int , int)
*
*   Input(s):       int and int
*
*   Output(s):      int
*
*   Description:    Used to calculate the substraction of ints
*
*   Calls:          None
*
*****************************************************************************/
long int substraction(int first, int second)
{
    return (first - second);
}
/*****************************************************************************
*           C++   F U N C T I O N   S P E C I F I C A T I O N   B L O C K
******************************************************************************
*
*   Function:       multiplication
*
*   Call:           multiplication(int , int)
*
*   Input(s):       int and int
*
*   Output(s):      int
*
*   Description:    Used to calculate the multiplication of ints
*
*   Calls:          None
*
*****************************************************************************/
long int multiplication(int first, int second)
{
    return (first*second);
}
/*****************************************************************************
*           C++   F U N C T I O N   S P E C I F I C A T I O N   B L O C K
******************************************************************************
*
*   Function:       division
*
*   Call:           division(int , int)
*
*   Input(s):       int and int
*
*   Output(s):      int
*
*   Description:    Used to calculate the division of ints
*
*   Calls:          None
*
*****************************************************************************/
long int division(int first, int second)
{
    return (first/second);
}

