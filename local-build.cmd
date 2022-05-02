REM run as Administrator
@echo off
cd /d %~dp0
set DOWNLOAD_DIR=%USERPROFILE%\Downloads
set DOWNLOAD_DIR_LINUX=%DOWNLOAD_DIR:\=/%
SET PATH=^
%DOWNLOAD_DIR%\PortableGit\bin;^
%DOWNLOAD_DIR%\x86_64-8.1.0-release-win32-seh-rt_v6-rev0;^
%DOWNLOAD_DIR%\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\bin;^
%DOWNLOAD_DIR%\cmake-3.22.2-windows-x86_64\bin;^

@REM set PATH=^
@REM D:\Softwares\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64;^
@REM D:\Softwares\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin;^
@REM D:\Softwares\cmake-3.23.0-rc1-windows-x86_64\bin;

@REM x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z

cmake.exe -G"MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug -B./build

cd build

:rebuild_and_startapp
mingw32-make.exe
pause
REM GOTO rebuild_and_startapp
