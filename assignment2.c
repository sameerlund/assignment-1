/*
Assignment: 02                            
course:programing fundamnetal
group partner:sameer and Roshan
Roll no:23k-5535  and 23p-0631
section :BCS2D
Date:8-3-2024     
*/                  

#include <stdio.h>
/*function declaration*/
float calculatePercentage(float obtainedMarks, float TotalMarks) {         

    /*function defination*/
    float calculatepercentage = (obtainedMarks / TotalMarks) * 100;
    printf("\t\t\tYour percentage is %.2f", calculatepercentage);
    return calculatepercentage;
}
/*function declaration and definition*/    
void printPattern() {
    printf("\n\t\t\t*************>>>>>>>>>>>>>>>>************\n");
    

}

int main() {
    /*taking users total marks and obtianed marks for calculating percentage*/
    float obtainedMarks, TotalMarks;
    printf("\t\t\tEnter your obtained marks: ");
    scanf("%f", &obtainedMarks);
    printPattern();     //function calling     

    printf("\n\t\t\tPlease enter your total marks: ");
    scanf("%f", &TotalMarks);
    printPattern();  //function calling


  //function of calculating percentage calling 
    float percentage = calculatePercentage(obtainedMarks, TotalMarks);
   //using if-else if for comparison
    if (percentage >= 60) {
        printf("\n\t\t\tYou are in the first division.");
    } 
    
    else if (percentage >= 50 && percentage <= 59) {
        printf("\n\t\t\tYou are in the second division.");
    } 
    
    else if (percentage >= 40 && percentage <= 49) {
        printf("\n\t\t\tYou are in the third division.");
    } 
    else {
        printf("\n\t\t\tYou have failed.");
    }

    printPattern();   
    return 0;
}
