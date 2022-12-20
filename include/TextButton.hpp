#ifndef TEXT_BUTTON_HPP
#define TEXT_BUTTON_HPP

class TextButton : public Button {
public:
    TextButton(std::shared_ptr<AssetManager>);
    TextButton(std::shared_ptr<AssetManager>, const sf::Vector2f&);
    TextButton(std::shared_ptr<AssetManager>, const sf::Vector2f&, const sf::Vector2f&);
    TextButton(std::shared_ptr<AssetManager>, const sf::Vector2f&, const sf::Vector2f&, const sf::Color&);
    TextButton(std::shared_ptr<AssetManager>, const sf::Vector2f&, const sf::Vector2f&, const sf::Color&, const std::string&);
    void setText(const std::string&, const std::string& = "Arial");
    virtual void clicked() final override;
    virtual void draw(sf::RenderTarget&, sf::RenderStates) final override;
protected:
    std::shared_ptr<sf::Font> font;
    std::string text_literal;
    sf::Text text;
};

#endif /* TEXT_BUTTON_HPP */