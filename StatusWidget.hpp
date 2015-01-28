//  put "#pragma once" at the top of header files to protect against being included multiple times
#pragma once
#include "ui_StatusWidget.h"
#include <QtWidgets>
#include <QPainter>
#include <QRect>
//"wifi-32(1).png"

class StatusWidget : public QWidget {
public:

	Ui_StatusWidget _ui;	

	StatusWidget ( QWidget * parent = 0, Qt::WindowFlags f = 0 ):QWidget(parent, f) 
	{
	//set(false,17);
	//paintEvent(QPaintEvent * event);
		//draw(QRect &rect);  
   		_ui.setupUi(this);
		set(true,56);
	


		
	      
	};
	virtual void paintEvent ( QPaintEvent * event )	{
		//QRect rect = event->rect();
    		//draw(rect,13);

		
	}
	void set(bool signal,int value)
{
	if (signal==true) {_ui.label->setPixmap(QPixmap("../wifi-32(1).png"));}
else{_ui.label->setPixmap(QPixmap("../wifi-empty-32(1).png"));}
_ui.battery_4->value=value;
		

}


	
	

		
};
