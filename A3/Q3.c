/**
 * Programmer: Muhammed Owais 
 * Desc: Data from two file combined and stored in file
 * Date: 27/11/2023
 * Roll-No: 23K-0047
 */ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	// opens the three files
	FILE *dep = fopen("Department.txt", "r");
	FILE *per = fopen("Personal.txt", "r");
	FILE *comb = fopen("Combine.txt", "w");

	// temp stores the string data to be concatenated to newarr
	// newarr stores the whole line that is later put into the file
	char temp[20], newarr[10][20]; 
	// num[10] basically keeps track of all the ids, and count keeps track of the number of lines
	int num[10], count = 0;
	// feof(dep) returns non zero value if end is reached else returns zero
	while(!feof(dep)){
		// stores the first number(in this case the id) in num[count]
		fscanf(dep, "%d", &num[count]);
		// converts integer value to string and stores it in newarr[count]
		itoa(num[count], newarr[count], 10);
		// stores very next value(in this case name) in temp
		fscanf(dep, "%s", &temp);
		// concats a space so that id and name can have space between them
		strcat(newarr[count], " ");
		// concats the name stored in temp, this way now a whole line from file is stored in newarr
		strcat(newarr[count], temp);
		count++;
	}
	int value, i = 0;
	fprintf(comb, "Name: Muhammed Owais\nId: 23K-0047\n");
	// loop till end of file, could have used !feof(per), but this i is need to go through the newarr and num array
	while (i < count){
		// this sets ptr to start of file again
		rewind(per);
		// keep scanning until num[i] (basically the id in array) is found
		do{
			fscanf(per, "%d", &value);
		} while (value != num[i]);
		// the moment that id is found, i know that salary is next to it, i store that in temp
		fscanf(per, "%s", temp);
		strcat(newarr[i], " ");
		// concat that salary stored in temp to the file line stored in newarr
		strcat(newarr[i], temp);
		// put that line inside the Combine.txt file
		fputs(newarr[i], comb);
		// print a line inside the Combine.txt file aswell, so data is stored line by line
		fprintf(comb, "\n");
		i++;
	}
}