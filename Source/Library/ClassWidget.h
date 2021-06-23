#pragma once

//#include "ObjectBase.h"
#include "qframe.h"

class QClassWidget : public QFrame
{
public:

	QClassWidget();
	QClassWidget(QWidget* Parent);
	virtual ~QClassWidget();

	void Initialize();
	void SetStyle();	// 暂时固定, 后续走配置.

	void AddFunction();
	void AddProperty();

	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseReleaseEvent(QMouseEvent* event);
	virtual void mouseMoveEvent(QMouseEvent* event);

	bool bDrag;
	QPointF PressedMousePosition;
	QPointF PressedWidgetPosition;

private:

	// 默认参数, 后续改为配置.
	float m_DefaultWidth;
	float m_DefaultHeight;

	// Function 集合
	// Property 集合

};