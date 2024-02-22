#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
main() {



int i,z[100],a,k,b;
string slovo;


cout << "Zadaj slovo: ";
cin >> slovo;
b=slovo.length();

cout << "Pismeno    |        ASCII         |           Binary" << endl;

for (i=0;i<b;i++) {







a=int(slovo[i])	;
int j=0;

cout <<slovo[i];


while (a>0){

z[j]=a%2;
a=a/2;
j++;

}


cout << "          |          " << int(slovo[i])<<"          |" <<"           ";







for (k=j-1;k>=0;k=k-1) cout << z[k];

cout <<endl;


}

	system("pause");

}
