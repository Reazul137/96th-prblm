#include<stdio.h>
#include<string.h>
int main()
{
    int roll, phy, che, cho, total;
    float percentage;
    char name[20], div[10];

    printf("Input the roll number of the students : ");
    scanf("%d",&roll);

    printf("Input the name of the students : ");
    scanf("%s",name);

    printf("Input the marks of Physics, Chemistry, Computer Application : ");
    scanf("%d%d%d",&phy,&che,&cho);

    total= phy + che + cho;
    percentage = total/ 3.0;

    if(percentage >= 60)
        strcpy(div,"First");
    else if(percentage < 60 && percentage >= 48)
        strcpy(div,"Second");
    else if(percentage < 48 && percentage >= 36)
        strcpy(div,"Pass");
    else
        strcpy(div,"Fail");

    printf("\n Roll No : %d\n Name of student : %s\n",roll,name);
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n",phy,che,cho);
    printf("Total Marks = %d\nPercentage = %5.2f\nDivision = %s\n",total,percentage,div);

    return 0;
}
