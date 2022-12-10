#pragma once
#include <string>

enum CardColor
{
    Brown,
    Grey,
    Blue,
    Red,
    Green,
    Yellow,
    Purple
};

enum AgeDeck
{
    One,
    Two,
    Three
};

enum ResourceFlag
{
    // Raw
    Wood = 1 << 0,
    Stone = 1 << 2,
    Mineral = 1 << 3,
    Clay = 1 << 4,

    // Manufactured
    Paper = 1 << 5,
    Velvet = 1 << 6,
    Glass = 1 << 7
};

inline ResourceFlag operator|(ResourceFlag a, ResourceFlag b)
{
    return static_cast<ResourceFlag>(static_cast<unsigned int>(a) | static_cast<unsigned int>(b));
}

inline ResourceFlag operator&(ResourceFlag a, ResourceFlag b)
{
    return static_cast<ResourceFlag>(static_cast<unsigned int>(a) & static_cast<unsigned int>(b));
}

enum ScientificFieldFlag
{
    CogWheel = 1 << 0,
    Tablet = 1 << 2,
    Compass = 1 << 4
};

inline ScientificFieldFlag operator|(ScientificFieldFlag a, ScientificFieldFlag b)
{
    return static_cast<ScientificFieldFlag>(static_cast<unsigned int>(a) | static_cast<unsigned int>(b));
}

inline ScientificFieldFlag operator&(ScientificFieldFlag a, ScientificFieldFlag b)
{
    return static_cast<ScientificFieldFlag>(static_cast<unsigned int>(a) & static_cast<unsigned int>(b));
}

struct CardCost
{
    unsigned int m_coin = 0;
    unsigned int m_wood = 0;
    unsigned int m_stone = 0;
    unsigned int m_mineral = 0;
    unsigned int m_clay = 0;
    unsigned int m_paper = 0;
    unsigned int m_velvet = 0;
    unsigned int m_glass = 0;
};

class Card
{
    std::string m_name;
    std::string m_desc;
    
    CardCost m_cost;
    CardColor m_color;
    
    ResourceFlag m_producedResource;
    unsigned int m_producedResourceCount = 1;

    unsigned int m_victoryPoints;
    ScientificFieldFlag m_scientificField;
};