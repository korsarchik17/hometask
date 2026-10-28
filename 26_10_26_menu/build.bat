@echo off

chcp 1251 > nul

set SOURCES=main.cpp menu_items.cpp menu_functions.cpp
set EXE=menu.exe
set CHARSET=-finput-charset=utf-8 -fexec-charset=windows-1251

if exist %EXE% del %EXE%

g++ %CHARSET% %SOURCES% -o %EXE%

if exist %EXE% %EXE%

pause