#include <stdio.h>

struct course {
    char *department;
    int number;
    char *name;
};

int main(void)
{
    struct course courses[3] = {
        {"CSC", 225, "Introduction to Computer Organization"},
        {"CSC", 349, "Data Analysis and Algorithms"},
    };

    courses[2].department = "CSC";
    courses[2].number = 357;
    courses[2].name = "Systems Programming";

    for (int i = 0; i < 3; i++)
    {
        struct course course_i = courses[i];
        printf("%s%d \"%s\"\n", course_i.department, course_i.number, course_i.name);
    }

    return 0;
}