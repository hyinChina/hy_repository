#include <stdio.h>

//3.5常量
//1.分类
// 1）字面常量
// 2）const修饰的常变量
// 3）#define定义的标识符常量
// 4）枚举常量

// //1）字面常量
// int main()
// {
//     30;//直接的数字
//     3.14;
//     'w';//单个字符，用单引号
//     "abc";//多个字符，字符串，用双引号
//     return 0;
// }

// //2）const修饰的常变量（constant译“常量”）
// int main()
// {
//     const int a = 1;//此时变量a被const修饰，这个变量就变成常量了，后面若再写a = 2就会报错
//     printf("a=%d\n", a);
//     return 0;
// }
// //const修饰的变量，计算机会把他视为“只读变量”，而不是常量。
// //我们推荐在编码过程中，把常量用“只读变量”的形式定义，也就是多用const，并且这种方式能够顺便定义常量的类型，是int还是float？

// //3)#define定义的标识符常量
// #define MAX 100//这里的MAX就是常量100的标识符
// #define STR "abcdef"//注意define的格式：#define (?习惯大写) (  ?  )没有分号！
// int main()
// {
//     printf("%d\n", MAX);
//     int a = MAX;
//     printf("%d\n", a);
//     printf ("%s\n", STR);
//     return 0;
// }

//4）枚举常量
enum Color//enum是枚举用词，
{
    RED,//enum、define习惯上用大写
    GREEN,
    BLUE
};
int main()
{

}

