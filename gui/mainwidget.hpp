//
// Created by oboylela on 1/24/19.
//

#ifndef AXEL_GUI_MAINWIDGET_HPP
#define AXEL_GUI_MAINWIDGET_HPP
#include <QWidget>

class QPushButton;
class QTextBrowser;

// This is the declaration of our MainWidget class
// The definition/implementation is in mainwidget.cpp
namespace axel { namespace gui {
    class mainwidget : public QWidget {
    Q_OBJECT

    public:
        explicit mainwidget(QWidget *parent = 0); //Constructor
        ~mainwidget(); // Destructor

    private:
        QPushButton *button_;
        QTextBrowser *textBrowser_;
    };
}}
#endif //AXEL_GUI_MAINWIDGET_HPP
