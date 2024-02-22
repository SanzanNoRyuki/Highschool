#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


main() {
	int i,j,b1,b2,c1,c2,z=0;
	char pole [9][9],a1,a2;

cout << "  " << "Zadaj suradnice prvej damy: ";
cin >> a1;
cin >> b1;
c1=(int)a1-64;


cout << "  " << "Zadaj suradnice druhej damy: ";
cin >> a2;
cin >> b2;
c2=(int)a2-64;


cout << endl << "  " << "X" << "  ";
for (i=1;i<9;i++) cout << i << "  ";
cout << endl;


for (i=1;i<9;i++) {

	cout << "  ";
	cout << char(i+64) << "  ";

	for (j=1;j<9;j++) { pole[i][j]= 'X';

						if (j==b1 && i==c1) pole[i][j]='D';
						if (j==b2 && i==c2) pole[i][j]='D';

						cout << pole[i][j] << "  ";
						}
						cout << endl;
						}



if (b1==b2 || c1==c2) z=z+1;
for (i=0;i<=8;i++) {
if (b1+i==b2 && c1+i==c2) z=z+1;
if (b2+i==b1 && c2+i==c1) z=z+1;
}



if (z==0) cout << endl << "  " << "Damy sa neohrozuju." << endl << endl;
if (z==1) cout << endl << "  " << "Damy su v ohrozeni." << endl << endl;
if (z==3) cout << endl << "  " << "Je len jedna dama." << endl << endl;

system("pause");
}
