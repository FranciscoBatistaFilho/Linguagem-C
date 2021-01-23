/* the program of average it calculates the average for the classroom */ 

#include<stdio.h>

int main()
{
    int counter, all, degree;
    float average;

    all = 0;
    counter = 1;

    while(counter <= 10){

        printf("Enters with the grade of students\n");
        scanf("%d", &degree);
        
        all = all + degree;
        counter++;

    }
    average =  (float) all / 10;
    printf("The average of students is %.2f\n", average);

    return 0;
}