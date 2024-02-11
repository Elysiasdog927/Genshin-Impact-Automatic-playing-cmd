# Genshin Impact Automatic playing
这是一个用于自动演奏原神风物之诗琴等乐器的控制台程序
This is a console program for automating musical instruments such as Genshin Impact Fumono Shikoto
这个程序适用于有键盘谱但是没有合适mid文件的音乐
This program is suitable for music that has a keyboard tabs but does not have a suitable mid file
###################################一些注意事项#########################################
##################################A few caveats########################################
1.请不要随便乱动Data.txt这个文件，除非你十分清楚自己在干什么
Please don't mess Data.txt this file unless you know exactly what you're doing
2.你可以把你获得的键盘谱文件（必须是txt格式的）放进Data文件夹中，然后运行程序根目录下的update.py（没有python环境的话运行update.exe，我将它打包好放在release里了），它会自动更新Data.txt里的内容
You can put the keyboard tabf file you got (it must be in txt format) into the Data folder, and then run the update.py in the root directory of the program (run update.exe without python, I packaged it and put it in the release), and it will automatically update the content of the Data.txt
3.对于键盘谱文件，有以下几个要求：文件内不要有中文，空格用0代替，除了字母，括号以及0以外不要有其他字符（一般来说，我们能得到的键盘谱里会有/和空格，用文本编辑器将它们分别批量替换为换行符和0就行），将空格转为0后不要有空行，会影响运行效率
For keyboard staff files, there are the following requirements: there should be no Chinese in the file, spaces should be replaced with 0, and there should be no other characters except letters, parentheses and 0 (generally speaking, the keyboard staff we can get will have / and spaces, use a text editor to replace them with line breaks and 0 in batches respectively), and there should be no blank lines after converting the space to 0, which will affect the operation efficiency
PS：作者只是个大一牲，实力有限，还请各位多给我提点建议，谢谢
PS：The author is just a big animal, and his strength is limited, so please give me more suggestions, thank you
