@ECHO OFF

IF "%~1" == "" GOTO USAGE


SET SRCFILE=%~f1
SET OUTFILE=%~d1%~p1%~n1.dll
SET DEFFILE=%~d1%~p1%~n1.def

CD /D %~dp0
tcc -run preprocess.c "%SRCFILE%" | tcc - -DBUILD_FOR_PAL3A -shared -o "%OUTFILE%" -lgdi32 -lcomdlg32 -luser32 -lkernel32 -ladvapi32 -lshell32 -lPAL3Apatch
IF %ERRORLEVEL% EQU 0 (ECHO ����ɹ���) ELSE (ECHO ����ʧ�ܡ�)
IF EXIST "%DEFFILE%" DEL "%DEFFILE%"

GOTO END


:USAGE
ECHO.
ECHO ��������Խ� C Դ������ʽ�Ĳ������Ϊ DLL ��ʽ�Ĳ����
ECHO.
ECHO ʹ�÷�������������� C Դ�����зŵ��������ͼ���ϼ��ɡ�
ECHO.


:END
PAUSE