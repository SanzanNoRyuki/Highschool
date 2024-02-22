#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


int sucet (int j)
{
int v=0;	
for (int i=0;i<=j;i++)	v=v+i;
return v;	
}



main() {	
int x,i,j,n=0;


cout << "Zadaj cislo po ktore chces vediet sucet prirodzenych cisel: ";
cin >> x;	
cout <<endl;


for(j=1;j<=x;j++){

for (i=1;i<j;i++) cout << i << "+";

cout <<  j  << "=" << sucet(j) << endl;
}

	
cin.get();cin.get();	
}
