#include<stdio.h>
enum animal {Dog, Cat, Monkey, Invalid};
void dog(void){
    puts("汪汪");
}
void cat(void){
    puts("喵");
}
void monkey(void){
    puts("叽叽");
}

enum animal select(void){
    int tmp;
    do
    {
        printf("输入：");
        scanf("%d", &tmp);
    } while (tmp < Dog || tmp > Invalid);
    return tmp;
}

int main(void)
{
    enum animal selected;

    do
    {
        switch (selected = select())
        {
        case Dog:dog();
            break;
        case Cat:cat();
            break;
        case Monkey:monkey();
            break;
        case Invalid:
            break;
        }
    } while (selected != Invalid);
    return 0;
}