//  put "#pragma once" at the top of header files to protect against being included multiple times
#pragma once
#include "ui_StatusWidget.h"
#include <QtWidgets>
#include <QPainter>
#include <QRect>

class StatusWidget : public QWidget {
public:

	Ui_StatusWidget _ui;	

	StatusWidget ( QWidget * parent = 0, Qt::WindowFlags f = 0 ):QWidget(parent, f) 
	{
		//paintEvent(QPaintEvent * event);
		//draw(QRect &rect);  
   		_ui.setupUi(this);
	      
	};
	virtual void paintEvent ( QPaintEvent * event )	{
		//QRect rect = event->rect();
    		//draw(rect,13);
	}


	
	

		
};
