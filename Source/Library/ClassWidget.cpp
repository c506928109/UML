#include "ClassWidget.h"
#include "WidgetStyle.h"
#include "qevent.h"
#include <QGraphicsDropShadowEffect>

QClassWidget::QClassWidget()
{
    Initialize();
}

QClassWidget::QClassWidget(QWidget* Parent) : QFrame(Parent)
{
    Initialize();
}

QClassWidget::~QClassWidget()
{

}

void QClassWidget::Initialize()
{
    m_DefaultWidth = 100.f;
    m_DefaultHeight = 500.f;
    this->setGeometry(QRect(100, 100, m_DefaultWidth, m_DefaultHeight));

    SetStyle();
}

void QClassWidget::SetStyle()
{
    this->setStyleSheet(BackgroundColor("#ffffff") + Border("1", "#000000", "1"));
    //设置具体阴影
    QGraphicsDropShadowEffect* shadow_effect = new QGraphicsDropShadowEffect(this);
    shadow_effect->setOffset(0, 0);
    //阴影颜色
    shadow_effect->setColor(QColor(38, 78, 119, 127));
    //阴影半径
    shadow_effect->setBlurRadius(22);
    this->setGraphicsEffect(shadow_effect);
}

void QClassWidget::AddFunction()
{

}

void QClassWidget::AddProperty()
{

}

void QClassWidget::mousePressEvent(QMouseEvent* event)
{
    bDrag = true;
    PressedMousePosition = event->scenePosition();
    PressedWidgetPosition.setX(this->geometry().x());
    PressedWidgetPosition.setY(this->geometry().y());
}

void QClassWidget::mouseReleaseEvent(QMouseEvent* event)
{
    bDrag = false;
}

void QClassWidget::mouseMoveEvent(QMouseEvent* event)
{
    if (bDrag)
    {
        QPointF Position = event->scenePosition();
        QPointF Offset = Position - PressedMousePosition;
        Offset += PressedWidgetPosition;
        this->move(Offset.x(), Offset.y());
    }
}