#include<iostream>
using namespace std;
int main ()
{
	
   int i, j,temp,pass=0;
  string imePrezime = "Marija Stojanovska INKI966";
int arr1[imePrezime.size()];
cout <<"Vneseni elementi ...\n"; //presmetuvanje na aski kod 

for(int i = 0; i<imePrezime.size(); i++){
	arr1[i] = int(imePrezime[i]);
	cout << arr1[i] << "\t";
}
cout<<endl;
for(i=0; i<imePrezime.size(); i++) {
   for(j = i+1; j<imePrezime.size(); j++)
   {
      if(arr1[j] < arr1[i]) {
         temp = arr1[i];
         arr1[i] = arr1[j];
         arr1[j] = temp;
      }
   } 
pass++;
}
cout <<"Podredena lista na elementi...\n";
for(i = 0; i<imePrezime.size(); i++) {
   cout <<arr1[i]<<"\t";
}
cout<<"\nBroj na cekori zemeni za da se sortira listata:"<<pass<<endl;
return 0;
}
/*Programata proveruva za sekoj element od pocetok ko kraj dali ima pomal od nego vo nizata 
Najprvo ke se prover za golemo M acki kodot, dokolku ima element so pomal aski kod ke go zameni mestoto na M, 
potoa na ist nacin ke se proverii za a,r,i... se do pslednata vrednost.Tie dva elementi ni se i i j. Od kako 
ke se smeni vrednosta na i se zapisuva vo temp, vrednosta na j vo i, i vrednosta na temp vo j*/