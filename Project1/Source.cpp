#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    char opt;
    int i, i_num1[5];
    cout << "�п�J���O" << endl;
    cin >> opt;
    switch (opt)
    {
    case'a':
    {
        int i_num2, i_num3;
        i_num2 = i_num3 = 0;
        srand(time(NULL));
        for (i = 0; i < 5; i++)
        {
            i_num1[i] = rand();
            cout << i_num1[i] << " ";
            if (i_num1[i] % 2 == 0)
            {
                i_num2++;
            }
            else
            {
                i_num3++;
            }
        }  
        cout << endl << "����:" << i_num2 << endl << "�_��:" << i_num3 << endl;
        break;
    }
    case'b':
    {
        int i_num2, i_num3;
        i_num2 = i_num3 = 0;
        cout << "�ХX�J�ƦC:" << endl;
        for (i = 0; i < 5 && i_num1[i] != 0; i++)
        {
            cin >> i_num1[i];
            if (i_num1[i] % 2 == 0)
            {
                i_num2++;
            }
            else
            {
                i_num3++;
            }
        }
        cout << "����:" << i_num2 << endl << "�_��:" << i_num3 << endl;
        break;
    }
    default:
        break;
    }
    system("pause");
    return 0;
}