#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDesktopServices>
#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QFontDialog>
#include <QCommandLineParser>
#include <QFontDatabase>
#include <QtGlobal>
#include <QDebug>
#include <QUrl>

#define PROGRAM_NAME        "No Frills Text Editor"
#define PROGRAM_VERSION     "0.10"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    bool do_save();
    void do_open(QString target);
    bool save();
    bool check_save_needed();
    bool is_file_modified();
    int ask_to_save();
    QString get_filename();
    void reset();
    QString ask_for_filename();

private slots:
    void on_actionNew_triggered();

    void on_plainTextEdit_textChanged();

    void on_actionExit_triggered();

    void on_actionOpen_triggered();

    void on_actionChange_Font_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionHome_Page_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
