#include <iostream>
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(box b)
{
    std::cout << "Maker: " << b.maker << std::endl;
    std::cout << "Height: " << b.height << std::endl;
    std::cout << "Width: " << b.width << std::endl;
    std::cout << "Length: " << b.length << std::endl;
    std::cout << "Volume: " << b.volume << std::endl;
}
void set_volume(box *b)
{
    b->volume = b->height * b->width * b->length;
}
int main()
{
    box b = {"Box", 10, 10, 10, 0};
    show(b);
    set_volume(&b);
    show(b);
    system("pause");
    return 0;
}