#include<stdio.h>
#include<stdlib.h>
#define MAX_NUM 255

void main(){

  FILE *outputfile;         
  outputfile = fopen("toneresult.txt", "w");

  if (outputfile == NULL) {          
  
    printf("cannot open\n");         
  
    exit(1);                         

  }
  
  int i, l;
  int n[MAX_NUM];

  printf("Enter:the length of tones\n");
  scanf("%d",&l);
  printf("Enter:tone(1-8)\n");

  for(i = 0; i < l; i++){
  	scanf("%d",&n[i]);
  }

  for(i = 0; i < l; i++){

    switch(n[i]){

      case 1:
        printf("tone(PINNO, 262, BEAT) ;\n");
        fprintf(outputfile, "tone(PINNO, 262, BEAT) ;\n");
        break;

      case 2:
        printf("tone(PINNO, 294, BEAT) ;\n");
        fprintf(outputfile, "tone(PINNO, 294, BEAT) ;\n");
        break;

      case 3:
        printf("tone(PINNO, 330, BEAT) ;\n");
        fprintf(outputfile, "tone(PINNO, 330, BEAT) ;\n");
        break;

      case 4:
        printf("tone(PINNO, 349, BEAT) ;\n");
        fprintf(outputfile, "tone(PINNO, 349, BEAT) ;\n");
        break;

      case 5:
        printf("tone(PINNO, 392, BEAT) ;\n");
        fprintf(outputfile, "tone(PINNO, 392, BEAT) ;\n");
        break;

      case 6:
        printf("tone(PINNO, 440, BEAT) ;\n");
        fprintf(outputfile, "tone(PINNO, 440, BEAT) ;\n");
        break;

      case 7:
        printf("tone(PINNO, 494, BEAT) ;\n");
        fprintf(outputfile, "tone(PINNO, 494, BEAT) ;\n");
        break;
      
      case 8:
        printf("tone(PINNO, 523, BEAT) ;\n");
        fprintf(outputfile, "tone(PINNO, 523, BEAT) ;\n");
        break;

      default:
        fprintf(outputfile, "No result\n");
        printf("No result\n");
        break;

    }

  }
  
  fclose(outputfile); 
  getch(" ");

}
//Powered by Mogu