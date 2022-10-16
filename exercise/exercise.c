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
    while (i < total_person)        
        scanf("%s", people[i++].name);
    for (i = 0; i < total_person; i++)
        people[i].in_money = 0;
    for ( i = 0; i < total_person; i++)
    {
        char temp_name[NAME_LENGTH];
        scanf("%s", temp_name);
        int j = 0;
        while (j < total_person)
        {
            if (strcmp(people[j++].name, temp_name) == 0)
                break;
        }
        j--;
        int receive_num;
        scanf("%d %d", &people[j].out_money, &receive_num);
        if (receive_num == 0)
            continue;
        int receive_money = people[j].out_money / receive_num;
        people[j].out_money = people[j].out_money / receive_num * receive_num;
        int m = 0;
        for (m = 0; m < receive_num; m++)
        {
            int n = 0;
            char temp_receive_name[NAME_LENGTH];
            scanf("%s", temp_receive_name);
            while (n < total_person)
            {
                if (strcmp(people[n++].name, temp_receive_name) == 0)
                    break;
            }
            n--;
            people[n].in_money += receive_money;
        }
    }
    for (i = 0; i < total_person; i++)
        printf("%s %d\n", people[i].name, people[i].in_money - people[i].out_money);
    return 0;
}