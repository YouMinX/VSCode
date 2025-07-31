# [Markdown 语法速查表](https://markdown.com.cn/cheat-sheet.html)

# <p style="text-align:center">基本语法篇</p>

#### ====Markdown 标题语法====

# <p style="text-align:center">我是一级标题</p>

## <p style="text-align:center">我是二级标题</p>

### <p style="text-align:center">我是三级标题</p>

#### <p style="text-align:center">我是四级标题</p>

##### <p style="text-align:center">我是五级标题</p>

###### <p style="text-align:center">我是六级标题</p>

> <p style="text-align:center">标题会逐级减小，最多六级，这是正常大小的字</p>

---

#### ====Markdown 强调语法====

这是**粗体**，这是**_斜体_**，区别是粗体两个\*号，斜体一个\*号

---

#### ==Markdown 引用语法==

> #### 是的，我是引用
>
> > 我是嵌套引用

#### ==Markdown 列表语法==

1.  第一行
2.  第二行
3.  第三行
4.  不要在意我的数字，记得加空格就好

- 我是无序列表

* 我还是无序列表

- 我依旧是无序列表
  - 我是嵌套无序列表

#### ==Markdown 代码语法==

接下来展示一段代码`printf("helloworld");`

```C
for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
		cout << arr[i][j] << ",";
	}
	cout << endl;
}
```

#### ==Markdown 分隔线语法==

---

---

---

\*星号、-减号、\_下划线都可以，三个或三个以上即可变为分隔线

#### ==Markdown 链接语法==

这是一个链接[Markdown 语法](https://markdown.com.cn/)
这也是一个链接<https://markdown.com.cn/>

#### ==Markdown 转义字符语法==

在原本用于格式化 Markdown 文档的字符前加\, 用以显示原本的格式化字符

> 如: \*你好\*, \*\*hello**, \`Hi, \\**

# <p style="text-align:center">拓展语法篇</p>

#### ==表格==

| 班级 | 人数 |
| ---- | ---- |
| 男   | 27   |
| 女   | 2    |

> 在标题行的连字符左右添加冒号可以实现不同的文本对齐效果:
>
> |  班级  | 人数 |
> | :----: | ---: |
> | **男** |   27 |
> |   女   |  _2_ |

#### ==文本脚注==

Here's a simple footnote,[^1] and here's a longer one.[^bignote]

[^1]: This is the first footnote.
[^bignote]: Here's one with multiple paragraphs and code.

    Indent paragraphs to include them in the footnote.

    `{ my code }`

    Add as many paragraphs as you like.

#### ==删除线==

~~这里是 Markdown 入门文档.~~这里不是 Markdown 入门文档

#### ==任务列表==

- [x] 学习数据结构
- [ ] 学习计算机组成原理
- [ ] 学习计算机操作系统
- [ ] 学习计算机网络

#### ==插入 Latex 公式==

$f(x)=ax+b$
[更多的 Latex 公式语法点这里](https://zhuanlan.zhihu.com/p/59412540)

#### ==插入 Emoji==

真好笑:joy:
我哭了:cry:

> 这里有[表情符号简码列表](https://gist.github.com/rxaviers/7360908)供你查阅

### ==Markdown 自动网址链接

许多 Markdown 处理器会自动将 URL 转换为链接
http://www.example.com

> `http://www.example.com`禁用自动网址链接

# <p style="text-align:center">语法变通篇!</p>

下划线:

> <ins>下划线</ins>

缩进:

> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;这是一个缩进的段落

文字居中(CSS 语法):

> <p style="text-align:center">居中显示文字</p>

文字颜色:

> <font color ="red">红色字体!</font>
>
> <p sytle="color:bule">蓝色字体! (不知道为什么出问题了)</p>

段落分隔:
这是段落

#

这是段落

限定图片宽高:
<img src="https://markdown.com.cn/assets/img/philly-magic-garden.9c0b4415.jpg" width="200" height="100">

#### ==Markdown 图片语法==

这只是张普通的图片![这是图片](https://markdown.com.cn/assets/img/philly-magic-garden.9c0b4415.jpg)
这张图片暗藏玄只因
[![你也可以这样,用来给图片添加链接](https://markdown.com.cn/assets/img/philly-magic-garden.9c0b4415.jpg)](https://markdown.com.cn/)

仅列出本人可能使用到的情况,更多语法请移步[Markdown 语法](https://markdown.com.cn/)

#

#

## Backlinks

> 用以链接其他文档

- [[Git食用指南]]
- [[]]
