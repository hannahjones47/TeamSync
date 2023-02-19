/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *MainPage;
    QLabel *homeTitle;
    QWidget *teamPage;
    QLabel *companyNameLabel;
    QLabel *teamNameLabel;
    QScrollArea *teamMemberScrollArea;
    QWidget *teamMemberScrollAreaWidgetContents;
    QWidget *layoutWidget;
    QHBoxLayout *joinCodeLayout;
    QLabel *hashtagLabel;
    QLabel *joinCodeLabel;
    QLabel *companyNameLabel_2;
    QWidget *projectPage;
    QLabel *projectTitle;
    QScrollArea *projectScrollArea;
    QWidget *projectScrollAreaWidgetContents;
    QWidget *projectDetailsPage;
    QPushButton *backButton;
    QScrollArea *projectDetailScrollArea;
    QWidget *projectDetailScrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *projectNameLabel;
    QHBoxLayout *dueDateLayout;
    QLabel *dueDateLabel_2;
    QLabel *dueDateLabel;
    QHBoxLayout *statusLayout;
    QLabel *statusColourIcon;
    QLabel *statusLabel;
    QHBoxLayout *priorityLayout;
    QLabel *priorityDescriptionLavel;
    QLabel *priorityLabel;
    QLabel *descriptionLabel_2;
    QLabel *descriptionLabel;
    QLabel *ACLabel;
    QVBoxLayout *acceptanceCriteriaLayout;
    QLabel *epicLabel;
    QVBoxLayout *epicLayout;
    QLabel *locationDesc_2;
    QWidget *epicDetailsPage;
    QScrollArea *epicDetailScrollArea;
    QWidget *epicDetailScrollAreaContents;
    QVBoxLayout *verticalLayout_2;
    QLabel *epicNameLabel;
    QHBoxLayout *epicDueDateLayout;
    QLabel *epicDueDateLabelDescription;
    QLabel *epicDueDateLabel;
    QHBoxLayout *epicStatusLayout;
    QLabel *epicStatusColourIcon;
    QLabel *epicStatusLabel;
    QHBoxLayout *epicPriorityLayout;
    QLabel *epicProrityDescriptionLabel;
    QLabel *epicPriorityLabel;
    QLabel *epicDescription;
    QLabel *epicDescriptionLabel;
    QLabel *epicACLabel;
    QVBoxLayout *epicAcceptanceCriteriaLayout;
    QLabel *storyLabel;
    QVBoxLayout *storyLayout;
    QPushButton *epicBackButton;
    QLabel *locationDesc;
    QWidget *storyDetailsPage;
    QScrollArea *storyDetailScrollArea;
    QWidget *storyDetailScrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QLabel *storyNameLabel;
    QHBoxLayout *storydueDateLayout;
    QLabel *storyDueDateLabelDescription;
    QLabel *storyDueDateLabel;
    QHBoxLayout *storyStatusLayout;
    QLabel *storyStatusColourIcon;
    QLabel *storyStatusLabel;
    QHBoxLayout *storyPriorityLayout;
    QLabel *storyPriorityDescriptionLabel;
    QLabel *storyPriorityLabel;
    QLabel *storyDescriptionLabel_2;
    QLabel *storyDescriptionLabel;
    QLabel *storyACLabel;
    QVBoxLayout *storyAcceptanceCriteriaLayout;
    QLabel *subtaskLabel;
    QVBoxLayout *subTaskLayout;
    QPushButton *storyBackButton;
    QLabel *locationDesc_3;
    QWidget *Profile;
    QLabel *profileTitleLabel;
    QGroupBox *profileGroupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *profileLayout;
    QHBoxLayout *usernameLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameInput;
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
    QPushButton *saveProfileButton;
    QFrame *frame;
    QVBoxLayout *navBarLayout;
    QPushButton *mainPageButton;
    QPushButton *profileButton;
    QPushButton *projectsButton;
    QPushButton *teamButton;
    QPushButton *logOutButton;
    QPushButton *logoButton;
    QLabel *navBarBackground;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(800, 600);
        stackedWidget = new QStackedWidget(HomePage);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(79, -1, 721, 600));
        MainPage = new QWidget();
        MainPage->setObjectName("MainPage");
        homeTitle = new QLabel(MainPage);
        homeTitle->setObjectName("homeTitle");
        homeTitle->setGeometry(QRect(90, 50, 151, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Avenir")});
        font.setPointSize(45);
        font.setBold(true);
        homeTitle->setFont(font);
        stackedWidget->addWidget(MainPage);
        teamPage = new QWidget();
        teamPage->setObjectName("teamPage");
        companyNameLabel = new QLabel(teamPage);
        companyNameLabel->setObjectName("companyNameLabel");
        companyNameLabel->setGeometry(QRect(60, 80, 411, 62));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Avenir")});
        font1.setPointSize(18);
        font1.setBold(false);
        companyNameLabel->setFont(font1);
        teamNameLabel = new QLabel(teamPage);
        teamNameLabel->setObjectName("teamNameLabel");
        teamNameLabel->setGeometry(QRect(60, 40, 421, 62));
        teamNameLabel->setFont(font);
        teamMemberScrollArea = new QScrollArea(teamPage);
        teamMemberScrollArea->setObjectName("teamMemberScrollArea");
        teamMemberScrollArea->setGeometry(QRect(60, 140, 631, 451));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(254, 253, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(126, 125, 127, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(169, 167, 170, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush8(QColor(0, 0, 0, 127));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        QBrush brush9(QColor(0, 0, 0, 216));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        QBrush brush10(QColor(245, 245, 245, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush10);
        QBrush brush11(QColor(191, 191, 191, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush11);
        QBrush brush12(QColor(169, 169, 169, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush13(QColor(0, 0, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush13);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush14(QColor(0, 0, 0, 63));
        brush14.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush14);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QBrush brush15(QColor(0, 0, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush15);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        teamMemberScrollArea->setPalette(palette);
        teamMemberScrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"    background-color: white;\n"
"    border: solid;\n"
"    border-color: rgb(229, 242, 255);\n"
"    border-width: 2px;\n"
"}\n"
"QScrollArea QWidget {\n"
"    background-color: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"    width: 10px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #666666;\n"
"    border-radius: 5px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"    background-color: #b8b8b8;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    background: none;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: transparent;\n"
"}\n"
""));
        teamMemberScrollArea->setLineWidth(0);
        teamMemberScrollArea->setWidgetResizable(true);
        teamMemberScrollAreaWidgetContents = new QWidget();
        teamMemberScrollAreaWidgetContents->setObjectName("teamMemberScrollAreaWidgetContents");
        teamMemberScrollAreaWidgetContents->setGeometry(QRect(0, 0, 627, 447));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush16(QColor(226, 228, 232, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush12);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush16);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        teamMemberScrollAreaWidgetContents->setPalette(palette1);
        teamMemberScrollArea->setWidget(teamMemberScrollAreaWidgetContents);
        layoutWidget = new QWidget(teamPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(500, 70, 190, 52));
        joinCodeLayout = new QHBoxLayout(layoutWidget);
        joinCodeLayout->setObjectName("joinCodeLayout");
        joinCodeLayout->setContentsMargins(0, 0, 0, 0);
        hashtagLabel = new QLabel(layoutWidget);
        hashtagLabel->setObjectName("hashtagLabel");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Avenir")});
        font2.setPointSize(36);
        font2.setBold(false);
        hashtagLabel->setFont(font2);
        hashtagLabel->setLayoutDirection(Qt::RightToLeft);
        hashtagLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        joinCodeLayout->addWidget(hashtagLabel);

        joinCodeLabel = new QLabel(layoutWidget);
        joinCodeLabel->setObjectName("joinCodeLabel");
        joinCodeLabel->setFont(font2);
        joinCodeLabel->setLayoutDirection(Qt::RightToLeft);
        joinCodeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        joinCodeLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        joinCodeLayout->addWidget(joinCodeLabel);

        companyNameLabel_2 = new QLabel(teamPage);
        companyNameLabel_2->setObjectName("companyNameLabel_2");
        companyNameLabel_2->setGeometry(QRect(600, 50, 91, 21));
        companyNameLabel_2->setFont(font1);
        stackedWidget->addWidget(teamPage);
        projectPage = new QWidget();
        projectPage->setObjectName("projectPage");
        projectTitle = new QLabel(projectPage);
        projectTitle->setObjectName("projectTitle");
        projectTitle->setGeometry(QRect(40, 50, 191, 51));
        projectTitle->setFont(font);
        projectScrollArea = new QScrollArea(projectPage);
        projectScrollArea->setObjectName("projectScrollArea");
        projectScrollArea->setGeometry(QRect(40, 110, 661, 471));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush17(QColor(0, 0, 0, 255));
        brush17.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush17);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush18(QColor(0, 0, 0, 255));
        brush18.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush18);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QBrush brush19(QColor(0, 0, 0, 255));
        brush19.setStyle(Qt::NoBrush);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush19);
        projectScrollArea->setPalette(palette2);
        projectScrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"    background-color: white;\n"
"    border: solid;\n"
"    border-color: rgb(229, 242, 255);\n"
"    border-width: 2px;\n"
"}\n"
"QScrollArea QWidget {\n"
"    background-color: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"    width: 10px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #666666;\n"
"    border-radius: 5px;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    background: none;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}"));
        projectScrollArea->setWidgetResizable(true);
        projectScrollAreaWidgetContents = new QWidget();
        projectScrollAreaWidgetContents->setObjectName("projectScrollAreaWidgetContents");
        projectScrollAreaWidgetContents->setGeometry(QRect(0, 0, 657, 467));
        projectScrollArea->setWidget(projectScrollAreaWidgetContents);
        stackedWidget->addWidget(projectPage);
        projectDetailsPage = new QWidget();
        projectDetailsPage->setObjectName("projectDetailsPage");
        backButton = new QPushButton(projectDetailsPage);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(10, 10, 65, 56));
        backButton->setMinimumSize(QSize(40, 40));
        QPalette palette3;
        QBrush brush20(QColor(255, 255, 255, 0));
        brush20.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        backButton->setPalette(palette3);
        backButton->setAutoFillBackground(false);
        backButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/arrow-left.png"), QSize(), QIcon::Normal, QIcon::On);
        backButton->setIcon(icon);
        backButton->setIconSize(QSize(40, 40));
        projectDetailScrollArea = new QScrollArea(projectDetailsPage);
        projectDetailScrollArea->setObjectName("projectDetailScrollArea");
        projectDetailScrollArea->setGeometry(QRect(40, 80, 661, 511));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(projectDetailScrollArea->sizePolicy().hasHeightForWidth());
        projectDetailScrollArea->setSizePolicy(sizePolicy);
        projectDetailScrollArea->setMinimumSize(QSize(550, 500));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush21(QColor(0, 0, 0, 255));
        brush21.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush21);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush22(QColor(0, 0, 0, 255));
        brush22.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush22);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QBrush brush23(QColor(0, 0, 0, 255));
        brush23.setStyle(Qt::NoBrush);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush23);
        projectDetailScrollArea->setPalette(palette4);
        projectDetailScrollArea->setFocusPolicy(Qt::NoFocus);
        projectDetailScrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"    background-color: white;\n"
