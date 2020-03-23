#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLabel;
class QPushButton;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setupUi(QMainWindow *MainWindow);

private:
        QLabel *systemTime;
        QPushButton *mainMenuMovieBtn;
        QPushButton *mainMenuLiveBtn;
        QPushButton *mainMenuYoutubeBtn;
        QPushButton *mainMenuMusicBtn;
        QPushButton *mainMenuSeriesBtn;
        QPushButton *mainMenuKidsBtn;
        QPushButton *mainMenuRadioBtn;
        QPushButton *mainMenuMoreBtn;
        QPushButton *mainMenuInstallBtn;
        QPushButton *mainMenuChannelBtn;
        QPushButton *mainMenuTimesBtn;
        QPushButton *mainMenuExpansionBtn;
        QPushButton *mainMenuAboutStbBtn;
        QPushButton *mainMenuSettingBtn;

        QLabel *netInfo;
        QLabel *usbInfo;
};

#endif // MAINWINDOW_H
