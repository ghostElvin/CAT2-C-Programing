/*
  REG NO:CT101/G/26559/25
  NAME:KAGWIRIA ELVIN MACHARIA
  */
#include <stdio.h>

//function prototypes

void writeIntegers();

void processIntegers();

void displayFiles();

int main(){

writeIntegers();

processIntegers();

displayFiles();

return 0;

}

void writeIntegers(){

FILE*file;

int num, i;

file= fopen("input.txt", "w");

if(file==NULL){

printf("Error:could not open input.txt for writing.\n");

return;

}

printf("Enter 10 integers:\n");

for (i=0; i<10;i++){

printf("integers %d: ",i + 1);

scanf("%d", &num);

fprintf(file, "%d ", num);

}

fclose(file);

printf("Data successfully written to input.txt\n\n");

}

void processIntegers(){

FILE*input, *output;

int num, sum=0, count=0;

float average;

input=fopen("input.txt", "r");

if (input==NULL){

printf("Error:could not open input.txt for reading.\n");

return;

}

while (fscanf(input, "%d", &num) !=EOF){

sum +=num;

count++;

}

fclose(input);

if (count==0){

printf("no numbers found in input.txt.\n");

return ;

}

average=(float)sum / count;

output=fopen("output.txt", "w");

if(output==NULL){

printf("Error:could not open output.txt for writing.\n");

return;

}

fprintf(output, "sum: %d\Average: %.2f\n", sum, average);

fclose(output);

printf("Result written to output.txt\n\n");

}

void displayFiles(){

FILE*file;

char ch;



printf("contents of input.txt:\n");

file=fopen("input.txt", "r");

if(file==NULL){

printf("Error:could not open input.txt.\n");

return;

}

while ((ch= fgetc(file)) !=EOF){

putchar(ch);

}

fclose(file);

printf("\n\ncontents of output.txt:\n");

file=fopen("output.txt", "r");

if (file==NULL){

printf("Error:could not open output.txt.\n");

return;

}

while ((ch=fgetc(file)) !=EOF){

putchar(ch);

}

fclose(file);

printf("\n");

}
