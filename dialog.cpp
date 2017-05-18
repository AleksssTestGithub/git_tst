#include "dialog.h"
#include "ui_dialog.h"

//comment

//new comment

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QTextCursor cursor=ui->textEdit->textCursor();
    QTextBlockFormat textBlockFormat=cursor.blockFormat();
    textBlockFormat.setAlignment(Qt::AlignRight);
    cursor.mergeBlockFormat(textBlockFormat);
    ui->textEdit->setTextCursor(cursor);
}

Dialog::~Dialog()
{
    delete ui;
}
