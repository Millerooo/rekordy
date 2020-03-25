#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct gra1
{
       string tytul;
	    string wydawca;
		 string gatunek;
		  int rok_wydania;
		         int ocena;
} typ;

struct gra2
{
       string tytul;
	    string wydawca;
		 string gatunek;
		  int rok_wydania;
		         int ocena;
};
int main ()

{
	cout<<"podaj tytul";
	cin>>gra1,gra2;
	cout<<"podaj gatunek";
	cin>>gra1,gra2;
	cout<<"wpisz ocene";
	cin>>gra1,gra2;
	
	
 gra1.tytul = "Counter-Strike";
 gra1.wydawca ="VALVE";
 gra1.gatunek ="FPS";
 gra1.rok_wydania ="1998";
 gra1.ocena	ocena ="8/10";
 
 
 	cout<<endl<<gra1.tytul;
 	cout<<endl<<gra1.wydawca;
 	cout<<endl<<gra1.gatunek;	
 	cout<<endl<<gra1.rok_wydania;
 	cout<<endl<<gra1.ocena	ocena;
 
 gra2.tytul = "Fifa";
 gra2.wydawca ="Ea sports";
 gra2.gatunek ="Sportowa";
 gra2.rok_wydania ="2020";
 gra2.ocena	ocena ="7/10";
 
 	cout<<endl<<gra2.tytul;
 	cout<<endl<<gra2.wydawca;
 	cout<<endl<<gra2.gatunek;	
 	cout<<endl<<gra2.rok_wydania;
 	cout<<endl<<gra2.ocena;
 
 return 0;	
}
