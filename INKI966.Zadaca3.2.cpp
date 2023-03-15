#include <stdio.h>      
#include <time.h>       // biblioteka za vreme 

int main ()
{
  time_t rawtime;         // deklaracija na promenliza za momentalno vreme 

  time (&rawtime);       
  printf ("Momentalnoto lokalno vreme e: %s", ctime (&rawtime));   

  return 0;   
}
/* Programata ni ja pokazuva upotrebata na bibliotekata ctime vo bibliotekata time.h. Ja deklarira promenlivata time_t rawtime za zadržuvanje na tekovnoto vreme.
Funkcijata za vreme se povikuva so pokažuvač na rawtime za da se dobie momentalnoto vreme i da se skladira vo rawtime.Izlezot na ovaa programa ke bide momentalniot datum i vreme vo format: 
Momentalniot datum/vreme e: Tue Mar 07 20:58:04 2023 */
