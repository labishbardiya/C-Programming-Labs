#include <stdio.h>
#include "q4.h"

typedef struct {
    int dobday;
    int dobmonth;
    int dobyear;
} dob;

typedef struct {
    char ename[100];
    dob edob;
    int eyear;
    float esalary;
} employee;

void toprint(employee emp) {
    printf("\n%s\n", emp.ename);
    printf("%d/ %d/ %d\n", emp.edob.dobday, emp.edob.dobmonth, 
    emp.edob.dobyear);
    printf("%d\n", emp.eyear);
    printf("%f\n", emp.esalary);
}

int main() {
    NewFunction();
}
void NewFunction()
{
    employee emp[3];
    for (int i = 0; i < 3; i++)
    {
        fgets(emp[i].ename, 100, stdin);
        fflush(stdin);
        scanf("%d %d %d", &emp[i].edob.dobday, &emp[i].edob.dobmonth,
              &emp[i].edob.dobyear);
        fflush(stdin);
        scanf("%d", &emp[i].eyear);
        fflush(stdin);
        scanf("%f", &emp[i].esalary);
        fflush(stdin);
    }
    toprint(emp[0]);
    toprint(emp[1]);
    toprint(emp[2]);
}