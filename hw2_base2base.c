/*
Assignment: 2 

Name: Sam Naumann
Email: sbnaumann@middlebury.edu
Date: 9/26/2018
Collaborators: None

To compile:
To run:
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrtol(char *inputNumber, char *base1) {

  int receivedNumber[strlen(inputNumber)];
  int i = 0;
  char safteyNet = '?'; 
  /*
  while (char safteyNet !='\0'){
    
    if(isdigit(*inputNumber)){
	int receivedNumber[i] = intputNumber[i];
    } else {
	return 0; 
    }
  }

    int j, decNumber = 0;  
    for(j= 0;     
  return decNumber; 
	}
  }
  */
  printf("%lu & %s", strlen(inputNumber), inputNumber);
  return 0; 
}
  

int myConverter(int editedNumber, char *base2){
  return 0; 
}


int main(int argc, char * argv[]){
  char inputNumber[strlen(argv[1])];
  char base1[strlen(argv[2])];
  char base2[strlen(argv[3])];

  strcpy(inputNumber, argv[1]);
  strcpy(base1, argv[2]);
  strcpy(base2, argv[3]);

  printf("%s & %s & %s\n", inputNumber, base1, base2); 
  myConverter(myStrtol(inputNumber, base1), base2);
  return 0; 
} 
