#include <iostream>
using namespace std;
//This function outputs variable "x" + variable "y"
int plas(int x, int y){
    int num = x + y;
    return num;
}
//This function outputs variable "x" - variable "y"
int minas(int x, int y){
    int num = x - y;
    return num;
//This function outputs variable "x" * variable "y"
}
int puton(int x, int y){
    int num = x * y;
    return num;
}
//This function outputs variable "x" / variable "y"
int divide(int x, int y){
    int num = x / y;
    return num;
}
int main(void){
    //How to use all functions:
    int plass = plas(10, 10);
    int minu = minas(11, 10);
    int put_on = puton(10, 10);
    int divide_2 = divide(100, 10);
    printf("plass %d \n", plass);
    printf("minas %d \n", minu);
    printf("puton %d \n", put_on);
    printf("divide %d \n", divide_2);
}
