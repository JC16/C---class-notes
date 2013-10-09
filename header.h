#ifndef project72_Header_h
#define project72_Header_h



#endif

//1.
#include <math.h>

//2. define 的 marco 名稱要全部大寫
// 完成後，最後不加分號
#define PI 3.14159

//2.1 指令巨集
#define P(str) printf("%s\n",str)
// input = 1.23
// printf("Hello3 = %f", input)
#define PR(input) printf("Hello3 = %f\n", input)
#define PRI(str,input) printf("%s = %i\n", str, input)
#define PRD(str,input) printf("%s = %f\n", str, input)
//2.2 兩個引數
#define SQR(x) x*x


double circleArea(double r){
    return r*r*PI;
}
