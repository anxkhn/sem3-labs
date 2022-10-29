#include <stdio.h>
struct employee
{
    char name[20];
    int id;
    float salary;
} * emp, e[2];
void main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter employee name, id, salary : \n");
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
    }
    emp = &e;

    for (i = 0; i < 2; i++)
    {
        printf("Employee name,id,salary is %s\t%d\t%f\n", emp->name, emp->id, emp->salary);
        emp++;
    }
}
