#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	SetGraphMode(1280, 720, 32);
	ChangeWindowMode(true);
	SetWindowText(L"1916028_’†‰€‘ñ–¤");
	if (DxLib_Init()) {
		return -1;

	}
	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0) {
		ScreenFlip();
		
	}

	DxLib_End();
	return 0;
}