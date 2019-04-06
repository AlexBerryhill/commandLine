/*************************************************************************
* Program:                                                                 
*    Assignment 43, Command Line                                           
*    Brother Ridges, CS124                                                 
* Author:                                                                  
*    Alexander Berryhill                                                   
* Summary:                                                                 
*    This program will convert feet to meters.                             
*                                                                          
*                                                                          
*                                                                          
*                                                                          
*    Estimated:  0.5 hrs                                                   
*    Actual:     0.5 hrs                                                   
*      The most difficult part was rounding to the right spot              
*************************************************************************/

#include <cstdlib>
#include <iostream>
using namespace std;

/*************************************************************************
 * convert will convert feet to meters                                     
 ************************************************************************/
float convert(float feet)
{
   return feet * 0.3048;
}

/*************************************************************************
 * display will display the converted number  
 ************************************************************************/
void display(float feet)
{
   cout.setf(ios::fixed);
   cout.precision(1);
   cout << feet << " feet is " << convert(feet) << " meters\n";
}

/*************************************************************************
 * main will run though the console input displaying each one.             
 ************************************************************************/
int main(int argc, char ** argv)
{
   float feet;
   for (int i = 1; argv[i]; i++)
   {
      feet = atof(argv[i]);
      display(feet);
   }
   return 0;
}
