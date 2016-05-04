#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

//use quotes when the file is one of your own.
//the <> #includes above are for system header files
#include "person.h"

int main(int argc,char *argv[])
{
   char *friName = "Joeshmoasdasd";
   char *friName2 = "Ben";
   char *friNames[5];
   friNames[0] = friName;
   friNames[1] = friName2;
   friNames[2] = "Dale";
   struct Person *joe = Person_create("Joe Alex",32,64,140,friNames,2);
   struct Person *frank = Person_create("Frank Blank",20,72,180,friNames,2);
   

   printf("Joe is at memory location %p:\n",joe);
   Person_print(joe);

   printf("Frank is at memory location %p:\n",frank);
   Person_print(frank);

   joe->age += 50;
   joe->height += 10;
   joe->weight += 50;
   Person_print(joe);

   frank->age += 20;
   frank->weight += 50;
   Person_print(frank);

   //destroy the structs so we clean up
   Person_destroy(joe);
   Person_destroy(frank);

   return 0;
}
	
