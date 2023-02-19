/********************************************************************************
** Form generated from reading UI file 'createteamwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETEAMWINDOW_H
#define UI_CREATETEAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateTeamWindow
{
public:
    QGroupBox *logInGroupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *logInLayout;
    QHBoxLayout *nameLayout;
    QLabel *nameLabel;
    QLineEdit *nameInput;
    QHBoxLayout *joinCodeLayout;
    QLabel *joinCodeLabel;
    QLineEdit *joinCodeInput;
    QHBoxLayout *companyNameLayout;
    QLabel *companyNameLabel;
    QLineEdit *companyNameInput;
    QPushButton *createTeamButton;
    QPushButton *backButton;
    QLabel *logoLabel;

    void setupUi(QDialog *CreateTeamWindow)
    {
        if (CreateTeamWindow->objectName().isEmpty())
            CreateTeamWindow->setObjectName("CreateTeamWindow");
        CreateTeamWindow->resize(455, 464);
        logInGroupBox = new QGroupBox(CreateTeamWindow);
        logInGroupBox->setObjectName("logInGroupBox");
        logInGroupBox->setGeometry(QRect(30, 140, 391, 211));
        verticalLayoutWidget = new QWidget(logInGroupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 361, 181));
        logInLayout = new QVBoxLayout(verticalLayoutWidget);
        logInLayout->setObjectName("logInLayout");
        logInLayout->setContentsMargins(0, 0, 0, 0);
        nameLayout = new QHBoxLayout();
        nameLayout->setObjectName("nameLayout");
        nameLabel = new QLabel(verticalLayoutWidget);
        nameLabel->setObjectName("nameLabel");

        nameLayout->addWidget(nameLabel);

        nameInput = new QLineEdit(verticalLayoutWidget);
        nameInput->setObjectName("nameInput");

        nameLayout->addWidget(nameInput);


        logInLayout->addLayout(nameLayout);

        joinCodeLayout = new QHBoxLayout();
        joinCodeLayout->setObjectName("joinCodeLayout");
        joinCodeLabel = new QLabel(verticalLayoutWidget);
        joinCodeLabel->setObjectName("joinCodeLabel");

        joinCodeLayout->addWidget(joinCodeLabel);

        joinCodeInput = new QLineEdit(verticalLayoutWidget);
        joinCodeInput->setObjectName("joinCodeInput");

        joinCodeLayout->addWidget(joinCodeInput);


        logInLayout->addLayout(joinCodeLayout);

        companyNameLayout = new QHBoxLayout();
        companyNameLayout->setObjectName("companyNameLayout");
        companyNameLabel = new QLabel(verticalLayoutWidget);
        companyNameLabel->setObjectName("companyNameLabel");

        companyNameLayout->addWidget(companyNameLabel);

        companyNameInput = new QLineEdit(verticalLayoutWidget);
        companyNameInput->setObjectName("companyNameInput");

        companyNameLayout->addWidget(companyNameInput);


        logInLayout->addLayout(companyNameLayout);

        createTeamButton = new QPushButton(verticalLayoutWidget);
        createTeamButton->setObjectName("createTeamButton");

        logInLayout->addWidget(createTeamButton);

        backButton = new QPushButton(CreateTeamWindow);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(130, 370, 171, 32));
        logoLabel = new QLabel(CreateTeamWindow);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setGeometry(QRect(180, 40, 100, 100));
        logoLabel->setMinimumSize(QSize(100, 100));
        logoLabel->setMaximumSize(QSize(50, 50));
        logoLabel->setAcceptDrops(true);
        logoLabel->setScaledContents(true);
        logoLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(CreateTeamWindow);

        QMetaObject::connectSlotsByName(CreateTeamWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateTeamWindow)
    {
        CreateTeamWindow->setWindowTitle(QCoreApplication::translate("CreateTeamWindow", "Dialog", nullptr));
        logInGroupBox->setTitle(QString());
        nameLabel->setText(QCoreApplication::translate("CreateTeamWindow", "Team name", nullptr));
        joinCodeLabel->setText(QCoreApplication::translate("CreateTeamWindow", "Team join code #", nullptr));
        companyNameLabel->setText(QCoreApplication::translate("CreateTeamWindow", "Company name", nullptr));
        createTeamButton->setText(QCoreApplication::translate("CreateTeamWindow", "Create team", nullptr));
        backButton->setText(QCoreApplication::translate("CreateTeamWindow", "Already have a team?", nullptr));
        logoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateTeamWindow: public Ui_CreateTeamWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETEAMWINDOW_H
