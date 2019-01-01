#include "html_parser.h"
#include "ui_html_parser.h"

html_parser::html_parser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::html_parser)
{
    ui->setupUi(this);
}

html_parser::~html_parser()
{
    delete ui;
}
