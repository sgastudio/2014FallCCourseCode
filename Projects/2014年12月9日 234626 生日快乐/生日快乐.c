#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main()
{ 
char a[]={72,97,112,112,121,32,66,105,114,116,104,100,97,121,0};
Beep(392,300);
Beep(392,200);
Beep(440,400);
Beep(392,400); 
Beep(523,400);
Beep(494,400);
Beep(0,200);
Beep(392,300);
Beep(392,200); 
Beep(440,400); 
Beep(392,400); 
Beep(597,400); 
Beep(523,400); 
Beep(0,500); 
Beep(392,300); 
Beep(392,200); 
Beep(784,400); 
Beep(659,400); 
Beep(523,400); 
Beep(494,400);
 Beep(440,400); 
 Beep(0,800); 
 Beep(698,300); 
 Beep(698,200); 
 Beep(659,400); 
 Beep(523,400); 
 Beep(587,400); 
 Beep(523,400); 
puts(a); 
system("pause");
return 0;
}
