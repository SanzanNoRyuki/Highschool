#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void trojuholnik (int x)
{
	
int i,j,y,t;

for(i=1;i<=x;i++){
	for(int j=x/2-i+(x-1)/2;j>=0;j--) cout<<" ";
	for(int y=1;y<=i;y++) cout<<"*";
	if(i>1)  for(int t=1;t<=i-1;t++) cout<<"*";
	
cout << endl;	
}
}


main() {	
int x;
cout << "Zadaj kolko ma byt riadkov v trojuholniku: ";
cin >> x;	
cout <<endl;
trojuholnik (x);
	
system("pause");
}
