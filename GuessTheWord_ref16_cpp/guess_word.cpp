#include "guess_word.h"
#include "./ui_guess_word.h"
#include <string>

guess_word::guess_word(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::guess_word)
{
    ui->setupUi(this);
    reset_buttons();
    set_game();
    set_catagories();
}

guess_word::~guess_word()
{
    delete ui;
}

void guess_word::but1_press() {ui->but1->setText(game[game_id].refs[0]); ui->but1->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but2_press() {ui->but2->setText(game[game_id].refs[1]); ui->but2->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but3_press() {ui->but3->setText(game[game_id].refs[2]); ui->but3->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but4_press() {ui->but4->setText(game[game_id].refs[3]); ui->but4->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but5_press() {ui->but5->setText(game[game_id].refs[4]); ui->but5->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but6_press() {ui->but6->setText(game[game_id].refs[5]); ui->but6->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but7_press() {ui->but7->setText(game[game_id].refs[6]); ui->but7->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but8_press() {ui->but8->setText(game[game_id].refs[7]); ui->but8->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but9_press() {ui->but9->setText(game[game_id].refs[8]); ui->but9->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but10_press() {ui->but10->setText(game[game_id].refs[9]); ui->but10->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but11_press() {ui->but11->setText(game[game_id].refs[10]); ui->but11->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but12_press() {ui->but12->setText(game[game_id].refs[11]); ui->but12->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but13_press() {ui->but13->setText(game[game_id].refs[12]); ui->but13->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but14_press() {ui->but14->setText(game[game_id].refs[13]); ui->but14->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but15_press() {ui->but15->setText(game[game_id].refs[14]); ui->but15->disconnect(); buttons_pressed++; half_game_hint();}
void guess_word::but16_press() {ui->but16->setText(game[game_id].refs[15]); ui->but16->disconnect(); buttons_pressed++; half_game_hint();}

void guess_word::reset_buttons()
{
    ui->title->setText("Category");
    ui->but1->setText("1");
    ui->but2->setText("2");
    ui->but3->setText("3");
    ui->but4->setText("4");
    ui->but5->setText("5");
    ui->but6->setText("6");
    ui->but7->setText("7");
    ui->but8->setText("8");
    ui->but9->setText("9");
    ui->but10->setText("10");
    ui->but11->setText("11");
    ui->but12->setText("12");
    ui->but13->setText("13");
    ui->but14->setText("14");
    ui->but15->setText("15");
    ui->but16->setText("16");
    buttons_pressed = 0;
    reset = true;
}

void guess_word::half_game_hint()
{
    if (buttons_pressed == 8)
    {
        ui->title->setText(game[game_id].cat_hint);
    }
}

void guess_word::enable_buttons()
{
    ui->but1->connect(ui->but1,SIGNAL(released()), this, SLOT(but1_press()));
    ui->but2->connect(ui->but2,SIGNAL(released()), this, SLOT(but2_press()));
    ui->but3->connect(ui->but3,SIGNAL(released()), this, SLOT(but3_press()));
    ui->but4->connect(ui->but4,SIGNAL(released()), this, SLOT(but4_press()));
    ui->but5->connect(ui->but5,SIGNAL(released()), this, SLOT(but5_press()));
    ui->but6->connect(ui->but6,SIGNAL(released()), this, SLOT(but6_press()));
    ui->but7->connect(ui->but7,SIGNAL(released()), this, SLOT(but7_press()));
    ui->but8->connect(ui->but8,SIGNAL(released()), this, SLOT(but8_press()));
    ui->but9->connect(ui->but9,SIGNAL(released()), this, SLOT(but9_press()));
    ui->but10->connect(ui->but10,SIGNAL(released()), this, SLOT(but10_press()));
    ui->but11->connect(ui->but11,SIGNAL(released()), this, SLOT(but11_press()));
    ui->but12->connect(ui->but12,SIGNAL(released()), this, SLOT(but12_press()));
    ui->but13->connect(ui->but13,SIGNAL(released()), this, SLOT(but13_press()));
    ui->but14->connect(ui->but14,SIGNAL(released()), this, SLOT(but14_press()));
    ui->but15->connect(ui->but15,SIGNAL(released()), this, SLOT(but15_press()));
    ui->but16->connect(ui->but16,SIGNAL(released()), this, SLOT(but16_press()));
}

void guess_word::disable_buttons() {
    ui->but1->disconnect();
    ui->but2->disconnect();
    ui->but3->disconnect();
    ui->but4->disconnect();
    ui->but5->disconnect();
    ui->but6->disconnect();
    ui->but7->disconnect();
    ui->but8->disconnect();
    ui->but9->disconnect();
    ui->but10->disconnect();
    ui->but11->disconnect();
    ui->but12->disconnect();
    ui->but13->disconnect();
    ui->but14->disconnect();
    ui->but15->disconnect();
    ui->but16->disconnect();
}

void guess_word::on_commandLinkButton_released()
{
    if (ui->radioButton->isChecked() || ui->radioButton_2->isChecked() || ui->radioButton_3->isChecked() ||
            ui->radioButton_4->isChecked() || ui->radioButton_5->isChecked())
    {
        if (reset)
        {
            enable_buttons();
            if(ui->radioButton->isChecked()) {game_id = 0;}
            if(ui->radioButton_2->isChecked()) {game_id = 1;}
            if(ui->radioButton_3->isChecked()) {game_id = 2;}
            if(ui->radioButton_4->isChecked()) {game_id = 3;}
            if(ui->radioButton_5->isChecked()) {game_id = 4;}
//            ui->title->setText(game[game_id].cat);
            reset = false;
        }
    }

}

void guess_word::on_commandLinkButton_2_released()
{
    reset_buttons();
    disable_buttons();
}

void guess_word::set_catagories()
{
    game[0].cat = "Cat1";
    game[1].cat = "Cat2";
    game[2].cat = "Cat3";
    game[3].cat = "Cat4";
    game[4].cat = "Cat5";

    game[0].cat_hint = "Adventure";
    game[1].cat_hint = "Music";
    game[2].cat_hint = "Desi Food";
    game[3].cat_hint = "Bollywood";
    game[4].cat_hint = "International Food";

    ui->radioButton->setText(game[0].cat);
    ui->radioButton_2->setText(game[1].cat);
    ui->radioButton_3->setText(game[2].cat);
    ui->radioButton_4->setText(game[3].cat);
    ui->radioButton_5->setText(game[4].cat);
}


void guess_word::set_game()
{
    game[0].refs[0] = "The Upside";
    game[0].refs[1] = "Not for people\n with Phobia";
    game[0].refs[2] = "Dud";
    game[0].refs[3] = "Dud";
    game[0].refs[4] = "Banned in cities";
    game[0].refs[5] = "Dud";
    game[0].refs[6] = "564.3 km";
    game[0].refs[7] = "Dud";
    game[0].refs[8] = "Dud";
    game[0].refs[9] = "Deadpool2";
    game[0].refs[10] = "Dud";
    game[0].refs[11] = "Dud";
    game[0].refs[12] = "Transformers3";
    game[0].refs[13] = "Dud";
    game[0].refs[14] = "Man vs Wild";
    game[0].refs[15] = "Zindagi Na \nMilegi Doobara";

    game[1].refs[0] = "Fastest";
    game[1].refs[1] = "Music to Be\n Murdered By";
    game[1].refs[2] = "Dud";
    game[1].refs[3] = "2019";
    game[1].refs[4] = "Dud";
    game[1].refs[5] = "Dud";
    game[1].refs[6] = "Juice Wrld";
    game[1].refs[7] = "Dud";
    game[1].refs[8] = "Top 10";
    game[1].refs[9] = "Japanease Movie\n Series";
    game[1].refs[10] = "Dud";
    game[1].refs[11] = "Hollywood Movie";
    game[1].refs[12] = "Dud";
    game[1].refs[13] = "Dud";
    game[1].refs[14] = "300 words in\n 30 sec";
    game[1].refs[15] = "Dud";

    game[2].refs[0] = "Dud";
    game[2].refs[1] = "multiple offical\n variants";
    game[2].refs[2] = "Dud";
    game[2].refs[3] = "Dud";
    game[2].refs[4] = "Sweet";
    game[2].refs[5] = "Sugar Syrup";
    game[2].refs[6] = "Dud";
    game[2].refs[7] = "Paneer's Cousin";
    game[2].refs[8] = "Dud";
    game[2].refs[9] = "Generally Spherical";
    game[2].refs[10] = "Dud";
    game[2].refs[11] = "2017 : Bangal";
    game[2].refs[12] = "Dud";
    game[2].refs[13] = "Jagannath Puri";
    game[2].refs[14] = "Not Gulab Jamun";
    game[2].refs[15] = "Dud";

    game[3].refs[0] = "2006";
    game[3].refs[1] = "Dud";
    game[3].refs[2] = "\"Kyu Pande. Dhish!!\n Dhish!! Dhish!!\"";
    game[3].refs[3] = "Dud";
    game[3].refs[4] = "Dud";
    game[3].refs[5] = "Dud";
    game[3].refs[6] = "British Raj";
    game[3].refs[7] = "College";
    game[3].refs[8] = "Dud";
    game[3].refs[9] = "Kakori";
    game[3].refs[10] = "Chandrashekhar\n Azad";
    game[3].refs[11] = "Dud";
    game[3].refs[12] = "MiG-21";
    game[3].refs[13] = "Dud";
    game[3].refs[14] = "Dud";
    game[3].refs[15] = "Politics";

    game[4].refs[0] = "Dud";
    game[4].refs[1] = "NorthAmerica";
    game[4].refs[2] = "Dud";
    game[4].refs[3] = "Chickpeas Usually";
    game[4].refs[4] = "Street Food";
    game[4].refs[5] = "Dud";
    game[4].refs[6] = "Balls";
    game[4].refs[7] = "Dud";
    game[4].refs[8] = "Dud";
    game[4].refs[9] = "Served Hot";
    game[4].refs[10] = "Dud";
    game[4].refs[11] = "Dud";
    game[4].refs[12] = "Pita Bread";
    game[4].refs[13] = "Dud";
    game[4].refs[14] = "Leon Grill";
    game[4].refs[15] = "MiddleEast";
}
