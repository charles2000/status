//  put "#pragma once" at the top of header files to protect against being included multiple times
#pragma once

#include <QtWidgets>
#include <QPainter>
#include <QRect>

class BatteryWidget : public QWidget {
public:
int value;
	BatteryWidget ( QWidget * parent = 0, Qt::WindowFlags f = 0 ):QWidget(parent, f) 
	{
		//paintEvent(QPaintEvent * event);
		//draw(QRect &rect);

	};
	virtual void paintEvent ( QPaintEvent * event )	{
		QRect rect = event->rect();
    		
	draw(rect,value);
	}


	void draw(QRect &rect,int value)
	{
	    
	    
	    QPainter painter(this);
	    painter.setRenderHint(QPainter::Antialiasing);
	    painter.setPen(Qt::black);
	   
	    //painter.drawText(rect, Qt::AlignCenter,
		              //"Data");
	   
	    
	   
	    //painter.drawRect(rect);
	   
	    //painter.fillRect(rect.x(),rect.y(),rect.width()*0.9,rect.height(),Qt::red);// background rectangle
	    painter.drawRect(rect.x(),rect.y(),rect.width()*0.9,rect.height());
	    painter.fillRect(rect.x(),rect.y(),(rect.width()*value*0.9/100 ),rect.height(),Qt::blue);// rectangle proportionnal to battery
	    
	    int x= rect.x()+(rect.width()*0.9);
	    int y =rect.y()+rect.height()/2 -5;
	    painter.drawText(rect, Qt::AlignCenter,QString("%1").arg(value));

	}
	

		
};
