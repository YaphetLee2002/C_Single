#include<stdio.h>
#include<string.h>
char * s_gets(char * st, int n);
#define MAXTITL 41         /*书名的最大长度＋1*/
#define MAXAUTL 31         /*作者姓名最大长度+1*/
struct book{               /*结构模板标记为book*/
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};                         /*结构模板结束*/
int main(void)
{
    struct book library;   /*把library声明为一个book类型的变量*/
    puts("Please enter the book title.");
    s_gets(library.title, MAXTITL);   /*访问title部分*/
    puts("Now enter the author.");
    s_gets(library.author, MAXAUTL);
    puts("Now input the value.");
    scanf("%f", &library.value);
    printf("%s by %s: $%.2f\n", library.title,
        library.author, library.value);
    printf("%s: \"%s\"($%.2f)\n", library.author,
        library.title, library.value);
    puts("Done.");
    return 0;
}

char * s_gets(char * st, int n){
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
            *find = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}