//
// Created by Vi1i on 1/24/19.
//


#include "mainwidget.hpp"
#include <QtWidgets>

// Constructor for main widget
axel::gui::mainwidget::mainwidget(QWidget *parent) :
        QWidget(parent) {
    button_ = new QPushButton(tr("Push Me!"));
    textBrowser_ = new QTextBrowser();

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(button_,0,0);
    mainLayout->addWidget(textBrowser_,1,0);
    setLayout(mainLayout);
    setWindowTitle(tr("Connecting buttons to processes.."));
}

// Destructor
axel::gui::mainwidget::~mainwidget() {
    delete button_;
    delete textBrowser_;
}