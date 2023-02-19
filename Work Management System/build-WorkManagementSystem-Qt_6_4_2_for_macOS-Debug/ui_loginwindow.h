/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *logInGroupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *logInLayout;
    QHBoxLayout *usernameLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameInput;
    QHBoxLayout *passwordLayout;
    QLabel *passwordLabel;
    QLineEdit *passwordInput;
    QPushButton *logInButton;
    QLabel *logoLabel;
    QPushButton *createAccountButton;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(331, 346);
        QFont font;
        font.setFamilies({QString::fromUtf8("Avenir")});
        font.setBold(false);
        font.setItalic(false);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        logInGroupBox = new QGroupBox(centralwidget);
        logInGroupBox->setObjectName("logInGroupBox");
        logInGroupBox->setGeometry(QRect(40, 110, 251, 131));
        verticalLayoutWidget = new QWidget(logInGroupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 231, 113));
        logInLayout = new QVBoxLayout(verticalLayoutWidget);
        logInLayout->setObjectName("logInLayout");
        logInLayout->setContentsMargins(0, 0, 0, 0);
        usernameLayout = new QHBoxLayout();
        usernameLayout->setObjectName("usernameLayout");
        usernameLabel = new QLabel(verticalLayoutWidget);
        usernameLabel->setObjectName("usernameLabel");

        usernameLayout->addWidget(usernameLabel);

        usernameInput = new QLineEdit(verticalLayoutWidget);
        usernameInput->setObjectName("usernameInput");

        usernameLayout->addWidget(usernameInput);


        logInLayout->addLayout(usernameLayout);

        passwordLayout = new QHBoxLayout();
        passwordLayout->setObjectName("passwordLayout");
        passwordLabel = new QLabel(verticalLayoutWidget);
        passwordLabel->setObjectName("passwordLabel");

        passwordLayout->addWidget(passwordLabel);

        passwordInput = new QLineEdit(verticalLayoutWidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setEchoMode(QLineEdit::Password);

        passwordLayout->addWidget(passwordInput);


        logInLayout->addLayout(passwordLayout);

        logInButton = new QPushButton(verticalLayoutWidget);
        logInButton->setObjectName("logInButton");
        logInButton->setAutoDefault(false);
        logInButton->setFlat(false);

        logInLayout->addWidget(logInButton);

        logoLabel = new QLabel(centralwidget);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setGeometry(QRect(120, 10, 100, 100));
        logoLabel->setMinimumSize(QSize(100, 100));
        logoLabel->setMaximumSize(QSize(50, 50));
        logoLabel->setAcceptDrops(true);
        logoLabel->setScaledContents(true);
        logoLabel->setAlignment(Qt::AlignCenter);
        createAccountButton = new QPushButton(centralwidget);
        createAccountButton->setObjectName("createAccountButton");
        createAccountButton->setGeometry(QRect(90, 250, 151, 32));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(10, 280, 21, 31));
        exitButton->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 331, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        logInButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        logInGroupBox->setTitle(QString());
        usernameLabel->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        logInButton->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        logoLabel->setText(QString());
        createAccountButton->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        exitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
