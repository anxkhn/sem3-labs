#include <stdio.h>
struct book
{
    char name[20];
    float price;
    int pages;
} b, *bp;
int main()
{

    printf("Enter Book Name, Price and No of Pages.\n");
    scanf("%s %f %d", &b.name, &b.price, &b.pages);
    bp = &b;
    printf("And this is what you entered .\n");
    printf("%s %.2f %d", bp->name, bp->price, bp->pages);
    return 0;
}
