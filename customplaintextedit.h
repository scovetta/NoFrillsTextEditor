#ifndef CUSTOMPLAINTEXTEDIT_H
#define CUSTOMPLAINTEXTEDIT_H

#include <QPlainTextEdit>
#include <QApplication>
#include <Qt>
#include <QPlainTextEdit>
#include <QDebug>

class CustomPlainTextEdit : public QPlainTextEdit
{
public:
    CustomPlainTextEdit(QWidget *parent = 0);
protected:
    virtual void wheelEvent( QWheelEvent * inEvent );
};

#endif // CUSTOMPLAINTEXTEDIT_H
