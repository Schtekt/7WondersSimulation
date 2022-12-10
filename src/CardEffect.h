#pragma once

#include <memory>
#include <Card.h>

class Player;

class CardEffect
{
    std::shared_ptr<Player> m_spParent;
    
    virtual void OnCardBuild()
    {

    }

    virtual void OnGameEnd(Card& card)
    {

    }
};