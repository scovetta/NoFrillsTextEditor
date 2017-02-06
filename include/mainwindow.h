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
#include <QSettings>
#include <QDebug>
#include <QUrl>
#include <QCloseEvent>

#define PROGRAM_NAME        "No Frills Text Editor"
#define PROGRAM_VERSION     "0.11"

#define QT_NO_DEBUG_OUTPUT  1

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /* Load a file (no checking) */
    void do_open(QString target);

protected:
    virtual void closeEvent(QCloseEvent *event);

private slots:
    void on_actionNew_triggered();

    void on_plainTextEdit_textChanged();

    void on_actionExit_triggered();

    void on_actionOpen_triggered();

    void on_actionChange_Font_triggered();

    void on_actionSave_triggered();

    void on_actionSave_As_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    void readSettings();
    bool save();
    bool do_save();
    bool check_save_needed();
    bool is_file_modified();
    int ask_to_save();
    QString get_filename();
    void reset();
    QString ask_for_filename();
    void saveAllState();
};

#endif // MAINWINDOW_H
