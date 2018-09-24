/*
Assignment: 2
<mem>

Name: Sam Naumann
Email: sbnaumann@middlebury.edu
Date: 9/26/2018
Collaborators: None

To compile: 
To run:
*/ 

#include <stdio.h>

// The memory addresses are printed out in Hexadecimal Format, they are stored next to one another in order, the
// the chars are only one byte in length but the pointers are 8bits
// 
int dispMem(){
 char a, b, c, *s, *t, *u;
 printf("&a: %p, &b: %p, &c: %p, &s: %p, &t: %p, &u: %p\n", &a,&b,&c,&s,&t,&u);  

 a = 'A'; 
 b = 'B'; 
 c = 'C'; 
 s = &a; 
 t = &b; 
 u = &c;

 printf("&s: %p, &t: %p\n", &s, &s+1);
 
}

int main(int argc, char * argv[]){
  
  dispMem(); 
  

}

