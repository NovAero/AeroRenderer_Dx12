#include "pch.h"

/*----------------------------------------------*/
/* Author: NovAero								*/
/* License: MIT License							*/
/*----------------------------------------------*/

LRESULT CALLBACK WindowProcess(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) {

	switch (message)
	{
	case  WM_DESTROY:
		PostQuitMessage(0);
		break;
	}

	return DefWindowProc(hwnd, message, wparam, lparam);
}

//int CALLBACK WinMain(HINSTANCE , HINSTANCE , LPSTR , INT ) {
//	/*
//	AEAppWindow app;
//
//	if (app.Display()) {
//		app.MessageLoop();
//	}
//	app.Exit();*/
//
//	WNDCLASSEX	wcex;
//
//	HWND		hWnd; //Window handle
//	MSG			msg = { 0 }; //Message listener
//
//	WCHAR		WindowClass[MAX_NAME_STRING];
//	WCHAR		WindowTitle[MAX_NAME_STRING];
//
//	int			WindowWidth;
//	int			WindowHeight;
//
//	HICON		hIcon;
//
//	//initalise globals
//	LoadString(HInstance(), IDS_PERGAMENAME, WindowTitle, MAX_NAME_STRING);
//	LoadString(HInstance(), IDS_WINDOWCLASS, WindowClass, MAX_NAME_STRING);
//
//	WindowWidth = 1280;
//	WindowHeight = 720;
//
//	hIcon = LoadIcon(HInstance(), MAKEINTRESOURCE(IDI_MAINICON));
//
//	//Window class setup list
//	//Size allocated for application
//	wcex.cbSize = sizeof(WNDCLASSEX);
//	wcex.style = CS_HREDRAW | CS_VREDRAW;
//	//Extra memory allocaiton
//	wcex.cbClsExtra = 0;
//	wcex.cbWndExtra = 0;
//
//	//Cursor and background
//	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
//	wcex.hbrBackground = (HBRUSH)GetStockObject(NULL_BRUSH);
//
//	//hIcon is top left of app window, hIxonSm is taskbar icon
//	wcex.hIcon = hIcon;
//	wcex.hIconSm = hIcon;
//
//	//class name
//	wcex.lpszClassName = WindowClass;
//
//	//drop down menus - none (its a game!!)
//	wcex.lpszMenuName = nullptr;
//
//	//current instance of the window
//	wcex.hInstance = HInstance();
//
//	//Process for application
//	wcex.lpfnWndProc = WindowProcess;
//
//	//End of class setup
//
//	//Register class after setup
//	RegisterClassEx(&wcex);
//
//	return true;
//
//	//create and display window - reminder hWnd | handle (for) Window
//	hWnd = CreateWindowEx(WS_EX_OVERLAPPEDWINDOW, WindowClass, WindowTitle, WS_OVERLAPPEDWINDOW,
//		CW_USEDEFAULT, 0, WindowWidth, WindowHeight, nullptr, nullptr, HInstance(), nullptr);
//
//	if (!hWnd) {
//		MessageBox(0, L"Failed to create window", 0, 0);
//		return false;
//	}
//	//Display window
//	ShowWindow(hWnd, SW_SHOW);
//	return true;
//
//	while (msg.message != WM_QUIT) {
//		//if there are any window messages, process them
//		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
//			TranslateMessage(&msg);
//			DispatchMessage(&msg);
//		}
//	}
//	return false;
//
//	return 1;
//}
