#include <iostream>
using namespace std;
int plas(int x, int y){
    int num = x + y;
    return num;
}
int minas(int x, int y){
    int num = x - y;
    return num;
}
int puton(int x, int y){
    int num = x * y;
    return num;
}
int divide(int x, int y){
    int num = x / y;
    return num;
}
int main(void){
    // 
    int plass = plas(10, 10);
    int minu = minas(11, 10);
    int put_on = puton(10, 10);
    int divide_2 = divide(100, 10);
    printf("plass %d \n", plass);
    printf("minas %d \n", minu);
    printf("puton %d \n", put_on);
    printf("divide %d \n", divide_2);
}
