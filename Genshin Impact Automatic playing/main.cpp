#include"base.h"
using namespace std;
#define gap 125
int main() 
{
    char c;//定义字符变量
    string s, ss[100], file_name = "Data\\";//定义字符串变量
    int num = 0,cle = 0,u_i,con;//定义整型变量
    ifstream inf,aft;//打开文件相关内容
    inf.open("Data.txt");//打开文件
    //打开输出文件
    while (getline(inf, s))//getline(inf,s)是逐行读取inf中的文件信息
    {
        if(cle!=0)//计数，读取到第几行（文件第一行不要）
            cout <<cle<<"." << s << "\n";//输出读取内容
        ss[num] = s;//将文件名存入字符串数组中
        num++;//字符串数组索引++
        cle++;//读取行数++
    }
    inf.close();//关闭文件
    cout << "输入序号来选择要演奏的曲目：";
    cin >> u_i;//获取用户输入
    file_name.append(ss[u_i]);//拼接字符串，组成带路径文件名
    cout << "你选择了：" << file_name<<",演奏将在20s后开始，请做好准备";
    Sleep(20000);//停留20s
    aft.open(file_name);//打开文件
    while (getline(aft, s))//getline(inf,s)是逐行读取inf中的文件信息
    {
        con = 0;//字符序号归零
        Sleep(gap);
        while (true)//循环分割字符判断
        {
            c = s[con];//将字符串拆为字符
            if (c == '\0')//当前字符为字符串终止符，退出循环，进入下一行
            {
                break;//退出循环
            }
            else if (c == '0')//当前字符为0，多间隔一次
            {
                Sleep(25);//两拍间隔
            }
            else if (c == '(')//当前字符为（，循环读取括号内内容
            {
                while (true)//循环开始
                {
                    con++;//字符序号++
                    c = s[con];//字符
                    if (c == ')')//当前字符为），退出循环，继续读字符
                    {
                        break;//退出循环
                    }
                    int key_num = (int)c;//虚拟键盘数字对应
                    press(key_num);//按键盘
                }
            }
            else//都不是，正常按键盘
            {
                int key_num = (int)c;//虚拟键盘数字对应
                press(key_num);//按键盘
            }
            con++;//字符序号++
            Sleep(gap);
        }
    }
    cout << "演奏结束";
    aft.close();//关闭文件
    return 0;//返回0
}