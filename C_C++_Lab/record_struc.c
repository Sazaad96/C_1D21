#include <stdio.h>
struct employee
{
char name[30];
int age;
float salary;
};
int main()
{

struct employee e = {"Rachel", 29, 70000}; // Here e is an object of the structure employee

printf("Welcome to DataFlair tutorials!\n\n");

printf("The name is: %s\n",e.name);
printf("The age is: %d\n",e.age);
printf("The salary is: %0.2f\n",e.salary);
return 0; 
}