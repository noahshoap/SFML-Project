#ifndef ASSET_MANAGER_HPP
#define ASSET_MANAGER_HPP

// STL Includes
#include <unordered_map>
#include <memory>
#include <string>
#include <stdexcept>
#include <iostream>

// SFML Includes
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// My Includes
#include "Tile.hpp"
#include <fstream>

class AssetManager {
public:
    AssetManager(const std::string& tex_path = "textures/", const std::string& font_path = "fonts/", const std::string& sound_path = "sounds/",
    const std::string& tile_path = "tiles/");
    /* Methods to get an already loaded asset */
    std::shared_ptr<sf::Texture> getTexture(const std::string&);
    std::shared_ptr<sf::Font> getFont(const std::string&);
    std::shared_ptr<sf::SoundBuffer> getSoundBuffer(const std::string&);
    std::shared_ptr<Tile> getTile(const std::string&);

    /* Methods that load an asset if it's unloaded */
    std::shared_ptr<sf::Texture> loadTexture(const std::string&);
    std::shared_ptr<sf::Font> loadFont(const std::string&);
    std::shared_ptr<sf::SoundBuffer> loadSoundBuffer(const std::string&);
    std::shared_ptr<Tile> loadTile(const std::string&);

    /* Methods that remove an existing asset */
    void removeTexture(const std::string&);
    void removeFont(const std::string&);
    void removeSoundBuffer(const std::string&);
    void removeTile(const std::string&);

private:
    std::unordered_map<std::string, std::shared_ptr<sf::Texture>> textures;
    std::unordered_map<std::string, std::shared_ptr<sf::Font>> fonts;
    std::unordered_map<std::string, std::shared_ptr<sf::SoundBuffer>> sounds;
    std::unordered_map<std::string, std::shared_ptr<Tile>> tiles;

    /* Paths to look for files in */
    std::string texture_path;
    std::string font_path;
    std::string sound_path;
    std::string tile_path;
};

#endif /* ASSET_MANAGER_HPP */