"    border: solid;\n"
"    border-color: rgb(229, 242, 255);\n"
"    border-width: 2px;\n"
"}\n"
"QScrollArea QWidget {\n"
"    background-color: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"    width: 10px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #666666;\n"
"    border-radius: 5px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"    background-color: #b8b8b8;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    background: none;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}\n"
"QPushButton {\n"
"    border: 1px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f6f7fa, stop:1 #dadbde);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(218, 230, 255), stop:1 #f6f7fa);\n"
"}\n"
"QPushButton:pressed {\n"
"    b"
                        "ackground-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(172, 181, 224), stop:1 #c4c6ca);\n"
"}\n"
""));
        projectDetailScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        projectDetailScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        projectDetailScrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        projectDetailScrollArea->setWidgetResizable(true);
        projectDetailScrollAreaWidgetContents = new QWidget();
        projectDetailScrollAreaWidgetContents->setObjectName("projectDetailScrollAreaWidgetContents");
        projectDetailScrollAreaWidgetContents->setGeometry(QRect(0, 0, 647, 700));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(projectDetailScrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        projectDetailScrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        projectDetailScrollAreaWidgetContents->setMinimumSize(QSize(0, 700));
        verticalLayout = new QVBoxLayout(projectDetailScrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        projectNameLabel = new QLabel(projectDetailScrollAreaWidgetContents);
        projectNameLabel->setObjectName("projectNameLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(projectNameLabel->sizePolicy().hasHeightForWidth());
        projectNameLabel->setSizePolicy(sizePolicy2);
        projectNameLabel->setMinimumSize(QSize(0, 45));
        projectNameLabel->setFont(font);

        verticalLayout->addWidget(projectNameLabel);

        dueDateLayout = new QHBoxLayout();
        dueDateLayout->setObjectName("dueDateLayout");
        dueDateLabel_2 = new QLabel(projectDetailScrollAreaWidgetContents);
        dueDateLabel_2->setObjectName("dueDateLabel_2");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dueDateLabel_2->sizePolicy().hasHeightForWidth());
        dueDateLabel_2->setSizePolicy(sizePolicy3);
        dueDateLabel_2->setMinimumSize(QSize(60, 35));
        dueDateLabel_2->setMaximumSize(QSize(50, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Avenir")});
        font3.setPointSize(23);
        font3.setBold(true);
        dueDateLabel_2->setFont(font3);

        dueDateLayout->addWidget(dueDateLabel_2);

        dueDateLabel = new QLabel(projectDetailScrollAreaWidgetContents);
        dueDateLabel->setObjectName("dueDateLabel");
        sizePolicy3.setHeightForWidth(dueDateLabel->sizePolicy().hasHeightForWidth());
        dueDateLabel->setSizePolicy(sizePolicy3);
        dueDateLabel->setMinimumSize(QSize(0, 30));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Avenir")});
        font4.setPointSize(23);
        font4.setBold(false);
        dueDateLabel->setFont(font4);

        dueDateLayout->addWidget(dueDateLabel);


        verticalLayout->addLayout(dueDateLayout);

        statusLayout = new QHBoxLayout();
        statusLayout->setObjectName("statusLayout");
        statusColourIcon = new QLabel(projectDetailScrollAreaWidgetContents);
        statusColourIcon->setObjectName("statusColourIcon");
        sizePolicy3.setHeightForWidth(statusColourIcon->sizePolicy().hasHeightForWidth());
        statusColourIcon->setSizePolicy(sizePolicy3);
        statusColourIcon->setMinimumSize(QSize(0, 0));
        statusColourIcon->setMaximumSize(QSize(30, 50));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Avenir")});
        font5.setPointSize(30);
        font5.setBold(true);
        statusColourIcon->setFont(font5);

        statusLayout->addWidget(statusColourIcon);

        statusLabel = new QLabel(projectDetailScrollAreaWidgetContents);
        statusLabel->setObjectName("statusLabel");
        sizePolicy3.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy3);
        statusLabel->setMinimumSize(QSize(100, 30));
        statusLabel->setMaximumSize(QSize(16777215, 16777215));
        statusLabel->setFont(font4);

        statusLayout->addWidget(statusLabel);


        verticalLayout->addLayout(statusLayout);

        priorityLayout = new QHBoxLayout();
        priorityLayout->setObjectName("priorityLayout");
        priorityDescriptionLavel = new QLabel(projectDetailScrollAreaWidgetContents);
        priorityDescriptionLavel->setObjectName("priorityDescriptionLavel");
        sizePolicy3.setHeightForWidth(priorityDescriptionLavel->sizePolicy().hasHeightForWidth());
        priorityDescriptionLavel->setSizePolicy(sizePolicy3);
        priorityDescriptionLavel->setMinimumSize(QSize(95, 0));
        priorityDescriptionLavel->setMaximumSize(QSize(85, 16777215));
        priorityDescriptionLavel->setFont(font3);

        priorityLayout->addWidget(priorityDescriptionLavel);

        priorityLabel = new QLabel(projectDetailScrollAreaWidgetContents);
        priorityLabel->setObjectName("priorityLabel");
        sizePolicy3.setHeightForWidth(priorityLabel->sizePolicy().hasHeightForWidth());
        priorityLabel->setSizePolicy(sizePolicy3);
        priorityLabel->setMinimumSize(QSize(100, 30));
        priorityLabel->setMaximumSize(QSize(16777215, 16777215));
        priorityLabel->setFont(font4);

        priorityLayout->addWidget(priorityLabel);


        verticalLayout->addLayout(priorityLayout);

        descriptionLabel_2 = new QLabel(projectDetailScrollAreaWidgetContents);
        descriptionLabel_2->setObjectName("descriptionLabel_2");
        sizePolicy3.setHeightForWidth(descriptionLabel_2->sizePolicy().hasHeightForWidth());
        descriptionLabel_2->setSizePolicy(sizePolicy3);
        descriptionLabel_2->setMinimumSize(QSize(50, 30));
        descriptionLabel_2->setMaximumSize(QSize(300, 16777215));
        descriptionLabel_2->setFont(font3);

        verticalLayout->addWidget(descriptionLabel_2);

        descriptionLabel = new QLabel(projectDetailScrollAreaWidgetContents);
        descriptionLabel->setObjectName("descriptionLabel");
        sizePolicy1.setHeightForWidth(descriptionLabel->sizePolicy().hasHeightForWidth());
        descriptionLabel->setSizePolicy(sizePolicy1);
        descriptionLabel->setMinimumSize(QSize(100, 30));
        descriptionLabel->setMaximumSize(QSize(16777214, 16777215));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Avenir")});
        font6.setPointSize(19);
        font6.setBold(false);
        descriptionLabel->setFont(font6);
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionLabel->setWordWrap(true);

        verticalLayout->addWidget(descriptionLabel);

        ACLabel = new QLabel(projectDetailScrollAreaWidgetContents);
        ACLabel->setObjectName("ACLabel");
        sizePolicy3.setHeightForWidth(ACLabel->sizePolicy().hasHeightForWidth());
        ACLabel->setSizePolicy(sizePolicy3);
        ACLabel->setMinimumSize(QSize(50, 30));
        ACLabel->setMaximumSize(QSize(300, 16777215));
        ACLabel->setFont(font3);

        verticalLayout->addWidget(ACLabel);

        acceptanceCriteriaLayout = new QVBoxLayout();
        acceptanceCriteriaLayout->setObjectName("acceptanceCriteriaLayout");
        acceptanceCriteriaLayout->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout->addLayout(acceptanceCriteriaLayout);

        epicLabel = new QLabel(projectDetailScrollAreaWidgetContents);
        epicLabel->setObjectName("epicLabel");
        sizePolicy3.setHeightForWidth(epicLabel->sizePolicy().hasHeightForWidth());
        epicLabel->setSizePolicy(sizePolicy3);
        epicLabel->setMinimumSize(QSize(50, 30));
        epicLabel->setMaximumSize(QSize(300, 16777215));
        epicLabel->setFont(font3);

        verticalLayout->addWidget(epicLabel);

        epicLayout = new QVBoxLayout();
        epicLayout->setSpacing(0);
        epicLayout->setObjectName("epicLayout");
        epicLayout->setSizeConstraint(QLayout::SetMinimumSize);

        verticalLayout->addLayout(epicLayout);

        projectDetailScrollArea->setWidget(projectDetailScrollAreaWidgetContents);
        locationDesc_2 = new QLabel(projectDetailsPage);
        locationDesc_2->setObjectName("locationDesc_2");
        locationDesc_2->setGeometry(QRect(629, 30, 71, 30));
        sizePolicy1.setHeightForWidth(locationDesc_2->sizePolicy().hasHeightForWidth());
        locationDesc_2->setSizePolicy(sizePolicy1);
        locationDesc_2->setMinimumSize(QSize(0, 30));
        locationDesc_2->setMaximumSize(QSize(16777214, 16777215));
        locationDesc_2->setFont(font6);
        locationDesc_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        locationDesc_2->setWordWrap(true);
        stackedWidget->addWidget(projectDetailsPage);
        epicDetailsPage = new QWidget();
        epicDetailsPage->setObjectName("epicDetailsPage");
        epicDetailScrollArea = new QScrollArea(epicDetailsPage);
        epicDetailScrollArea->setObjectName("epicDetailScrollArea");
        epicDetailScrollArea->setGeometry(QRect(40, 80, 661, 511));
        sizePolicy.setHeightForWidth(epicDetailScrollArea->sizePolicy().hasHeightForWidth());
        epicDetailScrollArea->setSizePolicy(sizePolicy);
        epicDetailScrollArea->setMinimumSize(QSize(550, 500));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush24(QColor(0, 0, 0, 255));
        brush24.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush24);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush25(QColor(0, 0, 0, 255));
        brush25.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush25);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QBrush brush26(QColor(0, 0, 0, 255));
        brush26.setStyle(Qt::NoBrush);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush26);
        epicDetailScrollArea->setPalette(palette5);
        epicDetailScrollArea->setFocusPolicy(Qt::NoFocus);
        epicDetailScrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"    background-color: white;\n"
