#include "AssetManager.hpp"

AssetManager::AssetManager(const std::string& tex_path, const std::string& font_path, const std::string& sound_path)
: texture_path(tex_path)
{
    this->font_path = font_path;
    this->sound_path = sound_path;
}

/* Methods to get an already loaded asset */
std::shared_ptr<sf::Texture> AssetManager::getTexture(const std::string& tex_name) {
    auto map_rv = textures.find(tex_name);

    if (map_rv == textures.end()) {
        throw std::invalid_argument("Could not find texture with name " + tex_name);
    }

    return map_rv->second;
}

std::shared_ptr<sf::Font> AssetManager::getFont(const std::string& font_name) {
    auto map_rv = fonts.find(font_name);

    if (map_rv == fonts.end()) {
        throw std::invalid_argument("Could not find font with name " + font_name);
    }

    return map_rv->second;
}

std::shared_ptr<sf::SoundBuffer> AssetManager::getSoundBuffer(const std::string& sound_name) {
    auto map_rv = sounds.find(sound_name);

    if (map_rv == sounds.end()) {
        throw std::invalid_argument("Could not find sound with name " + sound_name);
    }

    return map_rv->second;
}


/* Methods that load an asset if it's unloaded */
std::shared_ptr<sf::Texture> AssetManager::loadTexture(const std::string& tex_name) {
    auto map_rv = textures.find(tex_name);

    // Texture has already been loaded, return it.
    if (map_rv != textures.end()) return map_rv->second;

    // Otherwise, create a new texture.
    auto texture = std::make_shared<sf::Texture>();
    texture->loadFromFile(tex_name);
}

std::shared_ptr<sf::Font> AssetManager::loadFont(const std::string& font_name) {
    (void) font_name;
}

std::shared_ptr<sf::SoundBuffer> AssetManager::loadSoundBuffer(const std::string& sound_name) {
    (void) sound_name;
}


/* Methods that remove an existing asset */
void AssetManager::removeTexture(const std::string& tex_name) {
    auto map_rv = textures.find(tex_name);

    // Nothing to erase, texture doesn't exist.
    if (map_rv == textures.end()) return;

    textures.erase(map_rv);
}

void AssetManager::removeFont(const std::string& font_name) {
    auto map_rv = fonts.find(font_name);

    // Nothing to erase, font doesn't exist.
    if (map_rv == fonts.end()) return;

    fonts.erase(map_rv);

}

void AssetManager::removeSoundBuffer(const std::string& sound_name) {
    auto map_rv =  sounds.find(sound_name);

    // Nothing to erase sound doesn't exist.
    if (map_rv == sounds.end()) return;

    sounds.erase(map_rv);
}
