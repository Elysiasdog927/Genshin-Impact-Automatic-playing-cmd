#include"base.h"
using namespace std;
int main() 
{
    int gap = 125,con_num;//���������û��������
    char c;//�����ַ�����
    string s, ss[100], file_name = "Data\\";//�����ַ�������
    int num = 0,cle,u_i,con;//�������ͱ���
start://��ʼλ��
    cle = 0;
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
    cout << "���������ѡ��Ҫ�������Ŀ��(����0�˳�����)";
    cin >> u_i;//��ȡ�û�����
    if (u_i == 0)//�ж��û�����
    {
        goto end;//��ת������
    }
    file_name.append(ss[u_i]);//ƴ���ַ�������ɴ�·���ļ���
    cout << "��ѡ���ˣ�" << ss[u_i]<<"�����趨�����ٶȣ�10��1000������ԽСԽ�죬Ĭ��125����";
    cin >> gap;//��ȡ�û�����
    cout << "���ཫ��20s��ʼ������׼����\n";
    Sleep(20000);//ͣ��20s
    aft.open(file_name);//���ļ�
    while (getline(aft, s))//getline(inf,s)�����ж�ȡinf�е��ļ���Ϣ
    {
        con = 0;//�ַ���Ź���
        Sleep(gap);
        while (true)//ѭ���ָ��ַ��ж�
        {
            c = s[con];//���ַ�����Ϊ�ַ�
            if (c == '\0')//��ǰ�ַ�Ϊ�ַ�����ֹ�����˳�ѭ����������һ��
            {
                break;//�˳�ѭ��
            }
            else if (c == '0')//��ǰ�ַ�Ϊ0������һ��
            {
                Sleep(25);//���ļ��
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
            Sleep(gap);
        }
    }
    cout << "��ǰ��Ŀ�������,����1���¿�ʼ";
    aft.close();//�ر��ļ�
    cin >> con_num;//��ȡ�û�����
    if(con_num == 1)//�ж��û�����
    {
        system("cls");//��������
        goto start;//���ؿ�ʼλ��
    }
end:
    cout << "�������н�����";
    return 0;//����0
}