# 常用命令
[TOC]

## 卸载软件：

1. 浏览已安装程序
	- 浏览所有已安装程序
	`dpkg --list`
	- 浏览有关qq的应用程序
	`dpkg -l | grep qq`
2. 卸载
	- 完全卸载
	`sudo apt-get --purge remove name`
	- 正常卸载
	`sudo spt-get remove name`

## 查看进程
`ps -aux`
找到进程，`sudo kill PID`解决

