/********************************************************************************
** Form generated from reading UI file 'createteampage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATETEAMPAGE_H
#define UI_CREATETEAMPAGE_H

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

class Ui_CreateTeamPage
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
    QLabel *logoLabel;
    QPushButton *createAccountButton;
    QPushButton *backButton;

    void setupUi(QDialog *CreateTeamPage)
    {
        if (CreateTeamPage->objectName().isEmpty())
            CreateTeamPage->setObjectName("CreateTeamPage");
        CreateTeamPage->resize(472, 490);
        logInGroupBox = new QGroupBox(CreateTeamPage);
        logInGroupBox->setObjectName("logInGroupBox");
        logInGroupBox->setGeometry(QRect(40, 140, 391, 211));
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

        logoLabel = new QLabel(CreateTeamPage);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setGeometry(QRect(190, 40, 100, 100));
        logoLabel->setMinimumSize(QSize(100, 100));
        logoLabel->setMaximumSize(QSize(50, 50));
        logoLabel->setAcceptDrops(true);
        logoLabel->setScaledContents(true);
        logoLabel->setAlignment(Qt::AlignCenter);
        createAccountButton = new QPushButton(CreateTeamPage);
        createAccountButton->setObjectName("createAccountButton");
        createAccountButton->setGeometry(QRect(140, 360, 171, 32));
        backButton = new QPushButton(CreateTeamPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(140, 400, 171, 32));

        retranslateUi(CreateTeamPage);

        QMetaObject::connectSlotsByName(CreateTeamPage);
    } // setupUi

    void retranslateUi(QDialog *CreateTeamPage)
    {
        CreateTeamPage->setWindowTitle(QCoreApplication::translate("CreateTeamPage", "Dialog", nullptr));
        logInGroupBox->setTitle(QString());
        nameLabel->setText(QCoreApplication::translate("CreateTeamPage", "Team name", nullptr));
        joinCodeLabel->setText(QCoreApplication::translate("CreateTeamPage", "Team join code #", nullptr));
        companyNameLabel->setText(QCoreApplication::translate("CreateTeamPage", "Company name", nullptr));
        createTeamButton->setText(QCoreApplication::translate("CreateTeamPage", "Create team", nullptr));
        logoLabel->setText(QString());
        createAccountButton->setText(QCoreApplication::translate("CreateTeamPage", "Already have a team?", nullptr));
        backButton->setText(QCoreApplication::translate("CreateTeamPage", "Already have a team?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateTeamPage: public Ui_CreateTeamPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATETEAMPAGE_H
