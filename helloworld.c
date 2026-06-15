//python是解释执行 一行一行跑 ；C是编译执行。C会快很多。
//{}划定了变量的生存期（life-time）

#include <stdio.h> 
//stdio是基础库，基础的输入输出 比如printf，如果要加多个库，和python的 import写法一样
//.h代表头文件
int main()
{   int price = 0; 
    //一个变量price int类型 c初始值是0； int price，amount；这样就定义了两个为int的变量
    //C是一种有类型的语言 所有的变量在使用前必须声明类型；并且赋值。不然相当于住入一个没打扫的酒店房间
    printf("input the price:");
    scanf("%d",&price); //scanf是从键盘取输入的（如果输入非法字符，缓冲区不会自动清空，会有bug）。%是格式占位符，d是decimal十进制。
                        // &是取地址符号，取price的详细地址（内存地址）
    //准备接受一个十进制整数，把这个整数存入price的地址中。 scanf相当于手动挡input。input既能给提示又能获取并存入输入。但是C是分开的

    int change = 100 - price;

    printf("change %d\n",change);

    return 0;

}
//2.1.4