"    border: solid;\n"
"    border-color: rgb(229, 242, 255);\n"
"    border-width: 2px;\n"
"}\n"
"QScrollArea QWidget {\n"
"    background-color: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"    width: 10px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #666666;\n"
"    border-radius: 5px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"    background-color: #b8b8b8;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    background: none;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}\n"
"QPushButton {\n"
"    border: 1px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f6f7fa, stop:1 #dadbde);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(218, 230, 255), stop:1 #f6f7fa);\n"
"}\n"
"QPushButton:pressed {\n"
"    b"
                        "ackground-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(172, 181, 224), stop:1 #c4c6ca);\n"
"}\n"
""));
        epicDetailScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        epicDetailScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        epicDetailScrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        epicDetailScrollArea->setWidgetResizable(true);
        epicDetailScrollAreaContents = new QWidget();
        epicDetailScrollAreaContents->setObjectName("epicDetailScrollAreaContents");
        epicDetailScrollAreaContents->setGeometry(QRect(0, 0, 647, 700));
        sizePolicy1.setHeightForWidth(epicDetailScrollAreaContents->sizePolicy().hasHeightForWidth());
        epicDetailScrollAreaContents->setSizePolicy(sizePolicy1);
        epicDetailScrollAreaContents->setMinimumSize(QSize(0, 700));
        verticalLayout_2 = new QVBoxLayout(epicDetailScrollAreaContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        epicNameLabel = new QLabel(epicDetailScrollAreaContents);
        epicNameLabel->setObjectName("epicNameLabel");
        sizePolicy2.setHeightForWidth(epicNameLabel->sizePolicy().hasHeightForWidth());
        epicNameLabel->setSizePolicy(sizePolicy2);
        epicNameLabel->setMinimumSize(QSize(0, 45));
        epicNameLabel->setFont(font);

        verticalLayout_2->addWidget(epicNameLabel);

        epicDueDateLayout = new QHBoxLayout();
        epicDueDateLayout->setObjectName("epicDueDateLayout");
        epicDueDateLabelDescription = new QLabel(epicDetailScrollAreaContents);
        epicDueDateLabelDescription->setObjectName("epicDueDateLabelDescription");
        sizePolicy3.setHeightForWidth(epicDueDateLabelDescription->sizePolicy().hasHeightForWidth());
        epicDueDateLabelDescription->setSizePolicy(sizePolicy3);
        epicDueDateLabelDescription->setMinimumSize(QSize(60, 35));
        epicDueDateLabelDescription->setMaximumSize(QSize(50, 16777215));
        epicDueDateLabelDescription->setFont(font3);

        epicDueDateLayout->addWidget(epicDueDateLabelDescription);

        epicDueDateLabel = new QLabel(epicDetailScrollAreaContents);
        epicDueDateLabel->setObjectName("epicDueDateLabel");
        sizePolicy3.setHeightForWidth(epicDueDateLabel->sizePolicy().hasHeightForWidth());
        epicDueDateLabel->setSizePolicy(sizePolicy3);
        epicDueDateLabel->setMinimumSize(QSize(0, 30));
        epicDueDateLabel->setFont(font4);

        epicDueDateLayout->addWidget(epicDueDateLabel);


        verticalLayout_2->addLayout(epicDueDateLayout);

        epicStatusLayout = new QHBoxLayout();
        epicStatusLayout->setObjectName("epicStatusLayout");
        epicStatusColourIcon = new QLabel(epicDetailScrollAreaContents);
        epicStatusColourIcon->setObjectName("epicStatusColourIcon");
        sizePolicy3.setHeightForWidth(epicStatusColourIcon->sizePolicy().hasHeightForWidth());
        epicStatusColourIcon->setSizePolicy(sizePolicy3);
        epicStatusColourIcon->setMinimumSize(QSize(0, 0));
        epicStatusColourIcon->setMaximumSize(QSize(30, 50));
        epicStatusColourIcon->setFont(font5);

        epicStatusLayout->addWidget(epicStatusColourIcon);

        epicStatusLabel = new QLabel(epicDetailScrollAreaContents);
        epicStatusLabel->setObjectName("epicStatusLabel");
        sizePolicy3.setHeightForWidth(epicStatusLabel->sizePolicy().hasHeightForWidth());
        epicStatusLabel->setSizePolicy(sizePolicy3);
        epicStatusLabel->setMinimumSize(QSize(100, 30));
        epicStatusLabel->setMaximumSize(QSize(16777215, 16777215));
        epicStatusLabel->setFont(font4);

        epicStatusLayout->addWidget(epicStatusLabel);


        verticalLayout_2->addLayout(epicStatusLayout);

        epicPriorityLayout = new QHBoxLayout();
        epicPriorityLayout->setObjectName("epicPriorityLayout");
        epicProrityDescriptionLabel = new QLabel(epicDetailScrollAreaContents);
        epicProrityDescriptionLabel->setObjectName("epicProrityDescriptionLabel");
        sizePolicy3.setHeightForWidth(epicProrityDescriptionLabel->sizePolicy().hasHeightForWidth());
        epicProrityDescriptionLabel->setSizePolicy(sizePolicy3);
        epicProrityDescriptionLabel->setMinimumSize(QSize(95, 0));
        epicProrityDescriptionLabel->setMaximumSize(QSize(85, 16777215));
        epicProrityDescriptionLabel->setFont(font3);

        epicPriorityLayout->addWidget(epicProrityDescriptionLabel);

        epicPriorityLabel = new QLabel(epicDetailScrollAreaContents);
        epicPriorityLabel->setObjectName("epicPriorityLabel");
        sizePolicy3.setHeightForWidth(epicPriorityLabel->sizePolicy().hasHeightForWidth());
        epicPriorityLabel->setSizePolicy(sizePolicy3);
        epicPriorityLabel->setMinimumSize(QSize(100, 30));
        epicPriorityLabel->setMaximumSize(QSize(16777215, 16777215));
        epicPriorityLabel->setFont(font4);

        epicPriorityLayout->addWidget(epicPriorityLabel);


        verticalLayout_2->addLayout(epicPriorityLayout);

        epicDescription = new QLabel(epicDetailScrollAreaContents);
        epicDescription->setObjectName("epicDescription");
        sizePolicy3.setHeightForWidth(epicDescription->sizePolicy().hasHeightForWidth());
        epicDescription->setSizePolicy(sizePolicy3);
        epicDescription->setMinimumSize(QSize(50, 30));
        epicDescription->setMaximumSize(QSize(300, 16777215));
        epicDescription->setFont(font3);

        verticalLayout_2->addWidget(epicDescription);

        epicDescriptionLabel = new QLabel(epicDetailScrollAreaContents);
        epicDescriptionLabel->setObjectName("epicDescriptionLabel");
        sizePolicy1.setHeightForWidth(epicDescriptionLabel->sizePolicy().hasHeightForWidth());
        epicDescriptionLabel->setSizePolicy(sizePolicy1);
        epicDescriptionLabel->setMinimumSize(QSize(100, 30));
        epicDescriptionLabel->setMaximumSize(QSize(16777214, 16777215));
        epicDescriptionLabel->setFont(font6);
        epicDescriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        epicDescriptionLabel->setWordWrap(true);

        verticalLayout_2->addWidget(epicDescriptionLabel);

        epicACLabel = new QLabel(epicDetailScrollAreaContents);
        epicACLabel->setObjectName("epicACLabel");
        sizePolicy3.setHeightForWidth(epicACLabel->sizePolicy().hasHeightForWidth());
        epicACLabel->setSizePolicy(sizePolicy3);
        epicACLabel->setMinimumSize(QSize(50, 30));
        epicACLabel->setMaximumSize(QSize(300, 16777215));
        epicACLabel->setFont(font3);

        verticalLayout_2->addWidget(epicACLabel);

        epicAcceptanceCriteriaLayout = new QVBoxLayout();
        epicAcceptanceCriteriaLayout->setObjectName("epicAcceptanceCriteriaLayout");
        epicAcceptanceCriteriaLayout->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout_2->addLayout(epicAcceptanceCriteriaLayout);

        storyLabel = new QLabel(epicDetailScrollAreaContents);
        storyLabel->setObjectName("storyLabel");
        sizePolicy3.setHeightForWidth(storyLabel->sizePolicy().hasHeightForWidth());
        storyLabel->setSizePolicy(sizePolicy3);
        storyLabel->setMinimumSize(QSize(50, 30));
        storyLabel->setMaximumSize(QSize(300, 16777215));
        storyLabel->setFont(font3);

        verticalLayout_2->addWidget(storyLabel);

        storyLayout = new QVBoxLayout();
        storyLayout->setSpacing(0);
        storyLayout->setObjectName("storyLayout");
        storyLayout->setSizeConstraint(QLayout::SetMinimumSize);

        verticalLayout_2->addLayout(storyLayout);

        epicDetailScrollArea->setWidget(epicDetailScrollAreaContents);
        epicBackButton = new QPushButton(epicDetailsPage);
        epicBackButton->setObjectName("epicBackButton");
        epicBackButton->setGeometry(QRect(10, 10, 65, 56));
        epicBackButton->setMinimumSize(QSize(40, 40));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        epicBackButton->setPalette(palette6);
        epicBackButton->setAutoFillBackground(false);
        epicBackButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        epicBackButton->setIcon(icon);
        epicBackButton->setIconSize(QSize(40, 40));
        locationDesc = new QLabel(epicDetailsPage);
        locationDesc->setObjectName("locationDesc");
        locationDesc->setGeometry(QRect(560, 30, 141, 30));
        sizePolicy1.setHeightForWidth(locationDesc->sizePolicy().hasHeightForWidth());
        locationDesc->setSizePolicy(sizePolicy1);
        locationDesc->setMinimumSize(QSize(100, 30));
        locationDesc->setMaximumSize(QSize(16777214, 16777215));
        locationDesc->setFont(font6);
        locationDesc->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        locationDesc->setWordWrap(true);
        stackedWidget->addWidget(epicDetailsPage);
        storyDetailsPage = new QWidget();
        storyDetailsPage->setObjectName("storyDetailsPage");
        storyDetailScrollArea = new QScrollArea(storyDetailsPage);
        storyDetailScrollArea->setObjectName("storyDetailScrollArea");
        storyDetailScrollArea->setGeometry(QRect(40, 80, 661, 511));
        sizePolicy.setHeightForWidth(storyDetailScrollArea->sizePolicy().hasHeightForWidth());
        storyDetailScrollArea->setSizePolicy(sizePolicy);
        storyDetailScrollArea->setMinimumSize(QSize(550, 500));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        QBrush brush27(QColor(0, 0, 0, 255));
        brush27.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush27);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush28(QColor(0, 0, 0, 255));
        brush28.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush28);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        QBrush brush29(QColor(0, 0, 0, 255));
        brush29.setStyle(Qt::NoBrush);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush29);
        storyDetailScrollArea->setPalette(palette7);
        storyDetailScrollArea->setFocusPolicy(Qt::NoFocus);
        storyDetailScrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"    background-color: white;\n"
