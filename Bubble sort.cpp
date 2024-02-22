#include <iostream>

using namespace std;
main()
{

int pole[100], i, n, c, d,e, pomoc;


  cout <<"Zadaj pocet cisel: ";
  cin >> n;

for (i=0;i<n;i++) {
cout <<"Zadaj " << i+1 << " cislo: ";
cin>> pole [i];
}


  for (c=0;c<(n-1);c++)
  {
    for (d=0;d<n-c-1;d++)
    {
      if (pole[d]<pole[d+1]) /*   Podla znamienka sa urci vzostupne, zostupne    */
      {
        pomoc     = pole[d];
        pole[d]   = pole[d+1];
        pole[d+1] = pomoc;
      }
    }
  }

  cout <<"Zoradene cisla: " <<endl;
  for ( c = 0 ; c < n ; c++ )
     cout <<  pole[c] << endl;

 cout << endl;
 cout << endl;

system("pause");
}
