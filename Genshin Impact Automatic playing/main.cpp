#include"base.h"
using namespace std;
#define gap 100
int main() 
{
    char c;//�����ַ�����
    string s, ss[100], file_name = "Data\\";//�����ַ�������
    int num = 0,cle = 0,u_i,con;//�������ͱ���
    ifstream inf,aft;//���ļ��������
    inf.open("Data.txt");//���ļ�
    //������ļ�
    while (getline(inf, s))//getline(inf,s)�����ж�ȡinf�е��ļ���Ϣ
    {
        if(cle!=0)//��������ȡ���ڼ��У��ļ���һ�в�Ҫ��
            cout <<cle<<"." << s << "\n";//�����ȡ����
        ss[num] = s;//���ļ��������ַ���������
        num++;//�ַ�����������++
        cle++;//��ȡ����++
    }
    inf.close();//�ر��ļ�
    cout << "���������ѡ��Ҫ�������Ŀ��";
    cin >> u_i;//��ȡ�û�����
    file_name.append(ss[u_i]);//ƴ���ַ�������ɴ�·���ļ���
    cout << "��ѡ���ˣ�" << file_name<<",���ཫ��20s��ʼ��������׼��";
    Sleep(20000);//ͣ��20s
    aft.open(file_name);//���ļ�
    while (getline(aft, s))//getline(inf,s)�����ж�ȡinf�е��ļ���Ϣ
    {
        con = 0;//�ַ���Ź���
        Sleep(gap);//���ļ��
        while (true)//ѭ���ָ��ַ��ж�
        {
            c = s[con];//���ַ�����Ϊ�ַ�
            if (c == '\0')//��ǰ�ַ�Ϊ�ַ�����ֹ�����˳�ѭ����������һ��
            {
                break;//�˳�ѭ��
            }
            else if (c == '0')//��ǰ�ַ�Ϊ0������һ��
            {
                Sleep(gap);//���ļ��
            }
            else if (c == '(')//��ǰ�ַ�Ϊ����ѭ����ȡ����������
            {
                while (true)//ѭ����ʼ
                {
                    con++;//�ַ����++
                    c = s[con];//�ַ�
                    if (c == ')')//��ǰ�ַ�Ϊ�����˳�ѭ�����������ַ�
                    {
                        break;//�˳�ѭ��
                    }
                    int key_num = (int)c;//����������ֶ�Ӧ
                    press(key_num);//������
                }
            }
            else//�����ǣ�����������
            {
                int key_num = (int)c;//����������ֶ�Ӧ
                press(key_num);//������
            }
            con++;//�ַ����++
            Sleep(gap);//���ļ��
        }
    }
    cout << "�������";
    aft.close();//�ر��ļ�
    return 0;//����0
}