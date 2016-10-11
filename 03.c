#include <stdio.h>
int main()
{
    int marks;
    while(scanf("%d",&marks) == 1){

    if(marks >= 80 && marks <= 100){
        printf("Your grade is A+\n",marks);
    }
    else if(marks >= 70 && marks < 80){
        printf("Your grade is A\n",marks);
    }
    else if(marks >= 60 && marks < 70){
        printf("Your grade is A-\n",marks);
    }
    else if(marks >= 50 && marks < 60){
        printf("Your grade is B\n",marks);
    }
    else if(marks >= 40 && marks < 50){
        printf("Your grade is C\n",marks);
    }
    else if(marks >= 33 && marks < 40){
        printf("Your grade is D\n",marks);
    }
    else if(marks >= 0 && marks < 33){
        printf("Your grade is F\n",marks);
    }
    else if(marks > 100 || marks < 0){
        printf("Invalid input\n");
        }
    }

    return 0;
}
