#include <stdio.h>      
#include <time.h>       // biblioteka za vreme

int main () 
{
  time_t rawtime;          // deklaracija na promenliva od tipot time_t
  struct tm * timeinfo;    // deklariranje na pokazuvac

  time ( &rawtime );       
  timeinfo = localtime ( &rawtime );  
  printf ( "Momentalniot datum/vreme e: %s", asctime (timeinfo) );  // Pecatenje na momentalno vreme

  return 0;     }           

/* Kodot vklučuva dve standardni biblioteki C: stdio.h i time.h. Potoa deklarira promenliva time_t rawtime i pokažuvač na promenliva struct tm timeinfo.
Ja povikuva funkcijata time() za da go dobie tekovnoto vreme i go skladira vo promenlivata rawtime. Ja povikuva funkcijata localtime() što go pretstavuva lokalnoto vreme.
Izlezot na ovaa programa ke bide momentalniot datum i vreme vo format: Momentalniot datum/vreme e: Tue Mar 07 20:58:04 2023 */