#ifndef MYSCENE_H
#define MYSCENE_H

#endif // MYSCENE_H
#define Q_OBJECT
#include<QGraphicsScene>
#include<QMediaPlayer>
#include<QMainWindow>
class MyScene:public QGraphicsScene{
Q_OBJECT
public:

    //create sound object
    QMediaPlayer * card_sound = new QMediaPlayer();

    int desloc;
    bool first_time = true;
    bool click = true;



public slots:
    //draw a new card
    void draw();
    // play sound when a new card is drawn
    void play_sound();
    //set the hand of the croupier
    void set_croupier_cards();
    //delete the scene
    void end_game();
    //teste
    void clean_scene();






};
