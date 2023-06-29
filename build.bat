@echo off

set NDK=C:/ndk/
rem ^^^ change your android ndk path ^^^


if NOT %NDK:~-1% == \ (
	if NOT %NDK:~-1% == / (
		echo NDK path must end with "/". Exiting...
		exit /b
	)
)

echo Platinum SDK version 1.0.0
echo =================================
call %NDK%ndk-build.cmd NDK_PROJECT_PATH=./ NDK_APPLICATION_MK=./app.mk MAIN_LOCAL_PATH=. APP_BUILD_SCRIPT=./build.mk NDK_LIBS_OUT=./out
echo =================================
echo Cleaning up...
rd obj /s /q > nul
if exist out/ (
	cd out
	del * /q
	if exist armeabi-v7a/ (
		cd armeabi-v7a
		copy *.so .. > nul
		rem ^^^ dont show output
		cd ..
	)
	rd armeabi-v7a /s /q > nul
	del libcocos2dcpp.so /q > nul
	cd ..
)
