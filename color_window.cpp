#include <iostream>
#include <windows.h>
using namespace std;

// ID	    Color	ID	    Color
// 1	    Blue	9	    Light Blue
// 2	    Green	0	    Black
// 3	    Aqua	A	    Light Green
// 4	    Red	    B	    Light Aqua
// 5	    Purple	C	    Light Red
// 6	    Yellow	D	    Light Purple
// 7	    White	E	    Light Yellow
// 8	    Gray	F	    Bright White

int main()
{
    // 1 for background Color(Grey)
    // D for text color(Light Purple)
    system("Color 5B");
    
    // Print any message
    cout << "##################################################################" << endl;
    cout << "                  Colored text & background in C++!               " << endl;
    cout << "##################################################################\n" << endl;

    cout << R"(
                           ((((((*                          
                       (((((((((((((((                      
                  ((((((((((((((((((((((((*                 
              (((((((((((((((,.,(((((((((((((((             
         *(((((((((((                   (((((((((((         
       (((((((((((                         (((((((((((      
       (((((((((                             (((((((((      
       ((((((((           (((((((((        (((((((((((      
       (((((((         ((((((((((((((( (((((((((((((((      
       ((((((         (((((((((((((((((   ((((((  ((((      
       ((((((         (((((((((((((((       (        (      
       ((((((         (((##########((((   ((((((  ((((      
       (((((((         ############### (((((((((((((((      
       ((((((((           #########         ((((((((((      
       (((((####                             ###((((((      
       (##########                         ##########(      
          ###########*                 ############         
              ################(################             
                   #######################                  
                       ###############                      
                            #####                                                     
    )" << endl;
    
    system("PAUSE");
    return 0;
}