#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    // 可在此处设置对话框固定大小，防止拉伸
    setFixedSize(300, 200);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_btnOK_clicked()
{
    this->close(); // 点击确定按钮关闭对话框
}
