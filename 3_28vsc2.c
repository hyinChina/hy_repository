#include <stdio.h>
int main()
{
    char arr1 [] = {'a','b','c'};
    printf("%s\n", arr1);
    return 0;
}
//虽然这里正确输出了结果，但是还是建议写{'a','b','c','\0'}
//储存方法：cmd+s或者在顶部→文件→自动保存，打上勾就行了