#include <stdio.h>
#include <string.h>
struct student
{
    char roll_no[50];
    char sur_name[50];
    char marks[50];
};

int main()
{
    //     struct student anoop,aks,ns;
    //     anoop.roll_no=1;
    //     aks.roll_no=2;
    //     ns.roll_no=3;
    //    strcpy( anoop.sur_name, "singh");
    //    strcpy( aks.sur_name, "singh");
    //    strcpy( ns.sur_name, "singh");

    //     anoop.marks=9;
    //     aks.marks=10;
    //     ns.marks=7;
    // printf("Anoop got %d marks\n",anoop.marks);
    // printf("Anoop's surname is %s\n",anoop.sur_name);
    // char a[56];
    // printf("Enter a student name whose information you want\n");
    // gets(a);
    struct student stu[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Information of  students :\n");
        printf("roll no:\n");
        gets(stu[i].roll_no);
        printf("name and surname:\n");
        gets(stu[i].sur_name);
        printf("marks:\n");
        gets(stu[i].marks);
        printf("\n*********\n");
    }
    printf("\n..........displaying information......\n");
    for (int i = 0; i < 2; i++)
    {
        printf("rollno:");
        puts(stu[i].roll_no);
        printf("name:");
        puts(stu[i].sur_name);
        printf("marks:");
        puts(stu[i].marks);
        printf("\n*********\n");
    }

    return 0;
}