#ifndef ASSET_MANAGER_HPP
#define ASSET_MANAGER_HPP

// STL Includes
#include <map>
#include <memory>
#include <string>

// SFML Includes
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>


class AssetManager {
public:
    /* Methods to get an already loaded asset */
    std::shared_ptr<sf::Texture> getTexture(const std::string&);
    std::shared_ptr<sf::Font> getFont(const std::string&);
    std::shared_ptr<sf::SoundBuffer> getSoundBuffer(const std::string&);

    /* Methods that load an asset if it's unloaded */
    std::shared_ptr<sf::Texture> loadTexture(const std::string&);
    std::shared_ptr<sf::Font> loadFont(const std::string&);
    std::shared_ptr<sf::SoundBuffer> loadSoundBuffer(const std::string&);

    /* Methods that remove an existing asset */
    void removeTexture(const std::string&);
    void removeFont(const std::string&);
    void removeSoundBuffer(const std::string&);

private:
    std::map<std::string, std::shared_ptr<sf::Texture>> textures;
    std::map<std::string, std::shared_ptr<sf::Font>> fonts;
    std::map<std::string, std::shared_ptr<sf::SoundBuffer>> sounds;
};

#endif /* ASSET_MANAGER_HPP */