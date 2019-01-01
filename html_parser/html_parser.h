#ifndef HTML_PARSER_H
#define HTML_PARSER_H

#include <QMainWindow>

namespace Ui {
class html_parser;
}

class html_parser : public QMainWindow
{
    Q_OBJECT

public:
    explicit html_parser(QWidget *parent = nullptr);
    ~html_parser();

private:
    Ui::html_parser *ui;
};

#endif // HTML_PARSER_H
