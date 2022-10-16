#include<stdio.h>
#include<string.h>
#define NAME_LENGTH 14
struct persons {
    char name[NAME_LENGTH];
    int out_money;
    int in_money;
};
int main(void)
{
    int total_person;
    struct persons people[20];
    scanf("%d", &total_person);
    int i = 0;
    //录入所有人的姓名依次到结构体中
    while (i < total_person)        
        scanf("%s", people[i++].name);
    //将所有人的收入置为0
    for (i = 0; i < total_person; i++)
        people[i].in_money = 0;
    //对每一组录入进行处理
    for ( i = 0; i < total_person; i++)
    {
        char temp_name[NAME_LENGTH];
        scanf("%s", temp_name);
        int j = 0;
        //依次匹配是谁发钱
        while (j < total_person)
        {
            if (strcmp(people[j++].name, temp_name) == 0)
                break;
        }
        j--;
        //录入发多少钱以及发多少人
        int receive_num;
        scanf("%d %d", &people[j].out_money, &receive_num);
        if (receive_num == 0)
            continue;
        int receive_money = people[j].out_money / receive_num;
        people[j].out_money = people[j].out_money / receive_num * receive_num;
        int m = 0;
        //录入每个接受的人姓名并把钱加上去
        for (m = 0; m < receive_num; m++)
        {
            int n = 0;
            char temp_receive_name[NAME_LENGTH];
            //录入一个接受者人名
            scanf("%s", temp_receive_name);
            while (n < total_person)
            {
                if (strcmp(people[n++].name, temp_receive_name) == 0)
                    break;
            }
            n--;
            //给这个人加钱
            people[n].in_money += receive_money;
        }
    }
    //输出结果
    for (i = 0; i < total_person; i++)
        printf("%s %d\n", people[i].name, people[i].in_money - people[i].out_money);
    return 0;
}