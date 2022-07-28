#include <stdio.h>
    struct book
    {
        char name[20];
        float price;
        int pages;
    } b[5];
    int main()
    {
        int i;
        for (i = 0; i < 5; i++)
        {
            printf("Enter Book Name, Price and No of Pages for book no:  %d.\n ",i+1);
            scanf("%s %f %d", b[i].name, &b[i].price, &b[i].pages);
        }
        printf("And this is what you entered .\n");
        for (i = 0; i < 5; i++)
        {
            printf("Book: %d %s %.2f %d\n", i+1, b[i].name, b[i].price, b[i].pages);
        }
    return 0;
    }
