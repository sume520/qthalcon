#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication1.h"
#include "HalconCpp.h"
using namespace HalconCpp;

class QtGuiApplication1 : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication1(QWidget *parent = Q_NULLPTR);

	// Local iconic variables
	HObject  ho_Image, ho_Edges, ho_Region, ho_all;
	HObject  ho_inner, ho_AllBinImage, ho_AllReduced, ho_innerBinImage;
	HObject  ho_ImageSub, ho_Regions, ho_ROI_0, ho_ImageReduced;
	HObject  ho_BinImage, ho_ImageSub1, ho_Regions1, ho_RegionErosion;
	HObject  ho_Circle, ho_BinImage1, ho_RegionDilation, ho_BinImage2;
	HObject  ho_ImageSub2, ho_Regions2, ho_RegionErosion1, ho_Rectangle;
	HObject  ho_ImageReduced1, ho_Regions3, ho_BinImage3, ho_ImageSub3;
	HObject  ho_Regions4, ho_ImageReduced2;

	// Local control variables
	HTuple  hv_WindowHandle, hv_InnerRow, hv_InnerColumn;
	HTuple  hv_InnerRadius, hv_Row, hv_Column, hv_Radius, hv_Row1;
	HTuple  hv_Column1, hv_Phi, hv_Length1, hv_Length2, hv_Row2;
	HTuple  hv_Column2, hv_Phi1, hv_Length11, hv_Length21;

private:
	Ui::QtGuiApplication1Class ui;

private slots:
	void read_Image_BT();
	void slove_Image_BT();
};
