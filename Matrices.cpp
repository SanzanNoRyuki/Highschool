#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


main() {
	
int pole [10][5],i,j,min=100,max=0;
srand(time(0));

for (i=0;i<10;i++) {
	for (j=0;j<5;j++) { pole[i][j]=rand()%100;
						cout << pole[i][j] << "  ";		
						}
						cout << endl;
						}
						
						
									
						
	for (i=0;i<10;i++) {
	for (j=0;j<5;j++) { 
						if (pole[i][j]<min) min=pole[i][j];
						if (pole[i][j]>max) max=pole[i][j];
						}
						}					
						
						
						
	cout << endl << endl;					
	cout << "Najmensie cislo je: "  << min << endl;					
	cout << "Najvacsie cislo je: "  << max << endl;										
	cout << endl;
	
system("pause");
}
