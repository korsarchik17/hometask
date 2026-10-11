@echo off
chcp 65001 >nul
echo === Компиляция ===
g++ before_refactoring_2.cpp -o program.exe
if errorlevel 1 (
    echo Ошибка компиляции!
    pause
    exit /b 1
)
echo === Запуск ===
echo.
program.exe
echo.
pause