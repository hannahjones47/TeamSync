/********************************************************************************
** Form generated from reading UI file 'createaccountwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNTWINDOW_H
#define UI_CREATEACCOUNTWINDOW_H

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

class Ui_CreateAccountWindow
{
public:
    QLabel *logoLabel;
    QPushButton *logInButton;
    QGroupBox *logInGroupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *logInLayout;
    QHBoxLayout *joinCodeLayout;
    QLabel *joinCodeLabel;
    QLineEdit *joinCodeInput;
    QLabel *joinCodeLabel_2;
    QPushButton *createTeamButton;
    QHBoxLayout *usernameLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameInput;
    QHBoxLayout *passwordLayout;
    QLabel *passwordLabel;
    QLineEdit *passwordInput;
    QHBoxLayout *firstNameLayout;
    QLabel *firstNameLabel;
    QLineEdit *firstNameInput;
    QHBoxLayout *lastNameLayout;
    QLabel *lastNameLabel;
    QLineEdit *lastNameInput;
    QHBoxLayout *emailLayout;
    QLabel *emailLabel;
    QLineEdit *emailInput;
    QHBoxLayout *jobRoleLayout;
    QLabel *jobRoleLabel;
    QLineEdit *jobRoleInput;
    QPushButton *createAccountButton;

    void setupUi(QDialog *CreateAccountWindow)
    {
        if (CreateAccountWindow->objectName().isEmpty())
            CreateAccountWindow->setObjectName("CreateAccountWindow");
        CreateAccountWindow->resize(472, 490);
        logoLabel = new QLabel(CreateAccountWindow);
        logoLabel->setObjectName("logoLabel");
        logoLabel->setGeometry(QRect(190, 20, 100, 100));
        logoLabel->setMinimumSize(QSize(100, 100));
        logoLabel->setMaximumSize(QSize(50, 50));
        logoLabel->setAcceptDrops(true);
        logoLabel->setScaledContents(true);
        logoLabel->setAlignment(Qt::AlignCenter);
        logInButton = new QPushButton(CreateAccountWindow);
        logInButton->setObjectName("logInButton");
        logInButton->setGeometry(QRect(140, 410, 171, 32));
        logInGroupBox = new QGroupBox(CreateAccountWindow);
        logInGroupBox->setObjectName("logInGroupBox");
        logInGroupBox->setGeometry(QRect(40, 120, 391, 291));
        verticalLayoutWidget = new QWidget(logInGroupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 373, 274));
        logInLayout = new QVBoxLayout(verticalLayoutWidget);
        logInLayout->setObjectName("logInLayout");
        logInLayout->setContentsMargins(0, 0, 0, 0);
        joinCodeLayout = new QHBoxLayout();
        joinCodeLayout->setObjectName("joinCodeLayout");
        joinCodeLabel = new QLabel(verticalLayoutWidget);
        joinCodeLabel->setObjectName("joinCodeLabel");

        joinCodeLayout->addWidget(joinCodeLabel);

        joinCodeInput = new QLineEdit(verticalLayoutWidget);
        joinCodeInput->setObjectName("joinCodeInput");

        joinCodeLayout->addWidget(joinCodeInput);

        joinCodeLabel_2 = new QLabel(verticalLayoutWidget);
        joinCodeLabel_2->setObjectName("joinCodeLabel_2");

        joinCodeLayout->addWidget(joinCodeLabel_2);

        createTeamButton = new QPushButton(verticalLayoutWidget);
        createTeamButton->setObjectName("createTeamButton");

        joinCodeLayout->addWidget(createTeamButton);


        logInLayout->addLayout(joinCodeLayout);

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

        passwordLayout->addWidget(passwordInput);


        logInLayout->addLayout(passwordLayout);

        firstNameLayout = new QHBoxLayout();
        firstNameLayout->setObjectName("firstNameLayout");
        firstNameLabel = new QLabel(verticalLayoutWidget);
        firstNameLabel->setObjectName("firstNameLabel");

        firstNameLayout->addWidget(firstNameLabel);

        firstNameInput = new QLineEdit(verticalLayoutWidget);
        firstNameInput->setObjectName("firstNameInput");

        firstNameLayout->addWidget(firstNameInput);


        logInLayout->addLayout(firstNameLayout);

        lastNameLayout = new QHBoxLayout();
        lastNameLayout->setObjectName("lastNameLayout");
        lastNameLabel = new QLabel(verticalLayoutWidget);
        lastNameLabel->setObjectName("lastNameLabel");

        lastNameLayout->addWidget(lastNameLabel);

        lastNameInput = new QLineEdit(verticalLayoutWidget);
        lastNameInput->setObjectName("lastNameInput");

        lastNameLayout->addWidget(lastNameInput);


        logInLayout->addLayout(lastNameLayout);

        emailLayout = new QHBoxLayout();
        emailLayout->setObjectName("emailLayout");
        emailLabel = new QLabel(verticalLayoutWidget);
        emailLabel->setObjectName("emailLabel");

        emailLayout->addWidget(emailLabel);

        emailInput = new QLineEdit(verticalLayoutWidget);
        emailInput->setObjectName("emailInput");

        emailLayout->addWidget(emailInput);


        logInLayout->addLayout(emailLayout);

        jobRoleLayout = new QHBoxLayout();
        jobRoleLayout->setObjectName("jobRoleLayout");
        jobRoleLabel = new QLabel(verticalLayoutWidget);
        jobRoleLabel->setObjectName("jobRoleLabel");

        jobRoleLayout->addWidget(jobRoleLabel);

        jobRoleInput = new QLineEdit(verticalLayoutWidget);
        jobRoleInput->setObjectName("jobRoleInput");

        jobRoleLayout->addWidget(jobRoleInput);


        logInLayout->addLayout(jobRoleLayout);

        createAccountButton = new QPushButton(verticalLayoutWidget);
        createAccountButton->setObjectName("createAccountButton");

        logInLayout->addWidget(createAccountButton);


        retranslateUi(CreateAccountWindow);

        QMetaObject::connectSlotsByName(CreateAccountWindow);
    } // setupUi

    void retranslateUi(QDialog *CreateAccountWindow)
    {
        CreateAccountWindow->setWindowTitle(QCoreApplication::translate("CreateAccountWindow", "Dialog", nullptr));
        logoLabel->setText(QString());
        logInButton->setText(QCoreApplication::translate("CreateAccountWindow", "Already have an account?", nullptr));
        logInGroupBox->setTitle(QString());
        joinCodeLabel->setText(QCoreApplication::translate("CreateAccountWindow", "Team join code #", nullptr));
        joinCodeLabel_2->setText(QCoreApplication::translate("CreateAccountWindow", "or", nullptr));
        createTeamButton->setText(QCoreApplication::translate("CreateAccountWindow", "Create a team", nullptr));
        usernameLabel->setText(QCoreApplication::translate("CreateAccountWindow", "Username", nullptr));
        passwordLabel->setText(QCoreApplication::translate("CreateAccountWindow", "Password", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("CreateAccountWindow", "First name", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("CreateAccountWindow", "Last name", nullptr));
        emailLabel->setText(QCoreApplication::translate("CreateAccountWindow", "Email ", nullptr));
        jobRoleLabel->setText(QCoreApplication::translate("CreateAccountWindow", "Job role", nullptr));
        createAccountButton->setText(QCoreApplication::translate("CreateAccountWindow", "Create account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAccountWindow: public Ui_CreateAccountWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNTWINDOW_H
