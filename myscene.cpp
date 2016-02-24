#include<myscene.h>
#include <mypack.h>
#include <mybutton.h>


void MyScene::play_sound()
{

    card_sound->setMedia(QUrl("qrc:/sounds/card sound.mp3"));
    card_sound->play();

}

void MyScene::set_croupier_cards()
{
    //create croupier first card
    MyPack * croupier_first_card = new MyPack();
    croupier_first_card->card->setPos(200,300);
    addItem(croupier_first_card->card);
    //create croupier second card
    MyPack * croupier_second_card = new MyPack();
    croupier_second_card->card->setPos(350,300);
    addItem(croupier_second_card->card);
    if (croupier_first_card->card_number + croupier_second_card->card_number < 17){
    //create croupier thrird card
     MyPack * croupier_third_card = new MyPack();
     croupier_third_card->card->setPos(500,300);
     addItem(croupier_second_card->card);

     if (croupier_first_card->card_number + croupier_second_card->card_number + croupier_third_card->card_number < 17){
     //create the last possible card of the croupier
     MyPack * croupier_fourth_card = new MyPack();
     croupier_fourth_card->card->setPos(650,300);
     addItem(croupier_fourth_card->card);
     }

    }

}

void MyScene::end_game()
{

this->clear();
delete this;

}

void MyScene::clean_scene()
{



}



void MyScene::draw()
{

   if (first_time){
       desloc = 150;}
   else{
       desloc = desloc + 150;}

    //choose a random card
    MyPack * random_card = new MyPack();
    random_card ->card->setPos(200 + desloc,60);
    //add the card to the scene
    addItem(random_card->card);

    first_time = false;

}
