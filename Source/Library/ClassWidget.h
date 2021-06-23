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
	void SetStyle();	// ��ʱ�̶�, ����������.

	void AddFunction();
	void AddProperty();

	virtual void mousePressEvent(QMouseEvent* event);
	virtual void mouseReleaseEvent(QMouseEvent* event);
	virtual void mouseMoveEvent(QMouseEvent* event);

	bool bDrag;
	QPointF PressedMousePosition;
	QPointF PressedWidgetPosition;

private:

	// Ĭ�ϲ���, ������Ϊ����.
	float m_DefaultWidth;
	float m_DefaultHeight;

	// Function ����
	// Property ����

};