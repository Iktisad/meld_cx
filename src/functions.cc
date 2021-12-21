#include "functions.h"
#include "windows.h"
#pragma comment(lib, "user32.lib")

//Show the number of attached displays
NAN_METHOD(enumMonitor) {
	int number = GetSystemMetrics(SM_CMONITORS);
	info.GetReturnValue().Set(number);
}

//Displays to sleep
NAN_METHOD(reqSleep) {
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);    
}

//Displays to wake
NAN_METHOD(reqAwake) {
	SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) -1);
}

//Returns the last input time
NAN_METHOD(lastInputTime) {
	LASTINPUTINFO lastInput;
	lastInput.cbSize = sizeof(LASTINPUTINFO);
	GetLastInputInfo(&lastInput);
	
	// calculate time elapsed (in seconds)
	int currentTime = GetTickCount();
	int elapsedTime = (currentTime - lastInput.dwTime) / 100;
	info.GetReturnValue().Set(elapsedTime);
}

