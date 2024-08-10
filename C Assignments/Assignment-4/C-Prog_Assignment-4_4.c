//To print percentage of three subjects and print division

#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,gt,obtmarks,percentage;
    printf("Enter the marks obtained in three subjects: ");
    scanf("%.2f %.2f %.2f",&a,&b,&c);
    printf("Enter the grand total: ");
    scanf("%.2f",&gt);
    obtmarks = a+b+c;
    percentage = (obtmarks*100)/gt;
    printf("The percentage obtained is: %.2f",percentage);
    if(percentage>=60){
        printf("First Division");
    }
    else if(percentage>=50){
        printf("Second Division");
    }
    else if(percentage>=40){
        printf("Third Division");
    }
}