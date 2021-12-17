#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string card = "";
    string card_notation = "";
    cout << "Enter the card notation: ";
    cin >> card;
    bool valid = false;
    if(card=="AD"||card=="AH"||card=="AS"||card=="AC"||card=="2D"||card=="2H"||card=="2S"||card=="2C"||card=="3D"||card=="3H"||card=="3S"||card=="3C"||card=="4D"||card=="4H"||card=="4S"||card=="4C"||card=="5D"||card=="5H"||card=="5S"||card=="5C"||card=="6D"||card=="6H"||card=="6S"||card=="6C"||card=="7D"||card=="7H"||card=="7S"||card=="7C"||card=="8D"||card=="8H"||card=="8S"||card=="8C"||card=="9D"||card=="9H"||card=="9S"||card=="9C"||card=="10D"||card=="10S"||card=="10D"||card=="10C"||card=="JD"||card=="JH"||card=="JS"||card=="JC"||card=="QD"||card=="QH"||card=="QS"||card=="QC"||card=="KD"||card=="KH"||card=="KS"||card=="KC")
    {
        valid = true;
    }

    while(valid == false)
    {
        cout << "This is an invalid card notation. Enter another card notation: ";
    cin >> card;
    if(card=="AD"||card=="AH"||card=="AS"||card=="AC"||card=="2D"||card=="2H"||card=="2S"||card=="2C"||card=="3D"||card=="3H"||card=="3S"||card=="3C"||card=="4D"||card=="4H"||card=="4S"||card=="4C"||card=="5D"||card=="5H"||card=="5S"||card=="5C"||card=="6D"||card=="6H"||card=="6S"||card=="6C"||card=="7D"||card=="7H"||card=="7S"||card=="7C"||card=="8D"||card=="8H"||card=="8S"||card=="8C"||card=="9D"||card=="9H"||card=="9S"||card=="9C"||card=="10D"||card=="10S"||card=="10D"||card=="10C"||card=="JD"||card=="JH"||card=="JS"||card=="JC"||card=="QD"||card=="QH"||card=="QS"||card=="QC"||card=="KD"||card=="KH"||card=="KS"||card=="KC")
    {
        valid = true;
    }
    if(valid == true)
    {
        break;
    }
    }

    if(card.substr(0,1) == "A")
    {
        card_notation += "Ace of ";
    }
    else if(card.substr(0,1) == "J")
    {
        card_notation += "Jack of ";
    }
    else if(card.substr(0,1) == "Q")
    {
        card_notation += "Queen of ";
    }
    else if(card.substr(0,1) == "K")
    {
        card_notation += "King of ";
    }
    else if(card.substr(0,1) == "2")
    {
        card_notation += "Two of ";
    }
    else if(card.substr(0,1) == "3")
    {
        card_notation += "Three of ";
    }
    else if(card.substr(0,1) == "4")
    {
        card_notation += "Four of ";
    }
    else if(card.substr(0,1) == "5")
    {
        card_notation += "Five of ";
    }
    else if(card.substr(0,1) == "6")
    {
        card_notation += "Six of ";
    }
    else if(card.substr(0,1) == "7")
    {
        card_notation += "Seven of ";
    }
    else if(card.substr(0,1) == "8")
    {
        card_notation += "Eight of ";
    }
    else if(card.substr(0,1) == "9")
    {
        card_notation += "Nine of ";
    }
    else if(card.substr(0,2) == "10")
    {
        card_notation += "Ten of ";
    }  
    if(card.substr(0,2)!="10")
    {
      if(card.substr(1) == "D")
      {
        card_notation+="Diamonds";
      }
      else if(card.substr(1)=="H")
      {
        card_notation+="Hearts";
      }
      else if(card.substr(1)=="S")
      {
        card_notation+="Spades";
      }
      else if(card.substr(1) == "C")
      {
        card_notation+="Clubs";
      }
    }
    else
    {
      if(card.substr(2) == "D")
      {
        card_notation+="Diamonds";
      }
      else if(card.substr(2)=="H")
      {
        card_notation+="Hearts";
      }
      else if(card.substr(2)=="S")
      {
        card_notation+="Spades";
      }
      else
      {
        card_notation+="Clubs";
      }
    }
  cout<< card_notation;
  return 0;
}
