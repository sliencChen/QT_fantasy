#include "mainwindow.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    if()
}

MainWindow::~MainWindow()
{

}

void MainWindow::setupUi(QMainWindow *MainWindow)
{
    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->setSpacing(0);
    mainLayout->setContentsMargins(QMargins());

    systemTime = new QLabel();
    netInfo = new QLabel();
    usbInfo = new QLabel();
    mainMenuSettingBtn = new QPushButton();

    QHBoxLayout *topVLayout = new QHBoxLayout();
    topVLayout->addWidget(systemTime);
    topVLayout->addWidget(netInfo);
    topVLayout->addWidget(usbInfo);
    topVLayout->addStretch(1);
    topVLayout->addWidget(mainMenuSettingBtn);

    QGridLayout *middleGridLayout = new QGridLayout();
    middleGridLayout->addWidget(mainMenuMovieBtn, 0, 0, 2, 2);
    middleGridLayout->addWidget(mainMenuLiveBtn, 2, 0, 1, 2);
    middleGridLayout->addWidget(mainMenuYoutubeBtn, 4, 0);
    middleGridLayout->addWidget(mainMenuMusicBtn, 5, 0,);
    middleGridLayout->addWidget(mainMenuSeriesBtn, 2, 1);
    middleGridLayout->addWidget(mainMenuKidsBtn, 3, 1);
    middleGridLayout->addWidget(mainMenuRadioBtn, 4, 1);
    middleGridLayout->addWidget(mainMenuMoreBtn, 5, 1);

    QGridLayout *bottomGridLayout = new QGridLayout();
    bottomGridLayout->addWidget(mainMenuInstallBtn, 0, 0);

    bottomGridLayout->addWidget(mainMenuInstallBtn, 0, 0);
    bottomGridLayout->addWidget(mainMenuChannelBtn, 1, 0);
    bottomGridLayout->addWidget(mainMenuTimesBtn, 2, 0);
    bottomGridLayout->addWidget(mainMenuExpansionBtn, 3, 0);
    bottomGridLayout->addWidget(mainMenuAboutStbBtn, 4, 0);

    mainLayout->addLayout(topVLayout);
    mainLayout->addLayout(middleGridLayout);
    mainLayout->addLayout(bottomGridLayout);
    setLayout(mainLayout);
}
