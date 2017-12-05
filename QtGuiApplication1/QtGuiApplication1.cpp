#include "QtGuiApplication1.h"
#include "qdebug.h"

QtGuiApplication1::QtGuiApplication1(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtGuiApplication1::read_Image_BT()
{
	if (HDevWindowStack::IsOpen())
		CloseWindow(HDevWindowStack::Pop());
	SetWindowAttr("background_color", "black");
	OpenWindow(0, 0, 960, 540, 0, "visible", "", &hv_WindowHandle);
	HDevWindowStack::Push(hv_WindowHandle);
	ReadImage(&ho_Image, "clip.jpg");
}

void QtGuiApplication1::slove_Image_BT()
{
	
}