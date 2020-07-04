#include<stdio.h>
#include<string.h>

//Write a program that asks user to enter information about books which consist of title, author, subject. 
//Then, it prints the information about any book that is recorded. Use structures. 
struct book{
	
	char title[25];
	char author[35];
	char subject[45];

};
int main(){
	
	struct book book1;
	printf("Enter information about book which consist of title, author, subject:\n");
	scanf("%s %s %s",&book1.title,&book1.author,&book1.subject);
	printf("Title:%s\nAuthor:%s\nSubject:%s",book1.title,book1.author,book1.subject);
	
	return 0;
}
 
