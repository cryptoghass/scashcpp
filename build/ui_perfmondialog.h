/********************************************************************************
** Form generated from reading UI file 'perfmondialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFMONDIALOG_H
#define UI_PERFMONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets//QAction>
#include <QtWidgets//QApplication>
#include <QtWidgets//QButtonGroup>
#include <QtWidgets//QDialog>
#include <QtWidgets//QGridLayout>
#include <QtWidgets//QHeaderView>
#include <QtWidgets//QLabel>
#include <QtWidgets//QTabWidget>
#include <QtWidgets//QVBoxLayout>
#include <QtWidgets//QWidget>

QT_BEGIN_NAMESPACE

class Ui_PerfMonDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_network;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *labelIncomingTraffic;
    QLabel *label_3;
    QLabel *labelOutgoingTraffic;
    QLabel *label_8;
    QLabel *labelTotalTraffic;
    QLabel *label_5;
    QLabel *labelIncomingConnections;
    QLabel *label_7;
    QLabel *labelOutgoingConnections;
    QLabel *label_9;
    QLabel *labelBannedCount;
    QWidget *tab_local;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QLabel *labelMemoryUsage;
    QLabel *label_6;
    QLabel *labelDatabaseQueries;
    QLabel *label_4;
    QLabel *labelDatabaseAvgTime;
    QLabel *label_10;
    QLabel *labelBlocksAdded;
    QLabel *label_12;
    QLabel *labelBlocksRejected;

    void setupUi(QDialog *PerfMonDialog)
    {
        if (PerfMonDialog->objectName().isEmpty())
            PerfMonDialog->setObjectName(QString::fromUtf8("PerfMonDialog"));
        PerfMonDialog->resize(740, 593);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PerfMonDialog->sizePolicy().hasHeightForWidth());
        PerfMonDialog->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(PerfMonDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(PerfMonDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_network = new QWidget();
        tab_network->setObjectName(QString::fromUtf8("tab_network"));
        gridLayout = new QGridLayout(tab_network);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(tab_network);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_2);

        labelIncomingTraffic = new QLabel(tab_network);
        labelIncomingTraffic->setObjectName(QString::fromUtf8("labelIncomingTraffic"));

        verticalLayout->addWidget(labelIncomingTraffic);

        label_3 = new QLabel(tab_network);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_3);

        labelOutgoingTraffic = new QLabel(tab_network);
        labelOutgoingTraffic->setObjectName(QString::fromUtf8("labelOutgoingTraffic"));

        verticalLayout->addWidget(labelOutgoingTraffic);

        label_8 = new QLabel(tab_network);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_8);

        labelTotalTraffic = new QLabel(tab_network);
        labelTotalTraffic->setObjectName(QString::fromUtf8("labelTotalTraffic"));

        verticalLayout->addWidget(labelTotalTraffic);

        label_5 = new QLabel(tab_network);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_5);

        labelIncomingConnections = new QLabel(tab_network);
        labelIncomingConnections->setObjectName(QString::fromUtf8("labelIncomingConnections"));

        verticalLayout->addWidget(labelIncomingConnections);

        label_7 = new QLabel(tab_network);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_7);

        labelOutgoingConnections = new QLabel(tab_network);
        labelOutgoingConnections->setObjectName(QString::fromUtf8("labelOutgoingConnections"));

        verticalLayout->addWidget(labelOutgoingConnections);

        label_9 = new QLabel(tab_network);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 20));

        verticalLayout->addWidget(label_9);

        labelBannedCount = new QLabel(tab_network);
        labelBannedCount->setObjectName(QString::fromUtf8("labelBannedCount"));

        verticalLayout->addWidget(labelBannedCount);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab_network, QString());
        tab_local = new QWidget();
        tab_local->setObjectName(QString::fromUtf8("tab_local"));
        verticalLayout_5 = new QVBoxLayout(tab_local);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(tab_local);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label);

        labelMemoryUsage = new QLabel(tab_local);
        labelMemoryUsage->setObjectName(QString::fromUtf8("labelMemoryUsage"));

        verticalLayout_5->addWidget(labelMemoryUsage);

        label_6 = new QLabel(tab_local);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_6);

        labelDatabaseQueries = new QLabel(tab_local);
        labelDatabaseQueries->setObjectName(QString::fromUtf8("labelDatabaseQueries"));

        verticalLayout_5->addWidget(labelDatabaseQueries);

        label_4 = new QLabel(tab_local);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_4);

        labelDatabaseAvgTime = new QLabel(tab_local);
        labelDatabaseAvgTime->setObjectName(QString::fromUtf8("labelDatabaseAvgTime"));

        verticalLayout_5->addWidget(labelDatabaseAvgTime);

        label_10 = new QLabel(tab_local);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_10);

        labelBlocksAdded = new QLabel(tab_local);
        labelBlocksAdded->setObjectName(QString::fromUtf8("labelBlocksAdded"));

        verticalLayout_5->addWidget(labelBlocksAdded);

        label_12 = new QLabel(tab_local);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_12);

        labelBlocksRejected = new QLabel(tab_local);
        labelBlocksRejected->setObjectName(QString::fromUtf8("labelBlocksRejected"));

        verticalLayout_5->addWidget(labelBlocksRejected);

        tabWidget->addTab(tab_local, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(PerfMonDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PerfMonDialog);
    } // setupUi

    void retranslateUi(QDialog *PerfMonDialog)
    {
        PerfMonDialog->setWindowTitle(QApplication::translate("PerfMonDialog", "Scash - Performance monitor", 0));
        label_2->setText(QApplication::translate("PerfMonDialog", "Incoming traffic:", 0));
        labelIncomingTraffic->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_3->setText(QApplication::translate("PerfMonDialog", "Outgoing traffic:", 0));
        labelOutgoingTraffic->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_8->setText(QApplication::translate("PerfMonDialog", "Total traffic amount:", 0));
        labelTotalTraffic->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_5->setText(QApplication::translate("PerfMonDialog", "Incoming connections count:", 0));
        labelIncomingConnections->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_7->setText(QApplication::translate("PerfMonDialog", "Outgoing connections count:", 0));
        labelOutgoingConnections->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_9->setText(QApplication::translate("PerfMonDialog", "Banned hosts:", 0));
        labelBannedCount->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_network), QApplication::translate("PerfMonDialog", "&Network performance", 0));
        label->setText(QApplication::translate("PerfMonDialog", "Memory usage:", 0));
        labelMemoryUsage->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_6->setText(QApplication::translate("PerfMonDialog", "Database file accesses:", 0));
        labelDatabaseQueries->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_4->setText(QApplication::translate("PerfMonDialog", "Database access time:", 0));
        labelDatabaseAvgTime->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_10->setText(QApplication::translate("PerfMonDialog", "Blocks added:", 0));
        labelBlocksAdded->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        label_12->setText(QApplication::translate("PerfMonDialog", "Blocks rejected:", 0));
        labelBlocksRejected->setText(QApplication::translate("PerfMonDialog", "                Loading...", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_local), QApplication::translate("PerfMonDialog", "&Local performance", 0));
    } // retranslateUi

};

namespace Ui {
    class PerfMonDialog: public Ui_PerfMonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFMONDIALOG_H
