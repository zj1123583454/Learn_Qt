#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define aotu
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    #ifndef aotu
    void on_pushButton_clicked();
    #else
    void on_lineEdit_textChanged(const QString &arg1);
    #endif

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
