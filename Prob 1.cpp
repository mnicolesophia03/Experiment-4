#include <cstdlib> 
#include <iostream> 
#include <iomanip> 
  
using namespace std; 
void displaymenu()
{ 
	cout<<"MENU:\n"; 
	cout<<"     1.Add\n"; 
	cout<<"     2.Subtract\n"; 
	cout<<"     3.Multiply\n"; 
	cout<<"     4.Divide\n"; 
	cout<<"     5.Modulus\n"; 
} 

	int Add(int a,int b)
{ 
    return(a+b); 
} 
  
	int Substract(int a, int b)
{ 
    return(a-b); 
} 
  
	int Multiply(int a, int b)
{ 
    return(a*b); 
} 

	float Divide(int a,int b)
{ 
      return(a/b); 
} 

	int Modulus(int a, int b)
{ 
    return(a%b); 
} 
  
	int main(int argc, char *argv[]) 
{ 
 
	displaymenu(); 
	int choice, i1, i2; 
	char confirm; 

	do 
{ 
	cout << "\nEnter your choice (1-5): "; 
	cin >> choice; 

	cout << "Enter your two integer numbers: \n"; 
	cin >> i1 >> i2; 
	cout<<"\n"; 

	switch(choice)
	{ 
 		case 1:
		cout << "\nResult: " << Add (i1, i2); 
		break; 
 		
		case 2: 
		cout << "\nResult: " << Substract (i1, i2); 
		break; 
 		
		case 3:
		cout << "\nResult: " << Multiply (i1, i2);
		break; 
 		
		case 4:
		cout << "\nResult: " << Divide (i1,i2);
		break; 
 
 		case 5:
		cout << "\nResult: " << Modulus (i1, i2);
		break; 
 
 		default:
		cout << "INVALID"; 
    } 
                   
		cout << "\nContinue? Press y: "; 
       	cin>>confirm; 
       	
} while (confirm=='y'||confirm=='Y'); 
  system("PAUSE"); 
	return EXIT_SUCCESS; 
}
