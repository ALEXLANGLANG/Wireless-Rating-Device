/********************************************************************************
** Form generated from reading UI file 'QtGuiApplication1.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUIAPPLICATION1_H
#define UI_QTGUIAPPLICATION1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiApplication1Class
{
public:
    QAction *action;
    QAction *action123;
    QAction *action_2;
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label_2;
    QListWidget *listWidget;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication1Class)
    {
        if (QtGuiApplication1Class->objectName().isEmpty())
            QtGuiApplication1Class->setObjectName(QStringLiteral("QtGuiApplication1Class"));
        QtGuiApplication1Class->resize(502, 482);
        action = new QAction(QtGuiApplication1Class);
        action->setObjectName(QStringLiteral("action"));
        action123 = new QAction(QtGuiApplication1Class);
        action123->setObjectName(QStringLiteral("action123"));
        action_2 = new QAction(QtGuiApplication1Class);
        action_2->setObjectName(QStringLiteral("action_2"));
        centralWidget = new QWidget(QtGuiApplication1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(180, 170, 111, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        comboBox->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 170, 63, 21));
        label_2->setFont(font);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(100, 210, 231, 192));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(10);
        listWidget->setFont(font1);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(360, 210, 98, 139));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setVerticalSpacing(28);
        formLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_3);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 20, 110, 25));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 60, 110, 25));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(360, 20, 89, 25));
        pushButton_4->setFont(font);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 100, 111, 25));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 60, 89, 25));
        pushButton_5->setFont(font);
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(360, 100, 89, 25));
        pushButton_6->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 20, 63, 25));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 60, 63, 25));
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 100, 63, 25));
        label_5->setFont(font);
        QtGuiApplication1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtGuiApplication1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 502, 26));
        QtGuiApplication1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtGuiApplication1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication1Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication1Class);

        QMetaObject::connectSlotsByName(QtGuiApplication1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication1Class)
    {
        QtGuiApplication1Class->setWindowTitle(QApplication::translate("QtGuiApplication1Class", "QtGuiApplication1", Q_NULLPTR));
        action->setText(QApplication::translate("QtGuiApplication1Class", "\345\257\274\345\207\272\346\240\274\345\274\217\350\256\276\347\275\256", Q_NULLPTR));
        action123->setText(QApplication::translate("QtGuiApplication1Class", "123", Q_NULLPTR));
        action_2->setText(QApplication::translate("QtGuiApplication1Class", "\350\276\223\345\207\272\346\240\274\345\274\217\350\256\276\347\275\256", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("QtGuiApplication1Class", "COM0", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM1", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM2", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM3", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM4", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM5", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM6", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM7", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM8", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM9", Q_NULLPTR)
         << QApplication::translate("QtGuiApplication1Class", "COM10", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("QtGuiApplication1Class", "\344\270\262\345\217\243\351\200\211\346\213\251", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QtGuiApplication1Class", "\345\257\274\345\207\272", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("QtGuiApplication1Class", "\346\270\205\347\251\272", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QtGuiApplication1Class", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("QtGuiApplication1Class", "3", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("QtGuiApplication1Class", "3", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("QtGuiApplication1Class", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("QtGuiApplication1Class", "\347\241\256\350\256\244", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("QtGuiApplication1Class", "\347\241\256\350\256\244", Q_NULLPTR));
        label_3->setText(QApplication::translate("QtGuiApplication1Class", "\344\272\247\345\223\201\346\225\260\351\207\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("QtGuiApplication1Class", "\346\265\213\350\257\225\347\247\215\347\261\273", Q_NULLPTR));
        label_5->setText(QApplication::translate("QtGuiApplication1Class", "\346\265\213\350\257\225\344\273\243\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication1Class: public Ui_QtGuiApplication1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUIAPPLICATION1_H
