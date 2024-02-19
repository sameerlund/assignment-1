/*name : sameer  
registration no:23k-5535   */
#include <stdio.h>
#include <math.h>
int add(int a,int b);
int subtract(int a,int b);
float divide(int a,int b);
int multiply(int a,int b);
int power(int base,int exponent);
float logrithm(int base,int num);
void  printpattren();
//function for addition
int add(int a,int b){
int 	sum=a+b;
	printf("\t\t\taddition=%d\n",sum);
	return sum;
}
  void printpattren(){
	printf("\n<<<<<<<<<<<<<<<<<<<<<<==================================================>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
}
//function for subtraction
int subtract(int a,int b){
int 	subtract=a-b;
	printf("\n\t\t\tsubtraction=%d\n",subtract);
	return subtract;
}
 
 //function for divide	
float divide(int a,int b){
float  	divide=a/b;
	printf("\n\t\t\tdivision=%f\n",divide);
	return divide;
}
 

//function for multiplication
int multiply(int a,int b){
int 	multiply=a*b;
printf("\n\t\t\tmultiplication=%d\n",multiply);
return multiply;
}
 
//function for power 
int power(int base,int exponent){
	int a=pow(base,exponent);
	printf("\n\t\t\tpower=%d\n",a);
	return a;
}
 
//function for logrithm
float logrithm(int base,int num){
	float x=log(base)/log(num);
	printf("\n\t\t\t logrithm=%.2f",x);
	return x;
	
}
 


//in main function i called each function one time and printpattren function multiple times
int main(){
	int a,b,base,exponent,num;
	printf("\n\t\t\tenter the value of a and b:");
	scanf("%d%d",&a,&b);
	add(a,b);
	printpattren();
	subtract(a,b);
	printpattren();
	 divide(a,b);
	 printpattren();
	multiply(a,b);
	printpattren();
	printf("\n\t\t\tenter the base and exponent:");
	scanf("%d%d",&base,&exponent);
	power(base,exponent);
	printpattren();
	printf("\n\t\t\tenter the number :");
	scanf("%d",&num);
	float c=logrithm(base,num);
	printpattren();
}
