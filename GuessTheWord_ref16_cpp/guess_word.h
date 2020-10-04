#ifndef GUESS_WORD_H
#define GUESS_WORD_H

#include <QMainWindow>
#include <QPushButton>
#include "references.h"

QT_BEGIN_NAMESPACE
namespace Ui { class guess_word; }
QT_END_NAMESPACE

class guess_word : public QMainWindow
{
    Q_OBJECT

public:
    guess_word(QWidget *parent = nullptr);
    ~guess_word();

private slots:
    void on_commandLinkButton_released();

    void on_commandLinkButton_2_released();

    void but1_press();
    void but2_press();
    void but3_press();
    void but4_press();
    void but5_press();
    void but6_press();
    void but7_press();
    void but8_press();
    void but9_press();
    void but10_press();
    void but11_press();
    void but12_press();
    void but13_press();
    void but14_press();
    void but15_press();
    void but16_press();

private:

    void set_catagories();
    void set_game();
    void reset_buttons();
    void enable_buttons();
    void disable_buttons();
    Ui::guess_word *ui;
    bool reset = true;
    S_REF_SET game[5];
    uint8_t game_id = 0;
};
#endif // GUESS_WORD_H
