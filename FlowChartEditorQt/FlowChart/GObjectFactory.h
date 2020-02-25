#ifndef _GOBJECTFACTORY_H
#define _GOBJECTFACTORY_H

#include <qpen.h>
#include <qbrush.h>
#include <qfont.h>

class GObject;

class GObjectFactory {
public:
	GObjectFactory();
	virtual ~GObjectFactory() = 0;

	//Create Qt Graphic Object
	virtual GObject* MakePen(const QBrush &brush, float width, Qt::PenStyle style, Qt::PenCapStyle cap, Qt::PenJoinStyle join);
	virtual GObject* MakeBrush(const QColor &color, Qt::BrushStyle style);
	virtual GObject* MakeFont(const QString &family, int pointSize, int weight, bool italic);
};

#endif //_GOBJECTFACTORY_H