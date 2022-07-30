#include <stdio.h>
struct book
{
    char name[20];
    float price;
    int pages;
} b1;
void main()
{

    printf("Enter Book Name, Price and No of Pages.\n");
    scanf("%s %f %d", b1.name, &b1.price, &b1.pages);
    printf("And this is what you entered .\n");
    printf("%s %f %d", b1.name, b1.price, b1.pages);
}
