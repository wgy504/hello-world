/***************************
**修改时间：2016-08-26 21:50
***************************/
1 #include <linux/module.h> //包含了很多装载模块需要的符号和函数的定义
2 #include <linux/init.h> //用于指定初始化函数和清除函数
3
4 static int __init test_init(void) //内核初始化函数
5 {
6         printk("hello world!\n"); //打印函数，和prinft类似
7         return 0;
8 }
9
10 static void __exit test_exit(void)//内核清除函数
11 {
12         printk("good bye!\n");
13 }
14
15 module_init(test_init); //指定初始化函数
16 module_exit(test_exit); //指定清除函数
17
18 MODULE_LICENSE("GPL"); //指定代码使用的许可证
19 MODULE_AUTHOR("xiao bai"); //指定作者
20 MODULE_VERSION("1.0"); //指定代码修订号
