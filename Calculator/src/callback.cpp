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
#include "callback_maths.hpp"
/******************/
/* Module Defines */
/******************/

/* Module's private typedefs and defines go here. */


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

using namespace std;
//using namespace callbackCalci;
/*****************************************************************************
*           C++   F U N C T I O N   S P E C I F I C A T I O N   B L O C K
******************************************************************************
*
*   Function:       main
*
*   Call:           main()
*
*   Input(s):       
*
*   Output(s):      
*
*   Description:    Used to start the application
*
*   Calls:          
*
*****************************************************************************/

namespace callbackCalci
{
    string menu("Enter below semantics to perform the respective calculations\n\n"
                "	+ Addition\n"
		"	- Substraction\n"
		"	/ Division\n"
		"	* Multiplication\n\n");
}

int main()
{
    cout << "Starting Calculator!!!!!\n";
    char enteredMenu;
    int first;
    int second;
    std::map<char,long int(*)(int,int)> maths_calback;
    maths_calback.insert({'+',addition});
    maths_calback.insert({'-',substraction});
    maths_calback.insert({'*',multiplication});
    maths_calback.insert({'/',division});
    while(1)
    {
        cout << callbackCalci::menu;
        cin >> enteredMenu;
        cout << "Provide values\n";
	cin >> first >> second;
	cout <<  "Value is : ";
	cout << maths_calback[enteredMenu](first,second) << "\n";
    }
    return 0;
}
