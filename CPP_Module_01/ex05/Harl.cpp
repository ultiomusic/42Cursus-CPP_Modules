#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "7XL-çift peynirli-üçlü turşu-özel-ketçaplı burgerime fazladan domuz \
pastırması yemeyi seviyorum. Gerçekten seviyorum!" << std::endl;
}

void Harl::info()
{
    std::cout << "Ekstra domuz pastırması eklemenin daha fazla paraya mal olduğuna inanamıyorum. \
Burgerime yeterince pastırma koymadınız! Yapsaydınız, daha fazlasını istemezdim!" << std::endl;
}

void Harl::warning()
{
    std::cout << "Bence bedavaya fazladan pastırma yemeyi hak ediyorum. Ben yıllardır \
geliyorum, sen geçen aydan beri burada çalışmaya başladın." << std::endl;
}

void Harl::error()
{
    std::cout << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum." << std::endl;
}

void Harl::complain(std::string level)
{
    int i = -1;
    point p[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levellist[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while(i++ < 4)
        if(level == levellist[i])
            break;
    if(i == 4)
        return;
    (this->*p[i])();
}
