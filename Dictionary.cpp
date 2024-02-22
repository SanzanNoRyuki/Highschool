#include <iostream>
#include <fstream>
using namespace std;

main()
{
ifstream f;
bool a=false;
string en,sk,slovo,preklad;
char x=' ';


cout << "Zadaj slovo:";
cin>>slovo;
cin.get();


f.open("slovniKKK.txt");
while (!f.eof()){
     
      f>>sk;
      if(slovo==sk){ f>>en;
     
                    cout<<"Preklad je "<<en<< "."<<endl;
                    a=true;
                    break;                                      
                    }
      }

if (a==false){

cout<<"Slovo nie je v slovniku. Zadaj preklad:"<<endl;
ofstream g;
g.open("slovniKKK.txt", ios::app);
g<<x;
g<<slovo;
g<<x;
cin>>preklad;
g<<preklad;
g<<x;
g.close();
}


f.close();
system("pause");
}
