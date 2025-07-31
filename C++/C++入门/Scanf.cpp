/*
scanf 是 C 标准库中的输入函数，在 C++ 中也可以使用
（需包含 <cstdio> 头文件）。它用于从标准输入（通常是键盘）读取格式化数据。

1. 基本语法
int scanf(const char* format, ...);
返回值：成功读取的数据项数量，若出错或到达文件末尾则返回 EOF。
参数：
    format：格式控制字符串（指定输入数据的类型和格式）
    ...：可变参数（用于存储读取数据的变量地址）
2. 常用格式说明符
格式符     含义          	        示例
%d	    读取整数（int）	          scanf("%d", &num)
%f	    读取浮点数（float）	      scanf("%f", &f)
%lf     读取双精度浮点数（double）  scanf("%lf", &d)
%c	    读取单个字符（char）	      scanf("%c", &ch)
%s	    读取字符串（char[]）	      scanf("%s", str)
%u	    读取无符号整数（unsigned）  scanf("%u", &u)
%x	    读取十六进制数	          scanf("%x", &x)
3. 基础用法示例
(1) 读取整数
#include <cstdio>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);  // & 取地址符不能省略
    printf("You are %d years old.\n", age);
    return 0;
}
(2) 读取多个值
int a, b;
scanf("%d %d", &a, &b);  // 输入 "10 20"
(3) 读取字符串
char name[50];
scanf("%s", name);  // 注意：遇到空格会停止
⚠️ 问题：% s 会因空格提前终止（如输入 "To do" 只能读取 "To"）。

4. 高级用法
(1) 指定输入宽度
char str[10];
scanf("%9s", str);  // 最多读取 9 个字符（留 1 位给 '\0'）
(2) 跳过特定字符
int day, month, year;
scanf("%d/%d/%d", &day, &month, &year);  // 输入 "25/12/2023"
(3) 读取带空格的字符串
char line[100];
scanf("%[^\n]", line);  // 读取整行（直到换行符）

5. 注意事项
(1)必须传递变量地址：
int num;
scanf("%d", num);   // 错误！缺少 &
scanf("%d", &num);  // 正确
(2)字符串不需要& ：
char s[100];
scanf("%s", s);     // 正确（数组名本身就是地址）
(3)缓冲区问题：
混合使用 scanf 和 cin 可能导致输入混乱。
解决方法：清空缓冲区
while (getchar() != '\n');  // 清除残留的换行符
(4)安全性问题：
scanf 容易导致缓冲区溢出（如 char s[5]; scanf("%s", s); 输入超长字符串会崩溃）
更安全的替代方案：
char s[5];
scanf("%4s", s);  // 限制最多读取 4 个字符

6. 与 cin 的对比
特性  	    scanf	                      cin
速度  	    更快	                       较慢（需同步 C 标准库）
类型安全	    不安全(无类型检查）         安全（自动类型匹配）
格式化输入	支持复杂格式(如 "%d/%d"）   仅支持简单分隔符（如空格）
字符串输入	需处理空格问题	           用 getline(cin, str) 更简单

7. 完整示例
#include <cstdio>

int main() {
    int id;
    char name[50];
    double score;

    printf("Enter ID, Name, and Score: ");
    scanf("%d %49s %lf", &id, name, &score);

    printf("Student %d (%s) scored %.2f\n", id, name, score);
    return 0;
}

输入 / 输出示例：
Enter ID, Name, and Score: 101 Alice 95.5
Student 101 (Alice)scored 95.50

总结
何时用 scanf：需要高性能或复杂格式输入时。
何时用 cin：需要类型安全或简单输入时。

关键技巧：
用 & 获取变量地址（字符串除外）
用 % [^ \n] 读取整行
限制输入宽度防止溢出（如 % 9s）

在 C++ 中，推荐优先使用 cin 和 getline，但在需要精细控制输入格式时，
scanf 仍是强大工具。
*/