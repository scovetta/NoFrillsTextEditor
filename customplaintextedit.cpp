#include "customplaintextedit.h"

CustomPlainTextEdit::CustomPlainTextEdit(QWidget *parent) : QPlainTextEdit(parent)
{
}

void CustomPlainTextEdit::wheelEvent( QWheelEvent * inEvent )
{
    Qt::KeyboardModifiers result = QApplication::queryKeyboardModifiers();
    if ((result & Qt::ControlModifier) == Qt::ControlModifier) {
        int new_size = this->font().pointSize();

        if (inEvent->delta() > 0) {
            QFont newFont = QFont(this->font());
            newFont.setPointSize(new_size + 1);
            this->setFont(newFont);
        } else {
            if (new_size > 6) {
                QFont newFont = QFont(this->font());
                newFont.setPointSize(new_size - 1);
                this->setFont(newFont);
            }
        }
        inEvent->ignore();
    } else {
        QPlainTextEdit::wheelEvent(inEvent);
    }

}