"    border: solid;\n"
"    border-color: rgb(229, 242, 255);\n"
"    border-width: 2px;\n"
"}\n"
"QScrollArea QWidget {\n"
"    background-color: transparent;\n"
"}\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: none;\n"
"    width: 10px;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #666666;\n"
"    border-radius: 5px;\n"
"}\n"
"QScrollBar::handle:vertical:hover {\n"
"    background-color: #b8b8b8;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"    background: none;\n"
"}\n"
"QScrollBar::sub-line:vertical {\n"
"    background: none;\n"
"}\n"
"QPushButton {\n"
"    border: 1px solid #8f8f91;\n"
"    border-radius: 3px;\n"
"    padding: 5px 10px;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #f6f7fa, stop:1 #dadbde);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(218, 230, 255), stop:1 #f6f7fa);\n"
"}\n"
"QPushButton:pressed {\n"
"    b"
                        "ackground-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(172, 181, 224), stop:1 #c4c6ca);\n"
"}\n"
""));
        storyDetailScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        storyDetailScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        storyDetailScrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        storyDetailScrollArea->setWidgetResizable(true);
        storyDetailScrollAreaWidgetContents = new QWidget();
        storyDetailScrollAreaWidgetContents->setObjectName("storyDetailScrollAreaWidgetContents");
        storyDetailScrollAreaWidgetContents->setGeometry(QRect(0, 0, 647, 700));
        sizePolicy1.setHeightForWidth(storyDetailScrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        storyDetailScrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        storyDetailScrollAreaWidgetContents->setMinimumSize(QSize(0, 700));
        verticalLayout_3 = new QVBoxLayout(storyDetailScrollAreaWidgetContents);
        verticalLayout_3->setObjectName("verticalLayout_3");
        storyNameLabel = new QLabel(storyDetailScrollAreaWidgetContents);
        storyNameLabel->setObjectName("storyNameLabel");
        sizePolicy2.setHeightForWidth(storyNameLabel->sizePolicy().hasHeightForWidth());
        storyNameLabel->setSizePolicy(sizePolicy2);
        storyNameLabel->setMinimumSize(QSize(0, 45));
        storyNameLabel->setFont(font);

        verticalLayout_3->addWidget(storyNameLabel);

        storydueDateLayout = new QHBoxLayout();
        storydueDateLayout->setObjectName("storydueDateLayout");
        storyDueDateLabelDescription = new QLabel(storyDetailScrollAreaWidgetContents);
        storyDueDateLabelDescription->setObjectName("storyDueDateLabelDescription");
        sizePolicy3.setHeightForWidth(storyDueDateLabelDescription->sizePolicy().hasHeightForWidth());
        storyDueDateLabelDescription->setSizePolicy(sizePolicy3);
        storyDueDateLabelDescription->setMinimumSize(QSize(60, 35));
        storyDueDateLabelDescription->setMaximumSize(QSize(50, 16777215));
        storyDueDateLabelDescription->setFont(font3);

        storydueDateLayout->addWidget(storyDueDateLabelDescription);

        storyDueDateLabel = new QLabel(storyDetailScrollAreaWidgetContents);
        storyDueDateLabel->setObjectName("storyDueDateLabel");
        sizePolicy3.setHeightForWidth(storyDueDateLabel->sizePolicy().hasHeightForWidth());
        storyDueDateLabel->setSizePolicy(sizePolicy3);
        storyDueDateLabel->setMinimumSize(QSize(0, 30));
        storyDueDateLabel->setFont(font4);

        storydueDateLayout->addWidget(storyDueDateLabel);


        verticalLayout_3->addLayout(storydueDateLayout);

        storyStatusLayout = new QHBoxLayout();
        storyStatusLayout->setObjectName("storyStatusLayout");
        storyStatusColourIcon = new QLabel(storyDetailScrollAreaWidgetContents);
        storyStatusColourIcon->setObjectName("storyStatusColourIcon");
        sizePolicy3.setHeightForWidth(storyStatusColourIcon->sizePolicy().hasHeightForWidth());
        storyStatusColourIcon->setSizePolicy(sizePolicy3);
        storyStatusColourIcon->setMinimumSize(QSize(0, 0));
        storyStatusColourIcon->setMaximumSize(QSize(30, 50));
        storyStatusColourIcon->setFont(font5);

        storyStatusLayout->addWidget(storyStatusColourIcon);

        storyStatusLabel = new QLabel(storyDetailScrollAreaWidgetContents);
        storyStatusLabel->setObjectName("storyStatusLabel");
        sizePolicy3.setHeightForWidth(storyStatusLabel->sizePolicy().hasHeightForWidth());
        storyStatusLabel->setSizePolicy(sizePolicy3);
        storyStatusLabel->setMinimumSize(QSize(100, 30));
        storyStatusLabel->setMaximumSize(QSize(16777215, 16777215));
        storyStatusLabel->setFont(font4);

        storyStatusLayout->addWidget(storyStatusLabel);


        verticalLayout_3->addLayout(storyStatusLayout);

        storyPriorityLayout = new QHBoxLayout();
        storyPriorityLayout->setObjectName("storyPriorityLayout");
        storyPriorityDescriptionLabel = new QLabel(storyDetailScrollAreaWidgetContents);
        storyPriorityDescriptionLabel->setObjectName("storyPriorityDescriptionLabel");
        sizePolicy3.setHeightForWidth(storyPriorityDescriptionLabel->sizePolicy().hasHeightForWidth());
        storyPriorityDescriptionLabel->setSizePolicy(sizePolicy3);
        storyPriorityDescriptionLabel->setMinimumSize(QSize(95, 0));
        storyPriorityDescriptionLabel->setMaximumSize(QSize(85, 16777215));
        storyPriorityDescriptionLabel->setFont(font3);

        storyPriorityLayout->addWidget(storyPriorityDescriptionLabel);

        storyPriorityLabel = new QLabel(storyDetailScrollAreaWidgetContents);
        storyPriorityLabel->setObjectName("storyPriorityLabel");
        sizePolicy3.setHeightForWidth(storyPriorityLabel->sizePolicy().hasHeightForWidth());
        storyPriorityLabel->setSizePolicy(sizePolicy3);
        storyPriorityLabel->setMinimumSize(QSize(100, 30));
        storyPriorityLabel->setMaximumSize(QSize(16777215, 16777215));
        storyPriorityLabel->setFont(font4);

        storyPriorityLayout->addWidget(storyPriorityLabel);


        verticalLayout_3->addLayout(storyPriorityLayout);

        storyDescriptionLabel_2 = new QLabel(storyDetailScrollAreaWidgetContents);
        storyDescriptionLabel_2->setObjectName("storyDescriptionLabel_2");
        sizePolicy3.setHeightForWidth(storyDescriptionLabel_2->sizePolicy().hasHeightForWidth());
        storyDescriptionLabel_2->setSizePolicy(sizePolicy3);
        storyDescriptionLabel_2->setMinimumSize(QSize(50, 30));
        storyDescriptionLabel_2->setMaximumSize(QSize(300, 16777215));
        storyDescriptionLabel_2->setFont(font3);

        verticalLayout_3->addWidget(storyDescriptionLabel_2);

        storyDescriptionLabel = new QLabel(storyDetailScrollAreaWidgetContents);
        storyDescriptionLabel->setObjectName("storyDescriptionLabel");
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(storyDescriptionLabel->sizePolicy().hasHeightForWidth());
        storyDescriptionLabel->setSizePolicy(sizePolicy4);
        storyDescriptionLabel->setMinimumSize(QSize(100, 0));
        storyDescriptionLabel->setMaximumSize(QSize(16777214, 16777215));
        storyDescriptionLabel->setFont(font6);
        storyDescriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        storyDescriptionLabel->setWordWrap(true);

        verticalLayout_3->addWidget(storyDescriptionLabel);

        storyACLabel = new QLabel(storyDetailScrollAreaWidgetContents);
        storyACLabel->setObjectName("storyACLabel");
        sizePolicy3.setHeightForWidth(storyACLabel->sizePolicy().hasHeightForWidth());
        storyACLabel->setSizePolicy(sizePolicy3);
        storyACLabel->setMinimumSize(QSize(50, 30));
        storyACLabel->setMaximumSize(QSize(300, 16777215));
        storyACLabel->setFont(font3);

        verticalLayout_3->addWidget(storyACLabel);

        storyAcceptanceCriteriaLayout = new QVBoxLayout();
        storyAcceptanceCriteriaLayout->setObjectName("storyAcceptanceCriteriaLayout");
        storyAcceptanceCriteriaLayout->setSizeConstraint(QLayout::SetNoConstraint);

        verticalLayout_3->addLayout(storyAcceptanceCriteriaLayout);

        subtaskLabel = new QLabel(storyDetailScrollAreaWidgetContents);
        subtaskLabel->setObjectName("subtaskLabel");
        sizePolicy3.setHeightForWidth(subtaskLabel->sizePolicy().hasHeightForWidth());
        subtaskLabel->setSizePolicy(sizePolicy3);
        subtaskLabel->setMinimumSize(QSize(50, 30));
        subtaskLabel->setMaximumSize(QSize(300, 16777215));
        subtaskLabel->setFont(font3);

        verticalLayout_3->addWidget(subtaskLabel);

        subTaskLayout = new QVBoxLayout();
        subTaskLayout->setSpacing(0);
        subTaskLayout->setObjectName("subTaskLayout");
        subTaskLayout->setSizeConstraint(QLayout::SetMinimumSize);

        verticalLayout_3->addLayout(subTaskLayout);

        storyDetailScrollArea->setWidget(storyDetailScrollAreaWidgetContents);
        storyBackButton = new QPushButton(storyDetailsPage);
        storyBackButton->setObjectName("storyBackButton");
        storyBackButton->setGeometry(QRect(10, 10, 65, 56));
        storyBackButton->setMinimumSize(QSize(40, 40));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        storyBackButton->setPalette(palette8);
        storyBackButton->setAutoFillBackground(false);
        storyBackButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        storyBackButton->setIcon(icon);
        storyBackButton->setIconSize(QSize(40, 40));
        locationDesc_3 = new QLabel(storyDetailsPage);
        locationDesc_3->setObjectName("locationDesc_3");
        locationDesc_3->setGeometry(QRect(480, 30, 221, 30));
        sizePolicy1.setHeightForWidth(locationDesc_3->sizePolicy().hasHeightForWidth());
        locationDesc_3->setSizePolicy(sizePolicy1);
        locationDesc_3->setMinimumSize(QSize(100, 30));
        locationDesc_3->setMaximumSize(QSize(16777214, 16777215));
        locationDesc_3->setFont(font6);
        locationDesc_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        locationDesc_3->setWordWrap(true);
        stackedWidget->addWidget(storyDetailsPage);
        Profile = new QWidget();
        Profile->setObjectName("Profile");
        profileTitleLabel = new QLabel(Profile);
        profileTitleLabel->setObjectName("profileTitleLabel");
        profileTitleLabel->setGeometry(QRect(80, 50, 151, 51));
        profileTitleLabel->setFont(font);
        profileGroupBox = new QGroupBox(Profile);
        profileGroupBox->setObjectName("profileGroupBox");
        profileGroupBox->setGeometry(QRect(80, 130, 391, 241));
        verticalLayoutWidget = new QWidget(profileGroupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 10, 361, 231));
        profileLayout = new QVBoxLayout(verticalLayoutWidget);
        profileLayout->setObjectName("profileLayout");
        profileLayout->setContentsMargins(0, 0, 0, 0);
        usernameLayout = new QHBoxLayout();
        usernameLayout->setObjectName("usernameLayout");
        usernameLabel = new QLabel(verticalLayoutWidget);
        usernameLabel->setObjectName("usernameLabel");

        usernameLayout->addWidget(usernameLabel);

        usernameInput = new QLineEdit(verticalLayoutWidget);
        usernameInput->setObjectName("usernameInput");

        usernameLayout->addWidget(usernameInput);


        profileLayout->addLayout(usernameLayout);

        firstNameLayout = new QHBoxLayout();
        firstNameLayout->setObjectName("firstNameLayout");
        firstNameLabel = new QLabel(verticalLayoutWidget);
        firstNameLabel->setObjectName("firstNameLabel");

        firstNameLayout->addWidget(firstNameLabel);

        firstNameInput = new QLineEdit(verticalLayoutWidget);
        firstNameInput->setObjectName("firstNameInput");

        firstNameLayout->addWidget(firstNameInput);


        profileLayout->addLayout(firstNameLayout);

        lastNameLayout = new QHBoxLayout();
        lastNameLayout->setObjectName("lastNameLayout");
        lastNameLabel = new QLabel(verticalLayoutWidget);
        lastNameLabel->setObjectName("lastNameLabel");

        lastNameLayout->addWidget(lastNameLabel);

        lastNameInput = new QLineEdit(verticalLayoutWidget);
        lastNameInput->setObjectName("lastNameInput");

        lastNameLayout->addWidget(lastNameInput);


        profileLayout->addLayout(lastNameLayout);

        emailLayout = new QHBoxLayout();
        emailLayout->setObjectName("emailLayout");
        emailLabel = new QLabel(verticalLayoutWidget);
        emailLabel->setObjectName("emailLabel");

        emailLayout->addWidget(emailLabel);

        emailInput = new QLineEdit(verticalLayoutWidget);
        emailInput->setObjectName("emailInput");

        emailLayout->addWidget(emailInput);


        profileLayout->addLayout(emailLayout);

        jobRoleLayout = new QHBoxLayout();
        jobRoleLayout->setObjectName("jobRoleLayout");
        jobRoleLabel = new QLabel(verticalLayoutWidget);
        jobRoleLabel->setObjectName("jobRoleLabel");

        jobRoleLayout->addWidget(jobRoleLabel);

        jobRoleInput = new QLineEdit(verticalLayoutWidget);
        jobRoleInput->setObjectName("jobRoleInput");

        jobRoleLayout->addWidget(jobRoleInput);


        profileLayout->addLayout(jobRoleLayout);

        saveProfileButton = new QPushButton(verticalLayoutWidget);
        saveProfileButton->setObjectName("saveProfileButton");

        profileLayout->addWidget(saveProfileButton);

        stackedWidget->addWidget(Profile);
        frame = new QFrame(HomePage);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 90, 81, 511));
        navBarLayout = new QVBoxLayout(frame);
        navBarLayout->setSpacing(0);
        navBarLayout->setObjectName("navBarLayout");
        mainPageButton = new QPushButton(frame);
        mainPageButton->setObjectName("mainPageButton");
        mainPageButton->setMinimumSize(QSize(40, 50));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        mainPageButton->setPalette(palette9);
        mainPageButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px 10px 0px 0px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/home.png"), QSize(), QIcon::Normal, QIcon::On);
        mainPageButton->setIcon(icon1);
        mainPageButton->setIconSize(QSize(40, 40));

        navBarLayout->addWidget(mainPageButton);

        profileButton = new QPushButton(frame);
        profileButton->setObjectName("profileButton");
        profileButton->setMinimumSize(QSize(40, 50));
        profileButton->setAutoFillBackground(false);
        profileButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px 10px 0px 0px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/profile.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/Icons/profile.png"), QSize(), QIcon::Normal, QIcon::On);
        icon2.addFile(QString::fromUtf8(":/Icons/profileBlue.png"), QSize(), QIcon::Active, QIcon::On);
        profileButton->setIcon(icon2);
        profileButton->setIconSize(QSize(40, 40));

        navBarLayout->addWidget(profileButton);

        projectsButton = new QPushButton(frame);
        projectsButton->setObjectName("projectsButton");
        projectsButton->setMinimumSize(QSize(40, 50));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush20);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush20);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush20);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush20);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush20);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush20);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush20);
        projectsButton->setPalette(palette10);
        projectsButton->setAutoFillBackground(false);
        projectsButton->setStyleSheet(QString::fromUtf8("\n"
"    border: none;\n"
"    background-color: rgba(255, 255, 255, 0);\n"
"	border-radius: 10px 10px 0px 0px;\n"
"    padding: 0;\n"
"    margin: 0;\n"
"\n"
""));
        QIcon icon3;
        QString iconThemeName = QString::fromUtf8("camera-photo");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8(":/Icons/projects.png"), QSize(), QIcon::Normal, QIcon::On);
        }
        projectsButton->setIcon(icon3);
        projectsButton->setIconSize(QSize(40, 40));

        navBarLayout->addWidget(projectsButton);

        teamButton = new QPushButton(frame);
        teamButton->setObjectName("teamButton");
        teamButton->setMinimumSize(QSize(40, 50));
        teamButton->setAutoFillBackground(false);
        teamButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px 10px 0px 0px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/team.png"), QSize(), QIcon::Normal, QIcon::On);
        teamButton->setIcon(icon4);
        teamButton->setIconSize(QSize(40, 40));

        navBarLayout->addWidget(teamButton);

        logOutButton = new QPushButton(frame);
        logOutButton->setObjectName("logOutButton");
        logOutButton->setMinimumSize(QSize(30, 50));
        logOutButton->setAutoFillBackground(false);
        logOutButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 10px 10px 0px 0px;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/exit.png"), QSize(), QIcon::Normal, QIcon::On);
        logOutButton->setIcon(icon5);
        logOutButton->setIconSize(QSize(30, 30));

        navBarLayout->addWidget(logOutButton);

        logOutButton->raise();
        mainPageButton->raise();
        profileButton->raise();
        projectsButton->raise();
        teamButton->raise();
        logoButton = new QPushButton(HomePage);
        logoButton->setObjectName("logoButton");
        logoButton->setGeometry(QRect(10, 10, 65, 66));
        logoButton->setMinimumSize(QSize(50, 50));
        logoButton->setAutoFillBackground(false);
        logoButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/Icons/team.png"), QSize(), QIcon::Normal, QIcon::On);
        logoButton->setIcon(icon6);
        logoButton->setIconSize(QSize(50, 50));
        navBarBackground = new QLabel(HomePage);
        navBarBackground->setObjectName("navBarBackground");
        navBarBackground->setGeometry(QRect(-20, 90, 101, 511));
        QPalette palette11;
        QBrush brush30(QColor(133, 187, 101, 76));
        brush30.setStyle(Qt::SolidPattern);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush30);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush30);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush30);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush30);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush30);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush30);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush30);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush30);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush30);
        navBarBackground->setPalette(palette11);
        navBarBackground->setStyleSheet(QString::fromUtf8("background-color: rgba(133, 187, 101, 0.3);\n"
"border-radius: 10px 10px 0px 0px;\n"
"/*border-width: 1px;\n"
"border-style: solid;*/\n"
""));
        navBarBackground->raise();
        stackedWidget->raise();
        frame->raise();
        logoButton->raise();

        retranslateUi(HomePage);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        homeTitle->setText(QCoreApplication::translate("HomePage", "Home", nullptr));
        companyNameLabel->setText(QCoreApplication::translate("HomePage", "Company", nullptr));
        teamNameLabel->setText(QCoreApplication::translate("HomePage", "Name", nullptr));
        hashtagLabel->setText(QCoreApplication::translate("HomePage", "#", nullptr));
        joinCodeLabel->setText(QCoreApplication::translate("HomePage", "Join code", nullptr));
        companyNameLabel_2->setText(QCoreApplication::translate("HomePage", "Join code:", nullptr));
        projectTitle->setText(QCoreApplication::translate("HomePage", "Projects", nullptr));
        backButton->setText(QString());
        projectNameLabel->setText(QCoreApplication::translate("HomePage", "Project name placeholder", nullptr));
        dueDateLabel_2->setText(QCoreApplication::translate("HomePage", "Due: ", nullptr));
        dueDateLabel->setText(QCoreApplication::translate("HomePage", "Due date placeholder", nullptr));
        statusColourIcon->setText(QCoreApplication::translate("HomePage", "\342\227\217", nullptr));
        statusLabel->setText(QCoreApplication::translate("HomePage", "Status placeholder", nullptr));
        priorityDescriptionLavel->setText(QCoreApplication::translate("HomePage", "Priority: ", nullptr));
        priorityLabel->setText(QCoreApplication::translate("HomePage", "Priority placeholder", nullptr));
        descriptionLabel_2->setText(QCoreApplication::translate("HomePage", "Description:", nullptr));
        descriptionLabel->setText(QCoreApplication::translate("HomePage", "Description placeholder", nullptr));
        ACLabel->setText(QCoreApplication::translate("HomePage", "Acceptance criteria:", nullptr));
        epicLabel->setText(QCoreApplication::translate("HomePage", "Epics:", nullptr));
        locationDesc_2->setText(QCoreApplication::translate("HomePage", "Projects", nullptr));
        epicNameLabel->setText(QCoreApplication::translate("HomePage", "Epic name placeholder", nullptr));
        epicDueDateLabelDescription->setText(QCoreApplication::translate("HomePage", "Due: ", nullptr));
        epicDueDateLabel->setText(QCoreApplication::translate("HomePage", "Due date placeholder", nullptr));
        epicStatusColourIcon->setText(QCoreApplication::translate("HomePage", "\342\227\217", nullptr));
        epicStatusLabel->setText(QCoreApplication::translate("HomePage", "Status placeholder", nullptr));
        epicProrityDescriptionLabel->setText(QCoreApplication::translate("HomePage", "Priority: ", nullptr));
        epicPriorityLabel->setText(QCoreApplication::translate("HomePage", "Priority placeholder", nullptr));
        epicDescription->setText(QCoreApplication::translate("HomePage", "Description:", nullptr));
        epicDescriptionLabel->setText(QCoreApplication::translate("HomePage", "Description placeholder", nullptr));
        epicACLabel->setText(QCoreApplication::translate("HomePage", "Acceptance criteria:", nullptr));
        storyLabel->setText(QCoreApplication::translate("HomePage", "Stories:", nullptr));
        epicBackButton->setText(QString());
        locationDesc->setText(QCoreApplication::translate("HomePage", "Projects > Epics", nullptr));
        storyNameLabel->setText(QCoreApplication::translate("HomePage", "Story name placeholder", nullptr));
        storyDueDateLabelDescription->setText(QCoreApplication::translate("HomePage", "Due: ", nullptr));
        storyDueDateLabel->setText(QCoreApplication::translate("HomePage", "Due date placeholder", nullptr));
        storyStatusColourIcon->setText(QCoreApplication::translate("HomePage", "\342\227\217", nullptr));
        storyStatusLabel->setText(QCoreApplication::translate("HomePage", "Status placeholder", nullptr));
        storyPriorityDescriptionLabel->setText(QCoreApplication::translate("HomePage", "Priority: ", nullptr));
        storyPriorityLabel->setText(QCoreApplication::translate("HomePage", "Priority placeholder", nullptr));
        storyDescriptionLabel_2->setText(QCoreApplication::translate("HomePage", "Description:", nullptr));
        storyDescriptionLabel->setText(QCoreApplication::translate("HomePage", "Description placeholder", nullptr));
        storyACLabel->setText(QCoreApplication::translate("HomePage", "Acceptance criteria:", nullptr));
        subtaskLabel->setText(QCoreApplication::translate("HomePage", "Sub-tasks:", nullptr));
        storyBackButton->setText(QString());
        locationDesc_3->setText(QCoreApplication::translate("HomePage", "Projects > Epics > Stories", nullptr));
        profileTitleLabel->setText(QCoreApplication::translate("HomePage", "Profile", nullptr));
        profileGroupBox->setTitle(QString());
        usernameLabel->setText(QCoreApplication::translate("HomePage", "Username", nullptr));
        firstNameLabel->setText(QCoreApplication::translate("HomePage", "First name", nullptr));
        lastNameLabel->setText(QCoreApplication::translate("HomePage", "Last name", nullptr));
        emailLabel->setText(QCoreApplication::translate("HomePage", "Email ", nullptr));
        jobRoleLabel->setText(QCoreApplication::translate("HomePage", "Job role", nullptr));
        saveProfileButton->setText(QCoreApplication::translate("HomePage", "Save", nullptr));
        mainPageButton->setText(QString());
        profileButton->setText(QString());
        projectsButton->setText(QString());
        teamButton->setText(QString());
        logOutButton->setText(QString());
        logoButton->setText(QString());
        navBarBackground->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
