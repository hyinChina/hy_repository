#include <stdio.h>
// int main()
// {
//     printf("helo\n");
//     return 0;
// }

// int a = 10;
// void test()
// {
//     printf("test-->%d\n", a);
// }
// int main()
// {
//     test();
//     {
//         printf("a=%d\n", a);
//     }
//     printf("a=%d\n", a);
//     return 0;
// }//全局变量的作用域是整个工程

// extern int a;
// void test()
// {
//     printf("test-->%d\n", a);
// }
// int main()
// {
//     test();
//     {
//         printf("a=%d\n", a);
//     }
//     printf("a=%d\n", a);
//     return 0;
// }//在terminal中输入cmdline：gcc 3_27test1.c 3_27test2.c -o 3_27output以将test1和2链接在一起，这时可以使用extern，并且最后输出3_27output的unix文件且不可查看该文件源代码；
// //链接多个文件cmdline标准格式：在目标文件夹下打开终端，输入gcc (？) (？) (？)··· -o (？)，执行最终文件输入：./?
// //这么做的意义：可以实现代码分部分管理和修改，每一部分只专注于处理一个问题
// //另外，在vs中不需要手动建立链接，可以直接使用extern

//变量的生命周期：
//局部变量：进入作用域开始，出作用域结束
//全局变量：即整个程序的生命周期
//用途：生命周期和作用域是一个意思，我们学习的目的是了解一个变量在哪里可以使用，在哪里不可以使用

