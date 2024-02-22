#include <iostream>

using namespace std;
main()
{

  int pole[100],min, i, a=0, max, n, c,d, pomoc;


    cout <<"Zadaj pocet cisel: ";
    cin >> n;

  for (i=0;i<n;i++) {
  a=a+1;
  cout <<"Zadaj " << a << " cislo: ";
  cin>> pole [i];
  }



  {
      for (c = 0; c < n - 1; c++) {
          max= c;
      for (d = c + 1; d < n; d++) {
              if (pole[d] < pole[max]) max = d;
          }
          pomoc = pole[c];
          pole[c] = pole[max];
          pole[max] = pomoc;
      }
   }





    cout <<"Zoradene cisla: " << endl;
    for ( c = 0 ; c < n ; c++ )
       cout <<  pole[c] << endl;

   cout << endl;
   cout << endl;

system("pause");
}
