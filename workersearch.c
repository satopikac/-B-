#include <stdio.h>
#include <string.h>
void input(char na[][20], int nu[]);
void sort(char na[][20], int nu[]);
void search(char na[][20], int nu[], int n, int x);
int main()
{
    char name[10][20];
    int num[10];
    int n, x;
    input(name, num);
    sort(name, num);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        search(name, num, n, x);
    }
}
void input(char na[][20], int nu[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%s", na[i]);
        scanf("%d", &nu[i]);
    }
}
void sort(char na[][20], int nu[])
{
    int k, count;
    char mid[20];
    //排序
    for (int i = 1; i < 10; i++)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            count = 0;
            if (nu[j] > nu[j + 1])
            {
                k = nu[j];
                nu[j] = nu[j + 1];
                nu[j + 1] = k;
                strcpy(mid, na[j]);
                strcpy(na[j], na[j + 1]);
                strcpy(na[j + 1], mid);
                count = 1;
            }
            if (count = 0)
                break;
        }
    }

    //打印
    for (int i = 0; i < 10; i++)
    {
        printf("%s-%d\n", na[i], nu[i]);
    }
}
void search(char na[][20], int nu[], int n, int x)
{
    //查找
    int up, down, mid;
    up = 9;
    down = 0;
    while (down <= up)
    {
        mid = (up + down) / 2;
        if (nu[mid] > x)
        {
            up = mid - 1;
        }
        else if (nu[mid] < x)
        {
            down = mid + 1;
        }
        else if (nu[mid] == x)
        {
            printf("%s\n", na[mid]);
            break;
        }
    }
    if (x != nu[mid])
        printf("NOFOUND\n");
}
