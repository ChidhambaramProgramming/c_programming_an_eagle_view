#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Date
{
 int id;
 char name[255];
 flost price;
};

int main()
{
 FILE *fp;
 struct Date data;

 //Open a file for writing in binary mode
 fp = fopen("file.bin","wb");
 
 //Fill the data structure with some values
 data.id = 1;
 strcpy(data.name,"Product 1");
 data.price = 9.99;

 //Write the data structure in the file
 fwrite(&data, sizeof(struct Data),1,fp);
 //close the file
 fclose(fp);
 
 //Open the file for reading
 fp = fopen("file.bin","rb");

 //Read the data structure from the file
 fread(&data, sizeof(struct Data),1,fp);
 
 //Print the data that was read
 printf("Data read from file :\n");
 printf("ID : %d\n",data.id);
 printf("Name : %s\n",data.name);
 printf("Price : %.2f\n",data.price);

 //Close the file
 fclose(fp);
 return 0;
}