#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int creat_file() {
    char fname[20] = "count. txt"; // ��� �����
    FILE* out; // ���� �����
    puts("�������� �����");
    if ((out = fopen(fname, "wt")) == NULL)
    {
        printf("������ �������� ����� ��� ������");
        return 0;
    }
    int s[100];
    printf("������� ��������\n");
    scanf("%s", &s);
    /********������ ������ � ������**********/
    fprintf(out, "\n%s", s);// ���� ����� 5 � ����
    /********����� ������ � ������ **********/
    fclose(out); // ������� ����
    return 1;
}

int edit_file() {
    char fname[20] = "number. txt"; // ��� �����
    FILE* out; // ���� �����
    puts("�������� �����");
    if ((out = fopen(fname, "a")) == NULL)
    {
        printf("������ �������� ����� ��� ������");
        return 0;
    }
    int s[100];
    printf("������� ��������\n");
    scanf("%s", &s);
    /********������ ������ � ������**********/
    fprintf(out, "\n%s", s);// ���� ����� 5 � ����
    /********����� ������ � ������ **********/
    fclose(out); // ������� ����
    return 1;
}

int main(void)
{
    setlocale(LC_ALL, "RUS");
    int d = 1;
    int n;
    //    printf("1)������ � ����� ����\n2)�������� � ������������");
    while (d == 1) {
        printf("1)������ � ����� ����\n2)�������� � ������������\n");
        scanf("%i", &n);
        switch (n) {
        case 1:
            creat_file();
            break;
        case 2:
            edit_file();
            break;
        default:
            break;
        }
    }
}