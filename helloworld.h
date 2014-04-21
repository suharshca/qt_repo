#include <QMainWindow>

namespace Ui {
class helloworld;
}

class helloworld : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit helloworld(QWidget *parent = 0);
    ~helloworld();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::helloworld *ui;
};

#endif // HELLOWORLD_H
