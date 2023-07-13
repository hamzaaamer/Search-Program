#include <iostream>
#include <string>
using namespace std;
int
main ()
{
  // Using Cout for program title. 
  cout <<
    " SERCH PROGRAM OF NUM B/W 1 TO 10 _____ Enter 0 to EXIT THE PROGRAM " <<"\n";
    
  cout << " ____________________________________ ";

  // Array for Numbers ranging from 1 to 10.
  int n = 100;
  int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


  // Hare Using While loop to put the program in loop, and 0 will switch off the program.
  while (n != 0){
    
      // Using Cout and Cin for user command.
      cout << "\n ____________________________________ ";
      cout << "\n Enter a number FROM 1 TO 10: ";
      cin >> n;

      // Using For loop.
      for (int i = 0; i < 10; i++){
	
	    
	  if (numbers[i] == n){
	    cout << " \n (*_*) The Number " << n << " is detected. " <<endl;
	}
	  
	  else if (n > 10){
	      cout << " \n (0_0) The Number " << n << " is not detected. " <<endl;
	    break;
	      
	  }

	}
	
	

    }
    }

