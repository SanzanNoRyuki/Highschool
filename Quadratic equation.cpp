#include <iostream>
#include <tgmath.h> 

using namespace std;


main()
{
	
	int a,b,c,x1,x2,diskriminant;
	
	cout << "Zadaj kvadraticky exponent: ";
	cin >> a;
	cout << "Zadaj linearny exponent: ";
	cin >> b;	
	cout << "Zadaj absolutny exponent: ";
	cin >> c;	
	
	diskriminant=b*b-4*a*c;
	
	x1=(-b+sqrt(diskriminant))/(2*a);
	x2=(-b-sqrt(diskriminant))/(2*a);
	
	if (diskriminant>0) cout << "Dana rovnica ma 2 riesenia: " << x1 << " a " << x2 <<"." <<endl;
	if (diskriminant==0) cout << "Dana rovnica ma 1 riesenie: " << x1 <<"." <<endl;
	if (diskriminant<0) cout << "Dana rovnica nema riesenie." <<endl;
	
	
	
	
	
	
	
	
	system("pause");
}
